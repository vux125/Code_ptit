#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int tong = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			tong += a[i];
		}
		int sum=0;
		tong -= a[0];
		bool check = false;
		int pos = -1;
		for(int i=1;i<n;i++){
			sum+=a[i-1];
			tong -= a[i];
			if(tong == sum ){
				check = true;
				pos = i+1;
				break;
			}
		}
		cout<<pos<<endl;
	}
}
