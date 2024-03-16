#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}
int coun =0;
void selectionSort(int a[], int n){
	int poin;
	int min;
	for(int i=0;i<n-1;i++){
		poin = i;
		min = a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]<min){
				poin = j;
				min = a[j];
			}
		}
		if(i != poin ){
			swap(a[i],a[poin]);
		}
		coun ++;
		cout <<"Buoc "<<coun<<": ";
		for(int k=0;k<n;k++){
			cout << a[k] <<" ";
		}
		cout <<endl;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	selectionSort(a,n);
}
