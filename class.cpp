// making the class and objects
#include<iostream>


using namespace std;


//making a book class 
class Book {
public:
	string title;
	string author;
	int pages;
	double prize;
};





int main()
{
	Book book1;  //make the book title 
	book1.title = "smart people";
	book1.author = "xyz";
	book1.pages = 1;
	book1.prize = 10;


	cout << book1.pages << endl;
	return 0;



}