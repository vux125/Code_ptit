#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a;
		int dem ;
		vector<vector<int>> vec;
		for(int i=0;i<n;i++){
			int x;
			cin >> x ;
			a.push_back(x);
		}
		for(int i=0;i<n-1;i++){
			bool check =false;
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					swap(a[i],a[j]);
					check =true;
				}
			}
			if(check){
				vec.push_back(a);		
			}
		}
		dem = vec.size();
		for(auto it=vec.rbegin();it!= vec.rend();it++){
			cout <<"Buoc "<<dem--<<": ";
			for(auto itt: *it)
			{
				cout << itt << " ";
			}
			cout << endl;
		}
	}
}
