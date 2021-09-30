#include <bits/stdc++.h>
using namespace std;


// Mencari Mean, Median, Modus
int main(){
	int banyak_data = 20;
	int nilai[banyak_data] = {93,17,23,61,53,48,5,89,91,85,49,64,3,61,42,17,20,61,49,50};
	int frekuensi[101]={0};
	
//	Mencari rata-rat


	int sum = 0;
	for (int i=0; i<banyak_data; i++){
		sum+=nilai[i];
	}
	
	double mean = (double) sum/banyak_data;
	
	cout<<"Mean : "<<mean<<endl;
	
//	Mencari Modus
	
	//Menghitung frekuensi
	for (int i=0; i<banyak_data; i++){
		frekuensi[ nilai[i] ]++;
	}
	
	// Mencari Modus
	int frekuensi_terbanyak=0;
	int modus=-1;
	
	for (int i=1; i<=100; i++){
		
		if (frekuensi_terbanyak < frekuensi[i]){
			frekuensi_terbanyak=frekuensi[i];
			modus=i;
		}
	}
	
	cout << "Modus adalah : "<<modus<<endl;
	cout << "Dengan kemunculan : "<< frekuensi_terbanyak<<endl;
	
// Mencari Median

	// Mengurutkan Niali - Insertion Sort
	for (int i=0; i<banyak_data; i++){
		for (int j=i; j>0; j--){
			if (nilai[j] < nilai[j-1] ){
				// tukar nilai kedua elemen array
				
				int temp = nilai[j];
				nilai[j] = nilai[j-1];
				nilai[j-1] = temp;
			}
		}
	}
	
	// cetak Nilai yang sudah diurutkan
	for (int i=0; i<banyak_data; i++){
		cout<<nilai[i]<<" ";
	}
	cout<<endl;
	
	int median = double(nilai[9]+nilai[10])/2;
	cout<< "Median adalah : "<<median<<endl;
	
}
