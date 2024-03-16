#include<bits/stdc++.h>
using namespace std;

int n;
int a[100000];

void check(){
    int i=1,r=n;
    while(i<r){
        if(a[i] != a[r]){
        	return;	
		}
        i++;
        r--;
    }
    for(int i=1;i<=n;i++){
        cout <<a[i]<<" ";
    }
    cout << endl;
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) check();
        else Try(i+1);
    }
}
int main(){
    cin >> n;
    Try(1);
	return 0;
}

