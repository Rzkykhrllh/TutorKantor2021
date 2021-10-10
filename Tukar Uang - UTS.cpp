#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int nilai;
	int total_lembar = 0;
	int seratus_ribu, lima_puluh_ribu, sepuluh_ribu, lima_ribu, seribu, lima_ratus, sepuluh, lima, satu = 0;
	
	cin >>nilai;
	
//	100.000
	seratus_ribu = nilai/100000;
	total_lembar += seratus_ribu;
	
	nilai -= 100000*seratus_ribu;
	
//	50.000
	lima_puluh_ribu = nilai/50000;
	total_lembar += lima_puluh_ribu;
	
	nilai -= 50000*lima_puluh_ribu;
	
//	10.000
	sepuluh_ribu = nilai/10000;
	total_lembar += sepuluh_ribu;
	
	nilai -= 10000*sepuluh_ribu;
	
//	5.000
	lima_ribu = nilai/5000;
	total_lembar += lima_ribu;
	
	nilai -= 5000*lima_ribu;
	
//	1.000
	seribu = nilai/1000;
	total_lembar += seribu;
	
	nilai -= 1000*seribu;
	
//	500
	lima_ratus = nilai/500;
	total_lembar += lima_ratus;
	
	nilai -= 500*lima_ratus;
	
//  10
	sepuluh = nilai/10;
	total_lembar += sepuluh;
	
	nilai -= 10*sepuluh;	
	
//	5
	lima = nilai/5;
	total_lembar += lima;
	
	nilai -= 5*lima;

//	1
	satu = nilai/1;
	total_lembar += satu;
	
	nilai -= 1*satu;

	cout<< seratus_ribu << "lembar 100.000"<<endl;
	cout<< lima_puluh_ribu << "lembar 50.000"<<endl;
	cout<< sepuluh_ribu << "lembar 10.000"<<endl;
	cout<< lima_ribu << "lembar 5.000"<<endl;
	cout<< seribu << "lembar 1.000"<<endl;
	cout<< lima_ratus << "lembar 500"<<endl;
	cout<< sepuluh << "lembar 10"<<endl;
	cout<< lima << "lembar 5"<<endl;
	cout<< satu << "lembar 1"<<endl;

	 
}
