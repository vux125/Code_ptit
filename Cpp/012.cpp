#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a;
		int b[3];
		for(int i=0;i<3;i++){
			b[i] = 0;
		}
		for(int i=0;i<n;i++){
			cin >> a;
			b[a]++;
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<b[i];j++){
				cout <<i<<" ";
			}
		}
		cout <<endl;
	}
}
