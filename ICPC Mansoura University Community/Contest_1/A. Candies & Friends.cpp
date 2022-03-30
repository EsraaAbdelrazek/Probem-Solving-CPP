#include <bits\stdc++.h>

using namespace std;


int main()
{
	long long n , m ; 
	cin >> n >> m ; 
	
	if(n==0) cout << 0 ; 
	else if (m ==0 ) cout << n ; 
	else {
		cout <<  (n%m) ; 
	}
} 

/*
https://codeforces.com/group/1lNpnpU0LX/contest/302116/problem/A

*/
