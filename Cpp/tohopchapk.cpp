#include<bits/stdc++.h>
using namespace std;

int n;
int a[16];
int k;
int b[16];
int dem;
void result() {
	for(int i=1;i<=k;i++){
		cout << a[i];
	}
	cout <<" ";
}

bool check(int b[]){
	for(int i=1;i<=k;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
int poi;
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k ) {
			dem++;
			if(check(b)){
				poi = dem;
				return;
			}
		}
		else Try(i+1);
		
	}
}
int main(){
	int t;
	cin >> t;	
	a[0]=0;
	while(t--){
		cin >>n >> k;
		for(int i=1;i<=k;i++){
			cin >> b[i];
		}
		dem=0;
		Try(1);
		cout <<poi;	
		cout <<endl;	
	}

}
