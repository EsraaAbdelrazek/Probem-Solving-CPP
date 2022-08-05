/*
https://codeforces.com/contest/1660/problem/B
*/
#include <bits\stdc++.h>

using namespace std;
int main (){
	int t ; cin >> t ; 
	while(t--){
		long long  n ; cin >> n ; long long a[n] ; 
		for(int i =0 ; i< n ; i++){
			cin >> a[i] ; 
		}
		sort(a , a+n) ; 
		if(n==1 && a[0] != 1) cout <<"NO\n" ; 
		else if(a[n-1] - 1 <= a[n-2]) cout << "YES\n" ; 
		else cout << "NO\n" ; 
	}
	
	
	
	return 0 ; 
}