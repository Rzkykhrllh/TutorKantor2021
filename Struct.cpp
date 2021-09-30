#include <bits/stdc++.h>
using namespace std;

struct murid{
	string nama;
	int umur;
};

int main(){
// denganstruct
	murid rank1, rank2, temp;
	
	rank1.nama = "Bambang";
	rank1.umur = 20;
	
	rank2.nama = "Ali";
	rank2.umur = 19;
	
	//tukar nilai kedua variabel
	temp=rank1;
	rank1=rank2;
	rank2=temp;
	
	cout<<rank1.nama<<rank1.umur<<endl;
	cout<<rank2.nama<<rank2.umur<<endl;;
	
// tanpa struct
//	string rank1Nama, rank2Nama, tempNama;
//	int rank1Umur, rank2Umur, tempUmur;
//	
//	rank1Nama = "Bambang";
//	rank1Umur = 20;
//	
//	rank2Nama = "Ali";
//	rank2Umur = 19;
//	
//	// tukar isi rank 1 dan rank 2
//	tempNama = rank1Nama;
//	tempUmur = rank1Umur;
//	
//	rank1Nama = rank2Nama;
//	rank1Umur = rank2Umur;
//	
//	rank2Nama = tempNama;
//	rank2Umur = tempUmur;
	
//	cout<<rank1Nama<<rank1Umur<<endl;
//	cout<<rank2Nama<<rank2Umur<<endl;;
	
		
}
