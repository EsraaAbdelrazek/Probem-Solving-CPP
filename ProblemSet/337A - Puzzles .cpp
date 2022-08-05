# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int n, m ; 
	cin >> n >> m ; 
	int a[m] ; 
	for(int i =0 ; i < m ; i++){
		cin >> a[i] ; 
	}	sort (a , a+m) ; 
	int mini = a[n-1] - a[0] ;
	for(int i =1 ; i< m-n+1 ; i++){
		if(a[n +i -1] - a[i] <mini)
			mini =a[n +i -1] - a[i] ; 
	}
	cout << mini ; 
	return 0 ; 
}