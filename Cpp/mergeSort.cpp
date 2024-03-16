#include<iostream>
using namespace std;

void inputArr(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void outputArr(int a[],int n){
	for(int i=0;i<n;i++){
		cout << a[i]<<" ";
	}
	cout <<endl;
}
void merge(int a[], int l, int m, int r){
	int n1 = m-l +1, n2=r-m;
	int L[n1], R[n2];
	for(int i=0; i < n1 ; i++){
		L[i] = a[l+i];
	}
	for(int i=0; i < n2 ; i++){
		R[i] = a[m + 1 + i];
	}
	
	int i=0, j=0;
	int k=l;
	
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			a[k] = L[i];
			i++	;
		} else {
			a[k] = R[j];
			j++;
		}
		k++;	
	}
	while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
	while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
	
}

void mergeSort(int arr[], int l, int r){
	if(l < r){
		int m = l + (r-l)/2;
		mergeSort(arr,l , m);
		mergeSort(arr,m+1, r );
		merge(arr,l,m,r);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		inputArr(a,n);
		mergeSort(a,0,n-1);	
		outputArr(a,n);	
	}
}
