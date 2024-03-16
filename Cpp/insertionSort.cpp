#include<iostream>
using namespace std;

void inputArr(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}

void insertionSort(int a[], int n){
	cout <<"Buoc 0: "<<a[0]<<endl;
	for(int i=1;i<n;i++){
		int key = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]= key;
		cout <<"Buoc "<<i<<": ";
		for(int k=0;k<=i;k++){
			cout <<a[k]<<" ";
		}	
		cout <<endl;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	inputArr(a,n);
	insertionSort(a,n);
}
