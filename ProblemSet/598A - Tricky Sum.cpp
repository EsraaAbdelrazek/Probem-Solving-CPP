using namespace std; 
#include <iostream>
#include <vector>
#define ll long long
ll fast_power(ll a1 , ll an , ll n) {
	return (a1 + an) * n / 2; 
}
int main()
{
	int t; cin >> t; 
	 // powers of 2 
	vector<ll>  powers ; 
	powers.push_back(1); 
	for (int i = 1; i <= 32; i++) {
		powers.push_back(powers[i - 1] * 2); 
	}
	while (t--) {
		ll n;  cin >> n;
		ll sum = fast_power(1, n, n); 
		ll negsum = 0; 
		for (int i = 0; i < 32; i++) {
			if (powers[i] <= n) negsum += powers[i]; 

		}
		sum -= (negsum * 2); 
		cout << sum << "\n"; 
	}
}

