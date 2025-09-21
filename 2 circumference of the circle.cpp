#include<iostream>
using namespace std;

int main()
{
	float radius, circumference;
	const float PI = 3.14;
	
	cout << "Enter the radius of circle:";
	cin >> radius;
	
	//calculate circumference
	circumference = 2 * PI * radius;
	
	
	cout << "the circumference of the circle is:" << circumference << endl;
	
	return 0;
}
