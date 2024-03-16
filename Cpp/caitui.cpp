#include<iostream>
#include<algorithm>

using namespace std;

int n, b;
int a[100];
int c[100];
float cost;
float weight = 0;
float FOPT = -1;
float XOPT[100];

int Branch(int i){
	int j;
	int t = (b - weight)/a[i];
	for(j=0;j<=t;j++){
		x[i] = j;
		weight += a[i] * x[i];
		cost += c[i] * x[i];
		if(i == n) {
			if(cost > FOPT) {
				FOPT = cost;
				for(int k=0;k<n;k++){
					XOPT[k] = x[k]
				}
			}
		}
		else if(cost + c[i+1] * (b-weight)/a[i+1] > FOPT){
			Branch(i+1);
		}
		weight -= a[i] * x[i];
		cost -= c[i] * x[i];
	}
}
