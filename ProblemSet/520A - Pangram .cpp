# include <bits/stdc++.h>
using namespace std;

 
int main (){
		int n ; cin >> n ; 
		string s ; cin >> s; 
		if (n<26) {
		cout << "NO" ;
		return 0 ; 	
		}
		else {
			int count =0 ; 
			transform (s.begin() , s.end() , s.begin() , ::toupper) ; 
			sort (s.begin() , s.end() ) ; 
			
			for (int i =0 ; i< n ; i++){
				if(s[i] != s[i+1])
					count ++; 
			}
			
			if(count >= 26) cout <<"YES" ; 
				else cout <<"NO" ; 
		
		}
	 
	
	return 0 ; 
}
