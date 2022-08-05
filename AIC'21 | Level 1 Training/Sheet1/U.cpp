#include <iostream> 
using namespace std;
int main (){
	
	double x , z ; int y ; 
	 cin >> x ; 
	y = (int)x ; 
		z = x - y ; 
	if(z == 0.0)
		cout<<"int " << y ; 
	else 
		cout<<"float " << y << " " << z ; 
	
	return 0 ; 
}