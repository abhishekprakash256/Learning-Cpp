// using the construtor in cpp 
#include<iostream>


using namespace std;


class Student {

public:
	string name;
	string birth_place;
	int gpa ;
	int age;

	Student (string aname, string abirth_place, int aage, int agpa)
	{
		cout << "creating a object" << endl ;
		name = aname;
		birth_place = abirth_place;
		gpa = agpa;
		age = aage;

	}

	bool is_honors()
	{
		if (gpa >= 3.5)
		{
			return true;
		}
		return false;
	}

};

int main()
{
	Student student1("Eric","FL",20,3.7);

	cout << student1.name << endl;

	cout << student1.is_honors() << endl;

	return 0;
}