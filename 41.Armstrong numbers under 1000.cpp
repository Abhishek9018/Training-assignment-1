#include <iostream>
using namespace std;

int main() {
	
    int num, temp, digit, sum;

    cout << "Armstrong numbers under 1000 are: " << endl;

    for (num = 1; num < 1000; num++) {
        temp = num;
        sum = 0;


        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit; 
            temp = temp / 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}

