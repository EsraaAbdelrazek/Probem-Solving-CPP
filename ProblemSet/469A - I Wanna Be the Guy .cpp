# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int n ; cin >> n ; 
	int a[n] ; 
	for(int i =0 ; i <n ; i++){
		a[i] = i+1;  
	}
	
	int x , y, num ; 
	cin >> x ; 
	while(x--){
		cin >> num ; 
		a[num-1] =0 ; 
	}
	cin >> y; 
	while(y--){
		cin >> num ; 
		a[num-1] =0 ; 
	}
	int j ;
	for( j =0 ; j <n ; j++){
		if(a[j] != 0 ){
		 cout <<"Oh, my keyboard!" ;
		break ; 
	}
}

if(j==n) cout <<"I become the guy." ; 
	return 0 ; 
}