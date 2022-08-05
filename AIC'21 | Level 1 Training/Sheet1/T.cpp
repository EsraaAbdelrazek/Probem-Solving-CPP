#include <iostream> 
using namespace std;
#include <algorithm>
	int main (){

     double a[3] ,  b[3] ;
    for(int i =0  ; i<3; i++){
    	cin>>a[i] ; 
	}
	for(int i =0  ; i<3; i++){
    		b[i] = a[i] ; 
	}
	
	
	
  
    sort(a, a + 3); 
  
    for (int i = 0; i < 3; i++) 
        cout << a[i] << endl; 
        
        cout<<endl ; 
        
    for (int i = 0; i < 3; i++) 
        cout << b[i] << endl; 
        
        
        
  
    return 0;
}
	
 