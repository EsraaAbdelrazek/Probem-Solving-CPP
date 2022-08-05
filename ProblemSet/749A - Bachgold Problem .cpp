# include <bits/stdc++.h>
using namespace std;

 
int main (){
	int t ; cin >> t ; 
	if (t ==2) {
		cout << 1 <<endl << 2 ;
		return 0 ; 
	}
	if (t ==3) {
		cout << 1 <<endl << 3 ;
		return 0 ; 
	}
	if (t % 2 ==0){
		cout << t/2<<endl ; 
		for(int i =0 ; i< t/2 ; i++){
			cout << 2 ;
			if(i!= t/2 -1)
				cout <<" " ; 
		}
	}else{
		cout << t/2  <<endl ; 
		for(int i =0 ; i< (t-3) /2  ; i++){
			cout << 2 <<" " ;
		
		}cout << 3 ; 
		
	}
	
	return 0 ; 
}