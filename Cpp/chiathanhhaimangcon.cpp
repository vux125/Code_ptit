#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int tong = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			tong+=a[i];
		}
		sort(a,a+n);
		int sum = 0;
		if(k <= n/2){
			for(int i= 0;i<k;i++){
				tong -= 2 * a[i];	
			}	
		} else {
			for(int i= 0;i<n-k;i++){
				tong -= 2 * a[i];
					
			}		
		}
		
		
		cout << tong<< endl;
	}
}
