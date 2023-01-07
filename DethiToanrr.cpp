
#include <bits/stdc++.h>
using namespace std;

//This is a problem of discrete mathematics test in PTIT 

int n, k;
int x[30];

void init(){
	cin >> n >> k;
	for(int i = 1; i <= n - k; i++)
		x[i] = 0;
	for(int i = n - k + 1; i <= n; i++)
		x[i] = 1;
}

bool check(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(x[i] == 1){
			dem++;
			if(dem == k)
				return true;
		}
		else {
			return false;
		}
	}
}

void display(){
	for(int i = 1; i <= n; i++)	
		cout << x[i];
	cout << endl;
}

void genNext(){
	int i = n;
	while(x[i] == 0) i--;
	while(x[i] == 1) i--;
	x[i] = 1;
	x[i + 1] = 0;
}

int main() {
	init();
	display();
	while(!check()){
		genNext();
		display();
	}
}
