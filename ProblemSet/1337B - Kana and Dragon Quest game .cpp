
# include <bits/stdc++.h>
using namespace std;

 
int main (){
 	int t ; cin >> t; 
 	while(t--){
 		int x , n , m ; 
 		cin >> x >> n >>m ; 
 		 
 		 for(int i =0 ; i <n && x>0 && x > x/2+10; i++){
 		 		x /= 2; 
		  		x += 10 ; 
 		
		  }
 		 
 		 x-= (10*m) ; 
 	
 		 if(x>0) cout <<"NO\n" ; 
 		 else cout <<"YES\n" ; 
	 }
	return 0 ; 


}
