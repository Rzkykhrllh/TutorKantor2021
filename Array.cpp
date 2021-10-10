#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10] =  {4,1,2,6,1,2,7,1,20,12};
	
	int minimal = 101;
	int maximal = -1;
	
	
	for (int i=0; i<10; i++){
		if (minimal > arr[i]){
			minimal = arr[i];
		}
		
		if (maximal < arr[i]){
			maximal = arr[i];
		}
	}
	
	cout << "Nilai terkecil : "<<minimal<<endl;
	cout << "Nilai terbesar : "<<maximal<<endl;
}
