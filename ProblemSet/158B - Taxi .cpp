#include <bits\stdc++.h>

using namespace std;


int main()
{
	
	int n; cin>>n;
	
	int a[n];
	int fr [5] = {0} ;
	for(int i=0; i<n; ++i) {
			cin>> a[i];
			fr[ a[i] ] ++ ;	
	}


	int ans = fr[4] + fr[3] + fr[2]/2;
	 
	int rem;    
/*	if ( fr[1]>= fr[3]  && fr[3] != 0){
	 	rem = fr[1] - fr[3];
	}
	else 
		rem = fr[1];
		*/
		fr[1]-=fr[3];
	
	if(fr[2] %2 !=0 ){
		ans++;
	fr[1]-=2;
	}
	
	if(fr[1]>0)
	ans+=(fr[1]	+3)/4;
	cout<<ans;
	
 /*
 int n, sum=0; cin>>n;
 
 int a[n];
 
 for(int i=0; i<n; ++i) {
 cin>>a[i];
 sum+=a[i];	
 }
 cout<< ( sum%4==0? sum/4 : sum/4+1);*/
 return 0 ;  
}