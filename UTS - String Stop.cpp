#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,h;
	char c;
	
	// mahasiswaUgmHebat, H
	// username@example.com, @
	// http://www.example.conytest.php?q=komputer , ?
	
	cout <<"masukan string : ";
	cin>>s;
	
	cout<<"masukan karakter : ";
	cin>>c;
	
	for (int i=0; i<s.length(); i++){
		if (s[i] == c) break;
		
		h += s[i];
	}
	
	cout<<h;
}
