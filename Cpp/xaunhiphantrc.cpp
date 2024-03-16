#include<bits/stdc++.h>
using namespace std;

string s;

void check(){
	int i;
	for(i=s.size()-1;i>=0;i--){
		if(s[i]=='1') break;
	}
	if(i<0){
		for(int j=0;j<s.size();j++){
			s[j] = '1';
		}
	}
	for(i;i<s.size();i++){
		if(s[i]=='1') {
			s[i] = '0';
		}
		else {
			s[i] = '1';
		}
	}	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		cin >>s;
		check();
		cout <<s;
		cout <<endl;
	}
}
