#include<bits/stdc++.h>
using namespace std;
int n;
int a[17];

bool check(){
	if(a[1]!=1 || a[n]!= 0) return false;
	for(int i=1;i<=n;i++){
		if(a[i]==1) {
			if(a[i+1]==1){
				return false;
			}
		}
	}
	return true;
}
void result(){
	if(check()){
		for(int i=1;i<=n;i++){
			if(a[i]==1)cout<<"H";
			else cout<<"A";
		}
		cout<<endl;
		
	}
}
int sinh(){
	int b=n;
	for(b;b>=1;b--){
		if(a[b]==0) break;
	}
	for(b;b<=n;b++){
		if(a[b]==0) a[b]=1;
		else a[b] =0;
	}
	for(b=n;b>=1;b--){
		if(a[b]==0) break;
	}
	if(b==0) return 0;
	else return 1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		for(int i=0;i<=n;i++){
			a[i]=0;
		}
		int ok =1;
		while(ok){
			result();
			ok = sinh();
		}
		result();
	}
}
