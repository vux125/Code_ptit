#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin  >> a[i];
		}
		int check =1;
		int k = n/2;
		int paivot = a[k];
		for(int i=1;i<=k;i++){
			sort(a+k-i,a+k+i+1);
			
			cout <<endl;
			if(a[k] != paivot){
				cout <<"No"<<endl;
				check = 0;	
				break;
			}
		}
		if(check) cout <<"Yes"<<endl;
	}
}

