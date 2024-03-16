#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n>> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >>a[i];
		}
		
		for(int i=0;i<=n-k;i++){
			int maxCurrent = INT_MIN;
			for(int j=i;j<i+k;j++){
				if(a[j] > maxCurrent){
					maxCurrent = a[j];
				}
			}
			cout << maxCurrent<<" ";
		}
		cout<<endl;
	}
}
