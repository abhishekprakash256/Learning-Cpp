// make the statements 
#include<iostream>

using namespace std;


string day_weeek(int day)
{
	string day_name;
	switch(day) {
	case 0:
		day_name = "Monday";
		break;
	case 1:
		day_name = "Tuesday";
		break;
	case 2:
		day_name = "Wednesday";
		break;
	case 3:
		day_name = "Thursday";
		break;
	case 4:
		day_name = "Friday";
		break;
	case 5:
		day_name = "Saturday";
		break;
	case 6:
		day_name = "Sunday";
		break;
	default:
		day_name = "Not found";
		break;
	}

	return day_name;
}

int main()
{
	int day_num;
	cout << "Enter the number of the week: " << endl;
	cin >> day_num ;
	string day_name = day_weeek(day_num);

	cout << day_name << endl;

	return 0;
}