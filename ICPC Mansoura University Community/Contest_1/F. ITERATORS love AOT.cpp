#include <bits\stdc++.h>

using namespace std;


int main()
{  int t ; cin >> t ; 
	while(t--){
		long long num ; cin >> num ; 
		if(num %3 ==0 || num ==3) cout <<"Yousef\n" ; 
		else if (num %3 ==1 || num ==1) cout <<"Khaled\n" ; 
		else if (num %3 ==2|| num ==2) cout <<"Omar\n" ; 
	}
return 0 ;
} 
/*
https://codeforces.com/group/1lNpnpU0LX/contest/302116/problem/F
*/
