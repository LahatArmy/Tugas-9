#include<iostream>
#include<iomanip> 
using namespace std;

main() 
{
	int angka = 3;

	for(int i = 1; i <= 10; i++) {

		for(int j = 0; j < i; j++) {

			cout<<setw(2)<<angka + j<<" ";
		}
		cout<<endl;
		angka += 2;
	}
}
