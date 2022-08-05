#include <bits\stdc++.h>

using namespace std;

int main()
{
  string h = "hello" ; 

  
  string s; cin>>s; int i=0, j=0;
 	while(j<h.length() && i<s.length()){
 		
 		if(s[i] == h[j]) j++;
 		++i;
 		
	 } 
    cout << (  j==h.length() ? "YES" : "NO" ) ;

 return 0 ;  
}