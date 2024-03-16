#include<iostream>

using namespace std;

int main(){
	int S;
	cin >> S;
	int L;
	int n;
	cin >> L >> n;
	int x[n+2];
	x[0] = 0;
	x[n+1] = S;
	for(int i=1;i<=n;i++){
		cin >>x[i];
	}	
	int numR = 0;
	int currR = 0;
	int lastR ;
	while(currR <= n ){
		lastR = currR;
		while(currR <= n && x[currR+1] - x[lastR] <= L){
			currR ++;
		}
		if(currR == lastR) return -1;
		if (currR <=n) numR++;
	}
	cout << numR<<endl;
	
}
