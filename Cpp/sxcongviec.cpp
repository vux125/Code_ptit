#include<iostream>
#include<algorithm>

using namespace std;

struct cv{
	int first, second;
};
bool check(cv a, cv b){
	return a.second < b.second;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cv data[n];
		for(int i=0;i<n;i++){
			cin >>data[i].first;
		}
		for(int i=0;i<n;i++){
			cin >>data[i].second;
		}
		sort(data,data+n, check);
		int k = 0;
		int dem = 1;
		for(int i=1;i<n;i++){
			if(data[i].first >= data[k].second){
				dem ++;
				k = i;	
			}
		}
		cout  <<dem<<endl;
	}
}
