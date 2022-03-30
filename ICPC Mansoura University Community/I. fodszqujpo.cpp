
#include <bits\stdc++.h>

using namespace std;


int main()
{
 	string s ; cin >> s ; 
 	for(int i =0 ; i < s.size() ; i++){
 		if(s[i] =='z') s[i] = 'a' ; 
 		else {
 			s[i] = s[i]+1 ; 
		 }
	 }cout << s<<endl ; 
return 0 ;
}
/*
https://codeforces.com/group/1lNpnpU0LX/contest/302116/problem/I
*/
