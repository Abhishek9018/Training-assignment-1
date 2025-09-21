#include <iostream>
using namespace std;

int main() {
	
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int a = 0, b = 1, c = 0;

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    if (num == 0 || num == 1 || c == num)
    
        cout << num << " is in the Fibonacci series." << endl;
    else
    
        cout << num << " is NOT in the Fibonacci series." << endl;

    return 0;
}

