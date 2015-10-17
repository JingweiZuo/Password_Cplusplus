#include "path.hpp"
#include <cstdlib>

using namespace std;

path::path(int n):longeur(n)
{
	char *pathway = new char[n+1];
	for (int i=0;i < n; i++)
	{
		pathway[i]= rand ()%8;
		
	}
}

void path::print()
{
	for (int i=0;i < longeur; i++)
	{
		cout<<pathway[i]<<"-";
	}
}

