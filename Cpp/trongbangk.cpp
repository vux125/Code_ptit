#include<bits/stdc++.h>
using namespace std;

int n,s;
int a[11];
int b[11];
int check, tong;
int solg;
void write(int j){
	sort(b+1,b+j);
	for(int i=1;i<j;i++){
		cout <<b[i]<<" ";
	}
	solg++;
	cout <<endl;
}
void Try(int i, int tong, int htai){
	if(tong==s){
		write(i);
		check=1;
		return;
	}
	for(int j=htai;j<=n;j++){
		tong+=a[j];
		b[i] = a[j];
		if(tong<=s) Try(i+1,tong,j+1);
		tong -= a[j];
	}
}
int ktr(int a,int b){
	return a>b;
}
void solve(){
	cin >> n >>s;
	check = 0;
	for(int i=1;i<=n;i++) cin >> a[i];
	sort(a+1,a+n+1,ktr);
	Try(1,0,1);
	if(check==0) cout <<-1;
	
}
int main(){
	int t;
	cin  >> t;
	while(t--) {
		solg = 0;
		solve();
		cout << solg<<endl;	
	}
	return 0;
}
