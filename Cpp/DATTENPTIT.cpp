#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[18];
char latinh[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void result(){
	for(int i=1;i<=k;i++){
		cout <<latinh[a[i]-1];
	}
	cout <<endl;
}

void Try(int i){
	for(int j = a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			result();
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >> n >>k;
		a[0]=0;
		Try(1);
	}
}
