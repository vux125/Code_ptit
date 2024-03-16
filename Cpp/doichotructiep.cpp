#include<iostream>
using namespace std;
int dem =1;

void swap(int &a, int &b){
	int c=a;
	a=b;
	b=c;
}
void inputArr(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}

void outputArr(int a[], int n ){
	cout <<"Buoc "<<dem<<": ";
	for(int i=0;i<n;i++){
		cout << a[i]<<" ";
	}
	dem++;
	cout <<endl;
}

void doichotructiep(int a[],int n){
	for(int i=0;i<n;i++){
		bool check =false;
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
				check =true;
			}
		}
		if(check) {
			outputArr(a,n);
		}
	}
}
int main(){
	int n;
	cin >>n;
	int a[n];
	inputArr(a,n);
	doichotructiep(a,n);
}
