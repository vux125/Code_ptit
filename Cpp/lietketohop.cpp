#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int n,k;
int a[1000];
int c[1000];
int dem=0;
void input(){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
bool result(){
	for(int i=1;i<k;i++){
		if(a[c[i]-1] > a[c[i+1]-1]) {
			return false;
		}	
	}
	return true;	
	
}
void Try(int i){
	for(int j = c[i-1]+1;j<=n-k+i;j++){
		c[i] = j;
		if(i==k) {
			if(result()){
				dem++;
			}
		}
		else Try(i+1);
	}   
}

int main(){
	cin >> n >> k;
	input();
	Try(1);
	cout <<dem;
}
