#include <iostream>
using namespace std;

int main() {
	
	int num = 6;
	
	for(int i=0; i<num; i++){
		
		for(int j=0; j<num; j++){
			
			if( i==0 || j==0 || j==num-1 || i==num-1 )
			    cout<< " * ";
			else
			    cout<< "   ";
			
		} 
		cout << endl;
		
    }
	
	return 0;
	
}
