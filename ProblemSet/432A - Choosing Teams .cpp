# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int n , k ;
	cin >> n >> k ; 
	int a[n] ; 
	for(int i =0 ; i<n ; i++){
		cin >> a[i]  ; 
		a[i] +=k ; 
	}
	sort (a , a+n) ; 
	int c =0 ; 
	for(int i =0 ; i<n ; i++){
		if(a[i] <= 5) c++ ; 
	}
	cout<<c/3 ;
	
	
	return 0 ; 
}