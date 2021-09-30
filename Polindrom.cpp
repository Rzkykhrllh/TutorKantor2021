#include <bits/stdc++.h>
using namespace std;

//Polindrom Check
int main(){
	
	string kalimat; // buat variabel kalimat
	getline(cin,kalimat); //input kalimat
	 
	int panjang_kalimat = kalimat.length();
	
	cout << panjang_kalimat << endl;
	
	panjang_kalimat -=1;

	
	// cek apakah polindrom atau gak	
	bool polindrom = true;
	for (int i=0; i<panjang_kalimat/2; i++){
		
		if (kalimat[i] != kalimat[ panjang_kalimat -i ]){
			polindrom=false;
		}
	}
	
	
	// print hasil
	if (polindrom){
		cout << kalimat <<" adalah polindrom"<<endl;
	} else{
		cout<< kalimat <<" bukan polindrom"<<endl;
	}
	
}
