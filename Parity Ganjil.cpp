#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int d,c;
	
//	// c buat ngitung kemunculan angka 1
	
	cout << "Masukan bilangan desimal : ";
	cin>>d;
	
	while (d>0){
		if (d%2==1) c=c+1;
		d = d/2;
	}
	
	if (c%2 == 1){
		cout << "parity ganjil"<<endl;
	} else{
		cout << "Paritigy genap"<<endl;
	}
	return 0;
}
