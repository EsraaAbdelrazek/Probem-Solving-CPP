#include <iostream> 
using namespace std;

	int main (){

  
	long long  a , b , c , d , res ; 
	
	cin >> a>>b>>c >>d ; 
	res = ((a%100)*(b%100)*(c%100)*(d%100) ) %100 ; 
	
	if(res>=0 && res <=9 )
		cout<<'0'<<res ; 
	

	else if(res >=11 && res <=99)
		cout << res  ; 
	
	
	return 0 ; 
}
    