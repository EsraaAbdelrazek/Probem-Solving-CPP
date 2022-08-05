# include <bits/stdc++.h>
using namespace std;

 
int main (){
	long long   x = 0 , n=0  ; cin >> n ; 

	for (long long  i =0 ; i< n ; i++){
 	string s ;
	 cin >> s ; 
	if (s[1] == '-')  x-- ; 
	else  x++ ; 

		}
	cout << x; 
	return 0 ; 
}
