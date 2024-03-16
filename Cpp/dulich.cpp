#include<iostream>
using namespace std;

int c[20][20];
int n;
int cost = 0;
int x[20];
int XOPT[20];
int fopt = INT_MAX;
int xet[20];
int cmin = INT_MAX;

int Branch(int i){
	int j;
	for(j=1;j<=n;j++){
		if(xet[j] && x[i-1] != j){
			x[i] = j;
			xet[j] = false;
			cost += c[x[i-1]][x[i]];
			if(i==n){
				if(cost < fopt){
					fopt = cost;
					for(int k=1;k<=n;k++){
						XOPT[k] = x[k];
					}
				}
			}
			else if(cost + (n-i)*cmin < fopt){
				Branch(i+1);		
			}
			xet[j] = true;
			cost -= c[x[i-1]][x[i]];
		}
	}
}


void findMax(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(c[i][j] < cmin){
				cmin = a[i][j];
			}
		}
	}
}

void input(){
	x[1] = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> c[i][j];
		}
	}
}
int main(){
	cin >> n;
	input();
	findMax();
	Branch(2);
}
