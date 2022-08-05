#include <iostream> 
#include <cmath>

using namespace std;
int main (){
	double a , b  , x ; 
	cin >> a >> b ; 
	x = a/b ; 
	cout <<  "floor "<< a <<" / " << b <<" = "<< floor(x)<<endl; 
		cout <<  "ceil "<< a <<" / " <<b <<" = "<< ceil(x)<<endl; 
			cout <<  "round "<< a <<" / " <<b<< " = "<< round(x)<<endl; 
	return 0 ; 
}