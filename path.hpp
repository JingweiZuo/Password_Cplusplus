#include <string>
#include <iostream>

using namespace std;

class path 
{
public:
	path(int n);
	void print();

	int longeur;
	std::string  direction[8] = {"N","NW","W","SW","S","SE","E","NE"};
	int *pathway;
};