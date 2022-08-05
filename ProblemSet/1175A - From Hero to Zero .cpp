 
#include <iostream>
using namespace std; 
# include <string> 


int main()
{
	int t; cin >> t; 
	long long n, k; 
	
	while (t--) {
		long long  count = 0;
		cin >> n >> k;
		while (n > 0) {
			if (n % k == 0) {
				n /= k;
				count++;
			}


			else {
				long long  rem = n % k;
				n -= rem;
				count += rem;
			}
		}
		cout << count << "\n";
	}
	return 0; 
}