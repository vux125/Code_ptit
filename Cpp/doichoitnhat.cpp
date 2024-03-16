#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(auto &i : a){
			cin >> i;
		}
		int dem = 0;
		for(int i=0;i<n-1;i++){
			int pos = i;
			for(int j=i+1;j<n;j++){
				if(a[pos]>a[j]){
					pos = j;
				}
			}	
			if(pos!=i){
				dem++;
			}
			swap(a[i],a[pos]);
		}
		cout << dem<<endl;
	}
}
