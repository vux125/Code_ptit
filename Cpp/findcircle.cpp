#include<iostream>
using namespace std;

int n;
int find(int a[], int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return i;
		}
	}	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> n >> x;
		for(int i=0;i<n;i++) cin >>a[i];
		int res = find(a,x);
		cout <<res+1<<endl;
	}
}
