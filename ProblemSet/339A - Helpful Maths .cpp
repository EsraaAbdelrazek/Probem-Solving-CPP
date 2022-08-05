# include <bits/stdc++.h>
using namespace std;

 
int main (){
	
	string s ; cin >> s;
	 
	int c1 =0 , c2=0 ,c3 =0 , c =s.size() /2  ; 
	if(s.size() ==1) cout << s[0] ; 
	
	else {
		for (int i =0 ;i <s.size() ;i+=2){
			if(s[i] == '1')c1++ ; 
			if(s[i] == '2')c2++ ; 
			if(s[i] == '3')c3++ ; 
		}
		while (c1-- ){
		cout << "1" ; 
		if(c!= 0 ){
			cout << '+' ; 
			c--; 
		}
	}
	while (c2--  ){
		cout << "2" ;
		if(c!= 0 ){
			cout << '+' ; 
			c--; 
		}
	}
	while (c3--){
		cout << "3" ; 
		if(c!= 0 ){
			cout << '+' ; 
			c--; 
		}
	
		
	}
	
	}

	return 0 ; 
}