#include <iostream> 
#include <cmath>; 
using namespace std;
	int main (){
		double  a , b ; 
		char x ;   // <  >  = 
		 cin >> a>> x >>b  ; 
			if((x =='<'&& a<b)  || (x=='>' && a>b) || (x == '=' && a==b) )		 
					cout<<"Right" ; 
			else 
				cout<<"Wrong"; 

	
	return 0 ; 
}