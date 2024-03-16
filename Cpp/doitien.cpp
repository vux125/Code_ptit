#include<iostream>
using namespace std;
int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;	
		cin >> n;
		int i=0;
		int k=0;
		while(n){
			int b = n / a[i];
			k += b;
			n = n - b * a[i];
			i++;
		}
		cout << k << endl;
	}
}
