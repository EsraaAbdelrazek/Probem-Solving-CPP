/*
https://codeforces.com/group/1lNpnpU0LX/contest/302116/problem/D
*/
#include <bits\stdc++.h>

using namespace std;


int main()
{	int  n ;
	cin >> n  ; 

	int a[n][n] ; 
		for(int i=0 ; i <n ; i++){
			for (int j =0 ; j <n ; j++){
				cin >> a[i][j] ; 
			}
		}
	for(int i=0 ; i <n ; i++){
		for (int j =0 ; j <n ; j++){
			if(i ==j){
				if(a[i][j] !=n){
				
					cout << "NO\n" ; 
					exit(0) ;  
				}  
			}else {
				if (a[i][j] !=0){
					cout <<"NO\n" ;
					exit (0) ; 
				}
			}
		}
	}
	cout <<"YES\n" ; 
	return 0 ; 
}
