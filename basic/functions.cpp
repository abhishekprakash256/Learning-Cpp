// the program to make the functions 
#include<iostream>

using namespace std;



void test_fun()
{
	cout << "Hello User" << endl;
}



string test_fun2()
{
 string test = "this is string";

 return test ;
}


int main()
{
	test_fun();

	string ret = test_fun2();

	cout << ret << endl;

	return 0;
}