#include<map>
#include<iostream>
using namespace std;
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
	cin >>t;
	while (t--){
		int n, m;
		cin >> n>>m;
		int a[n],b[m];
		quickSort(a,0,n-1);
		quickSort(b,0,m-1);
		map<int, int> mp;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
			mp[b[i]]++;
		}
	
		for(auto it:mp){	
			cout <<it.first<<" ";	
		}
		cout <<endl;
		for(auto it:mp){
			if(it.second == 2)
			{
				cout <<it.first<<" ";
			}
		}
		cout <<endl;
	}	
}
