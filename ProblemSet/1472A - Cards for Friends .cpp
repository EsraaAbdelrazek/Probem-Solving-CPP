
# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int t ; cin >> t ; 
	while(t--){
		long long w , h , n ; 
		cin >> w >> h >> n ; 
		long long i =1 ; 
		
		while(w %2 ==0 || h %2 ==0){
	
		if (w %2 ==0){
			w /=2 ; 
			i*=2 ; 
		}	
		if (h %2 ==0 ){
			h /=2 ; 
			i*=2; 
		}
		}
		if (i >= n ) cout <<"YES\n" ; 
		else cout<<"NO\n" ; 	
	}

 	
	return 0 ; 
}
