#include<iostream>
#include<iomanip> 
using namespace std;

main() 
{
	for(int i = 1; i <= 10; i++) {		
		
		for(int j = 1; j <= i; j++) {
	
			cout<<setw(3)<<i * j<<" ";
		}
		cout<<endl;
	}
}
