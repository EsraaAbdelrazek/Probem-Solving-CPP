#include <iostream> 
using namespace std;
int main (){
	int x ; 
	cin >> x ; 
	int years ; 
	years = x / 365 ; 
	int rem ; 
	rem =(int) (x % 365 );
	int month ; 
	month = rem / 30 ; 
	rem = rem % 30 ; 
	int days ; 
	days  = rem ; 
	cout<< years << " years" <<endl ; 
	cout << month << " months" << endl ; 
	cout << days << " days" << endl ;
	
	
	
	return 0 ; 
}