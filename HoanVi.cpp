#written by me
#include <bits/stdc++.h>
using namespace std;

int n;
int x[30];
//-------------------Cac ham su dung--------------------
void init(); // Khoi tao cau hinh dau tien
void display(); // In ra cau hinh hien tai
void genNext(); // Sinh ra cau hinh tiep theo
bool isLast(); // Kiem tra cau hinh cuoi cung
void Swap(int &a,int &b); // Hoan vi 2 phan tu
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
        x[i]=i;
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
		if(x[i] != n-i+1){
			return false;
		}
	}
	return true;
}

void genNext(){
	int i=n-1;
	while(x[i]>x[i+1])	i--;
    int j=n;
    while(x[i]>x[j])  j--;
	Swap(x[i],x[j]);
	//--Cach 1
    // int l=i+1, r = n;
	// while(l<r){
	// 	Swap(x[l],x[r]);
	// 	l++; r--;
	// }
	
	//--Cach 2
	for(int k=i+1;k<=(n+i+1)/2;k++){
		Swap(x[k],x[n-k+i+1]);
	}
}

void Swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
