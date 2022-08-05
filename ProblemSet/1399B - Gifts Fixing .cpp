#include <bits\stdc++.h>

using namespace std;


int main()
{
	int t; cin>>t;
	while(t--){
	int n; cin>>n;
	
	long long a[n] , b[n];

	
	
	for(long long i=0; i<n; ++i) cin>> a[i];
	for(long long i=0; i<n; ++i) cin>> b[i];

	long long  mn1  =  *min_element(a+0, a+n);
    long long  mn2  =  *min_element(b+0, b+n);
	
	
		for(long long i=0; i<n; ++i){
			a[i] -= mn1;
	 		b[i] -= mn2;
	 	}
	 	
	 	long long res =0;
	 	for(int i=0; i<n; ++i){
				res += max(a[i] , b[i]);			
		}
			cout<<res<<"\n";
	 	
	}

}