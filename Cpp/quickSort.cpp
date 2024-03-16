#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int c;
	c=a;
	a=b;
	b=c;
}
int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low;
	for(int j = low; j <= high; j++){
		if(arr[j] < pivot){
			swap(arr[j],arr[i]);
			i++;	
		}
	}
	swap(arr[i],arr[high]);
	return i;
}

void quickSort(int arr[],int low, int high){
	if(low < high){
		int pivot = partition(arr,low,high);
		quickSort(arr,low, pivot -1);
		quickSort(arr, pivot+1,high);
	}
}
int main(){
	int n;
	cin >>n;
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
	
}
