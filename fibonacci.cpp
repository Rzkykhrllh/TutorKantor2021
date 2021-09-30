#include <bits/stdc++.h>
using namespace std;

int main(){
	int fibo[10];
	fibo[0]=1;
	fibo[1]=1;
	
	for (int i=2; i<10; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	
	for (int i=0; i<10; i++){
		cout<<fibo[i]<<" ";
	}
}
