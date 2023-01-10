#include <bits/stdc++.h>
using namespace std;

int n;
int x[30];
int a[30];
//-------------------Cac ham su dung--------------------
void init(); // Khoi tao cau hinh dau tien
void display(); // In ra cau hinh hien tai
void genNext(); // Sinh ra cau hinh tiep theo
bool isLast(); // Kiem tra cau hinh cuoi cung
//------------------------------------------------------
vector<vector<int>> v;

int main(){
	init(); 
    while(!isLast()){
		display();
        genNext();
    }
    display();
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

void init(){
	cin >> n;
	for(int i = 1; i <= n; i++){
        x[i] = 0;
	}
    for(int i = n; i >= 1; i--)
        a[i] = i;
}

void display(){
    vector<int> t;
	for(int i = n; i >= 1; i--){ 
        if(x[i] == 1){
            t.push_back(a[i]);
        }
	}
    sort(t.begin(), t.end());
    if(t.size() != 0)
        v.push_back(t);
}

bool isLast(){
	for(int i = 1; i <= n; i++){
		if(x[i] == 0){
			return false;
		}
	}
	return true;
}

void genNext(){
	int i = n;
	while(x[i] == 1){
		x[i] = 0;
		i--;
	}
	x[i] = 1;
}
