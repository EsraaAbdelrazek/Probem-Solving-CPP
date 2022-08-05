# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int T =4 , C =6 , O =8 , D =12 , I =20 ; 
	int n; cin >> n ; 
	string s ; int sum =0 ; 
	while (n--){
		cin >> s; 
			if (s[0] == 'T')  sum += 4 ;
			else if (s[0] == 'C') sum += 6 ; 
			else if (s[0] == 'O') sum += 8 ;
			else if (s[0] == 'D' ) sum += 12 ; 
			else if (s[0] == 'I' ) sum += 20 ; 
	}
	cout <<  sum ; 
	return 0 ; 
}
