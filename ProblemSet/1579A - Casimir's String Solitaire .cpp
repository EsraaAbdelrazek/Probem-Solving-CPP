# include <bits/stdc++.h>
using namespace std;

 
int main (){
	string s ; 
	int t ; cin >> t; 
	while (t--){
		cin >> s; 

	if(s.size() % 2 !=0 ) cout <<"NO"<<endl ; 
	else {

	int countA = count(s.begin(), s.end(), 'A') ; 
	int countB = count(s.begin(), s.end(), 'B') ; 
	int	countC = count(s.begin(), s.end(), 'C') ; 
	
	if (countA + countC == countB) cout <<"YES"<<endl ; 
	else cout <<"NO"<<endl ; 
		}
			}
	return 0 ; 
}

