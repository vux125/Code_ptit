#include<iostream>

using namespace std;

int n, x;
bool findBinary(int a[], int low, int high){
	
	
	while(low<=high){
		int mid = low + ( high - low ) / 2;
		if(a[mid] == x) return true;
		else if(a[mid] < x){
			low = mid +1;
		}else if(a[mid] > x){
			high = mid -1;
		}
	}
	return false;	
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >>a[i];
		}
		bool result = findBinary(a,0,n-1);
		if(result) cout <<1<<endl;
		else cout << -1<<endl;
	}
}
