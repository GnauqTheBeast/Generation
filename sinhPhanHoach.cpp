#include<bits/stdc++.h>
using namespace std;

int n, cnt;
int x[30];

void init(){
	cnt = 1;
	cin >> n;
	x[1] = n;
}

bool isLast(){
	for(int i = 1; i <= cnt; i++){
		if(x[i] != 1)
			return false;
	}
	return true;
}

void genNext(){
	int i = cnt;
	while(x[i] == 1) i--;
	x[i]--;
	int tmp = cnt - i + 1;
	cnt = i;
	int q = tmp / x[i], r = tmp % x[i];
	for(int j = 1; j <= q; j++){
		x[++cnt] = x[i];
	}
	if(r != 0){
		x[++cnt] = r;
	}

}

void display(){
	for(int i = 1; i <= cnt; i++)
		cout << x[i] << ' ';

	cout << endl;
}


int main(){
	init();
	display();
	while(!isLast()){
		genNext();
		display();
	}


}