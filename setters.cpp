// the setters and getters 

#include<iostream>

using namespace std;

class Movie{
public:
	string name;
	string rating;
	string genre;
	int budget ;
	int year;

	Movie(string aname , string arating, string agenre, int abudget, int ayear)
	{
		name = aname;
		rating = arating;
		genre = agenre;
		budget = abudget;
		year = ayear;
	}
};



class Horror_movie : public Movie {
public:
	string main_actor;
	string horror_genre;
	Horror_movie(string amain_actor, string ahorror_genre)
	{
		main_actor = amain_actor;
		horror_genre = ahorror_genre;
	}

};



int main()
{
	Movie Avengers("Avengers", "PG-13","SCI-FI" ,400, 2014);

	cout << Avengers.name << endl;
	return 0;
}