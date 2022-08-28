//pointers in cpp , pointers is just a memory address


#include<iostream>

using namespace std;

int main()
{
	int age = 21;
	int *page = &age;
	double gpa = 3.6;
	string name = "Tom";

	cout << "Age memory address: "<< &age << endl;  //print the memeory address
	cout << "Gpa memory address: "<< &gpa << endl;
	cout << "Name memory address: "<< &name << endl;
	cout << "The age pointer address is : "<< page << endl ;

	cout << "The age value is :" << *page << endl ;

	return 0;

}

