# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int t ;cin >> t ;
	while(t--){
		int n ; cin>> n ; 
	
		int a[n] , b[n] ; 
		for(int i=0 ; i< n ;i++){
			cin >>a[i] ; 
		}
		for(int i=0 ; i< n ;i++){
			cin >> b[i] ; 
		}
		for(int i=0 ; i< n ;i++){
			if(a[i] > b[i]) 
			swap (a[i] , b[i]) ;                 
		}
			int maxa =a[0] , maxb =b[0];
		for(int i=1 ; i< n ;i++){
			if(a[i] >maxa ) maxa=a[i] ; 
			if(b[i] >maxb ) maxb=b[i] ;
		}
		cout << maxa*maxb<<endl ; 
	}
	
	return 0 ; 
}