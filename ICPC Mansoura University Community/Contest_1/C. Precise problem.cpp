#include <bits\stdc++.h>

using namespace std;


int main()
{	long long mini =0 , num; 
	vector<long long> a ; 
	while(cin >> num){
		a.push_back(num) ; 
	}
	 cout << *min_element(a.begin(), a.end());
  
return 0 ;
}
/*
https://codeforces.com/group/1lNpnpU0LX/contest/302116/problem/C

*/
