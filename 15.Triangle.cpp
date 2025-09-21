#include <iostream>
using namespace std;
int main() {
	float a, b, c;
	
	cout << "Enter the three sides of the triangle:";
	cin >> a >> b >> c;
	
	if(a+b<c, b+c<a, c+a<b) {
		cout << "Invalid triangle!" << endl;
	}
	
	else {
		
		if( a==b && b==c) {
			cout << "The triangle is equilateral." << endl;
		}
		
		else if(a==b || b==c || c==a){
			cout << "The triangle is isosceles." << endl;
		}
		
		else {
			cout << "The triangle is scalar." << endl;
		}
		
	}
	
	return 0;
}
