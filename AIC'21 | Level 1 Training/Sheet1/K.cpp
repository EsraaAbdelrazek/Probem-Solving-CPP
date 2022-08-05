#include <iostream> 


using namespace std;
	int main (){
	
		double min , max ;  
		double a[3] ; 
		for(int i  =0 ; i <3 ; i++)
		{
			cin>> a[i]; 
		}
		
		min = a[0] ; 
		for(int i =1 ; i<3 ; i++){
			if(a[i]< min)
				min = a[i] ; 
		}
			cout<<min<<" " ;
		
			max = a[0] ; 
		for(int i =1 ; i<3 ; i++){
			if(a[i] > max)
				max = a[i] ; 
		}
		cout<<max<<endl ;  ; 
		
	return 0 ; 
}