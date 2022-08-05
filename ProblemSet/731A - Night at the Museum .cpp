# include <bits/stdc++.h>
using namespace std;

 
int main (){
		int count = 0 , current =0 , next =0 ;
	
	
		
		string s ; cin >> s ; 
		for (int i =0 ; i< s.size() ; i++){
			
			current = s[i] -97 ; 
			
		
			count += min( abs( next - current) , 26 - abs(  next- current)  ) ; 
			next = current ; 
		
		
			
		}
		cout << count;  
	return 0 ; 
}

