#include <iostream>
using namespace std;
int main() {
	char c1, c2, c3;
	
	//Input three character
	cout << "Enter three character: ";
	cin >> c1 >> c2 >> c3;
	
	char arr[3] = {c1, c2, c3};
	
	for (int i=0; i<3; i++) {
		char ch = arr[i];
		cout << "character:" << ch << "ASCII code:" << int(ch);
		
		if( ch >= 'A' && ch <= 'Z' ) {
			cout << " ->Uppercase letter: ";
		}
		else if ( ch >= 'a' && ch <= 'z') {
			cout << " ->Lowercase letter: ";
		}
		else if ( ch >= '0' && ch <= '9') {
			cout << " ->Digit";
		}
		else {
			cout << "->Special character";
		}
		cout << endl;
		
	}
	
	return 0;
}
