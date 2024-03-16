#include<iostream>
#include<math.h>
using namespace std;

void inputArr(int arr[], int n){
	for(int i=0;i<n;i++){
		cin  >> arr[i];
	}
}

void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}

int partition(int a[], int low, int high){
	int pavot = a[high];
	int i = low;
	for(int j = low; j <= high;j++){
		if(a[j] < pavot){
			swap(a[j],a[i]);
			i++;
		}
	}
	swap(a[i], a[high]);
	return i;
}

void quickSort(int a[], int low, int high){
	if(high > low){
		int pav = partition(a,low,high);
		quickSort(a, low, pav -1);
		quickSort(a, pav +1, high);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >>n>>m;
		int arr[n];
		inputArr(arr,n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++){
				if( abs(arr[j]-m)> abs(arr[j+1]-m)){
					swap(arr[j], arr[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++){
			cout << arr[i]<< " ";
		}
		cout << endl;
		
	}
}

