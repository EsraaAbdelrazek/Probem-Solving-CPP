# include <bits/stdc++.h>
using namespace std;

 
int main (){
	string s ; 
	int t ; cin >> t ; 
	while (t--){
		long  a [26] {0} ; 
		long n  , m; cin>> n ; m =n ; 
		while (n--){
		
			cin >> s ; 
			for (long i =0 ; i< s.size() ; i++){
				a[s[i] -97]++ ; 
			}
		}
		long j =0;
			for ( j =0 ; j< 26 ; j++){
			if (a[j] % m != 0 ) {
				cout << "NO" <<endl; 
				break ; 
			} 
		
			} 
			if (j==26) 	cout << "YES"<<endl  ; 
	

}
	return 0 ; 
}
