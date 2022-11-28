#include <bits/stdc++.h>
using namespace std;

int n;
int x[30];
//-------------------Cac ham su dung--------------------
void init(); // Khoi tao cau hinh dau tien
void display(); // In ra cau hinh hien tai
void genNext(); // Sinh ra cau hinh tiep theo
bool isLast(); // Kiem tra cau hinh cuoi cung
//------------------------------------------------------

int main(){
	init(); 
    while(!isLast()){
		display();
        genNext();
    }
    display();
}

void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
        x[i]=0;
	}
}

void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;   
}

bool isLast(){
	for(int i=1;i<=n;i++){
		if(x[i]==0){
			return false;
		}
	}
	return true;
}

void genNext(){
	int i=n;
	while(x[i]==1){
		x[i] = 0;
		i--;
	}
	x[i]=1;
}
