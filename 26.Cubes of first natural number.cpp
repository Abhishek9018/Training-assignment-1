#include <iostream>
using namespace std;
int main () {
	int N;
	int sum = 0;
	
	cout << "Enter a positive integer N:";
	cin >> N;
	
	for (int i=1; i<=N; i++){
		sum += i * i * i;
	}
	
	cout << " Sum of cubes of first " << N << " natural numbers= " << sum << endl;
	
	return 0;
}
