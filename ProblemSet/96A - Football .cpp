# include <bits/stdc++.h>
using namespace std;

 
int main (){
	
	int i =0 , c =1 , maxc =0 ; 
	string s ; cin >> s ; 
	while (i< s.size() -1){
		while(s[i] == s[i+1]){
			c++ ; 
			i++ ; 
			if(s[i] != s[i+1] ) break ;
		}
		if(c > maxc)
			 maxc = c;
			
		 c =1 ; 
		 i++ ;
		
	} 
	if (maxc>=7) cout << "YES" ; 
	else cout <<"NO" ;  
	return 0 ; 
}