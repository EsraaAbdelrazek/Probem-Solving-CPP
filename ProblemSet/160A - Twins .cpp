# include <bits/stdc++.h>
using namespace std;

 
int main (){
 	 int n ; cin >> n ; 
 	 int a[n] ; 
 	 for(int i =0 ; i<n ;i++){
 	 	cin >> a[i] ; 
	  }	
	  sort(a , a+n) ; 
	  int tkn =0 , lft =0 , sum =0 ; 
	  for(int i =0 ; i<n ;i++){
 	 	sum+= a[i] ; 
	  }int j = n ; 
	  while(j--){
	  	tkn +=a[j] ; 
	  	lft = sum - tkn ; 
	  	if(tkn >lft) 
	  		break ; 
	  }
	  	cout << n-j; 
	return 0 ; 
}