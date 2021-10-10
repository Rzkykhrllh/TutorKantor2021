#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[9];
	a[0]=0;
	
	for (int i=1; i<=8; i++){
		cin>>a[i];
	}
	
	for (int j=8; j>0; j--){
		a[j] = a[j] - a[j-1];
	}
	
	for (int i=1; i<=8; i++){
		cout<<a[i]<<" ";
	}
	
	
}
