//using the length of the function 

#include<iostream>

using namespace std;

int main()

{
	string dummy = "something is there";

	// using the function of the strings 

	cout << dummy.length() << endl; 

	cout << dummy[0] << endl;

	cout << dummy.find("is") << endl;

	cout << dummy.substr(2,6) << endl;

}