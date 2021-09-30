#include <bits/stdc++.h>
using namespace std;

// Fpb dan Kpk
int main(){
	
	int a,b;
	
	cout << "Masukan 2 angka : ";
	cin >> a >> b;
	
	int kecil = a;
	if (a>b){
		kecil=b;
	}
	
	int fpb = 1;
	for (int i=1; i<=kecil; i++){
		
		if (b%i==0 && a%i==0){
			fpb=i;
			cout  << i<< endl;
		}
	}
	
	int kpk = a*b/fpb; // ini rumus
	
	cout << "Fpb dan Kpk dari "<<a << " "<< b << "adalah : "<<endl;
	cout << "Fpb : "<<fpb<<endl;
	cout << "kpk : "<<kpk<<endl;
	
	
}
