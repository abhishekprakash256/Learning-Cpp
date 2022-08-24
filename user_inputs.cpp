// using the user inputs in the system
#include<iostream>

using namespace std;


int main()

{
	int age;

	cout << "Enter the age in the numbers " << endl ;

	cin >> age ;

	cout << "The age is in " << age << endl;

	// for gettiung the strigs user input

	string name;

	cout << "enter the name "  << endl;

	getline(cin, name) ;

	cout << "The name is " << name << endl ;
}