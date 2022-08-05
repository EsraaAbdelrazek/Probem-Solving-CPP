#include <iostream> 
using namespace std;
int main (){
	double a , b , c ; 
	char x , y; 
	
	cin >> a >> x >> b >> y >> c ; 
	if(x =='+'){
		if(a+b == c)
			cout<<"Yes"<<endl; 
		else 
		cout << a+ b <<endl ; 
	}
	
	if(x =='*'){
		if(a*b == c)
			cout<<"Yes"<<endl; 
		else 
	cout << a* b <<endl ; 
	}
	
	if(x =='-'){
		if(a-b == c)
				cout<<"Yes"<<endl; 
		else 
				cout << a - b <<endl ; 
	}
	
	if(x =='/'){
		if(a/b == c)
			cout<<"Yes"<<endl; 
		else 
			cout << a/ b <<endl ; 
	}

	return 0 ; 
}