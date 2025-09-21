#include <iostream>
using namespace std;

int main() {
	
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b;

    
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    if (x == 1)
        cout << a << " and " << b << " are co-prime numbers." << endl;
    else
        cout << a << " and " << b << " are NOT co-prime numbers." << endl;


    return 0;
}

