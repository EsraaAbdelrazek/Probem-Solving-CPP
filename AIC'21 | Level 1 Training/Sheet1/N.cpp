#include <iostream> 
using namespace std;
int main (){
	char x  ; 
	cin >> x ; 
	// if x is low case 
	if(x>= 97 && x<= 122) {
		x =x - 32 ; 
		cout << x <<endl ; 
	}
	else if(x>=65 && x <= 90){
		x = x + 32 ; 
		cout << x <<endl ; 
	}
	



	return 0 ; 
}