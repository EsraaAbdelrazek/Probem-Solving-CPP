# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int t ; cin >> t ; 
	while (t--){
		int n ; cin >> n ; int a[n] ; 
		int c1 =0 ; int c2=0 ; 
		for(int i =0 ; i <n ; i++){
			cin >> a[i] ; 
			if((i%2 == 0 && a[i] %2 ==1) )
				c1++ ;
			if((i%2 == 1 && a[i] %2 ==0 ) )
				c2++ ;
			
		}
		if(c1 ==c2 ) cout << c1 <<endl ; 
		else cout << -1 <<endl ; 
	}
	
	return 0 ; 
}