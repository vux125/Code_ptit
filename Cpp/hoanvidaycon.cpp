#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n;
vector<int > a;


int sinh(){
	int k = n-1;
	int pv;
	for(k;k>0;k--){
		if(a[k]>a[k-1]){
			pv = k-1;
			sort(a.begin()+k,a.end());
			break;
		}
	}
	for(k ; k<n;k++){
		if(a[k] > a[pv]){
			swap(a[k],a[pv]);
			break;
		}
	}
	int t;
	for (t = n-1; t > 0; t--)
    {
        if (a[t]> a[t - 1])
        {
            break;
        }
    }
    if (t ==0 )return 0;
    else return 1;
}
void output(){
	for(int i=0;i<n;i++){
		cout << a[i]<<" ";
	}
	cout <<endl;
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int check = 1;
	while(check){
		output();
		check = sinh();
	}
	output();
	
}
