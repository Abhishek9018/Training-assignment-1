#include <iostream>
using namespace std;
int main () {
	 int asciicode;
	 cout << "the ASCII code (0-127): ";
	 cin >> asciicode;
	 
	 cout << "The character for ASCII code: " << asciicode << " is: " << char(asciicode) << endl;
	 
	 return 0;
	 
}
