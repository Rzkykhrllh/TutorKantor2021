#include <bits/stdc++.h>
using namespace std;

int main(){
	int m1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int m2[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int hasil[3][3];
	
	// Penjumlahan Matriks
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			hasil[i][j] = m1[i][j] + m2[i][j];	
		}
	}
	
	// output
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << hasil[i][j] << " ";
		}
		cout<<endl;
	}
}
