# include <bits/stdc++.h>
using namespace std;

 
int main (){
 	int t ; cin >> t ; 
 	while(t--){
 		long long n ; cin >> n ; int sum =0 ; 
 		for(int k =2 ; k<1e9 ; k++){
 			int p = pow(2,k) ; 
 			p-- ; 
 			
 			if(n%p == 0) {
 				cout<<n/p <<endl ;
 				break ; 
			 }
		
	}
}
	return 0 ; 


}