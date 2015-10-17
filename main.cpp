//#include "passwordgrid.hpp"
#include "passwordgrid.cpp"
#include "path.cpp"
using namespace std;

int test_exo1()
{
	passwordgrid pwg(6,5);
	//pwg.reset();
	//pwg.print();
	return 0;
}

int test_exo2()
{
	path ptw(8);
	ptw.print();
	return 0;
}

int main()
{
	test_exo1();
	test_exo2();
	return 0;
}