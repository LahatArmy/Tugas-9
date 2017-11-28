#include<iostream>
using namespace std;

main() 
{
	int n;
	bool flip = false;
	
	cout<<"Masukkan nilai n : ";
	cin>>n;

	int angka = n;

	for(int i = 0; i < (2*n-1); i++) {

		for(int j = 1; j <= (2*n-1); j++) {			
			cout<<angka;
		}

		cout<<endl;

		if(angka == 1)
			flip = !flip;

		if(!flip)
			angka--; 

		else
			angka++; 
	}
}
