#include <iostream>
using namespace std;

int main() {
	
    int i, j;

    cout << "Prime numbers under 100 are: " << endl;

    for (i = 2; i < 100; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                break;
        }
        
        if (j > i / 2)
            cout << i << " ";
    }


    return 0;
}

