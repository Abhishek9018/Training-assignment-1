#include <iostream>
using namespace std;
int main() {
	char choice;
	double temp;
	
	cout << "Enter C for Celsius to Fahrenheit" << endl;
	cout << "Enter F for Fahrenheit to Celsius" << endl;
	cout << "Your choice:";
    cin >> choice;
    
    if (choice == 'C' || choice == 'c') {
    	cout << "Enter temperature in celsius:";
    	cin >> temp;
    	cout << "Temperature in Fahrenheit =" << (temp * 9/5) + 32 << endl;
	}
	
	else if (choice == 'F' || choice == 'f') {
		cout << "Enter temperature in fahrenheit:";
		cin >> temp;
		cout << "Temperature in Celsius =" << (temp - 32) * 5/9 << endl;
	}
	else {
		cout << "Invalid choice!" << endl;
	}
	
	return 0;
}
