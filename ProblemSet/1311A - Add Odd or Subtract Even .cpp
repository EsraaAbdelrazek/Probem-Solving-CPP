
# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int t; cin >> t ; 
	while (t--){
		long long a , b ;  cin >> a >> b ; 
		
		if((a >b && (a-b) %2 ==0 ) || (a <b && abs(a-b) %2 !=0 ) )  cout << 1 <<endl;
		else if (a <b && abs(a-b) %2 ==0 ) cout << 2 << "\n" ; 
		else if ( a>b &&(a-b) %2 !=0 ) cout << 2 <<"\n" ; 
		else cout << 0 <<"\n" ; 
	}

 	
	return 0 ; 
}
