#include<iostream>
#include<algorithm>
using namespace std;

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

int partition(int a[], int low, int high){
	int paivot = a[high];
	int i = low;
	for(int j = low; j <= high; j++ ){
		if(a[j] < paivot){
			swap(a[j], a[i]);
			i++;
		}
	}
	swap(a[i], a[high]);
	return i;
}

int quickSort(int a[], int low, int high){
	if(high > low){
		int piv = partition(a, low, high);
		quickSort(a, low, piv-1);
		quickSort(a, piv+1, high);
	}
}

void inputArr(int a[], int n){
	for(int j = 0; j < n; j++ ){
		cin >> a[j];
 	}
}

void inputAmin(int a[], int n){
	int min_first = a[0];
	int min_second = min_first;
	for(int i=1;i<n;i++){
		if(a[i] != a[i-1]){
			min_second = a[i];
			break;
		}
	}
	if(min_first != min_second){
		cout << min_first << " "<< min_second<<endl;
	} else{
		cout << "-1"<<endl;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		inputArr(a,n);
		sort(a,a+n);
		inputAmin(a,n);
	}
}
