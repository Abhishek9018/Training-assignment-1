#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	
	float average;
	
	cout<<"Enter the integers:";
	cin >> num1 >> num2 >> num3;
	
	average = (num1 + num2 + num3)/3;
	
	cout<< "the average is:" << average << endl;
	
	return 0;
}
