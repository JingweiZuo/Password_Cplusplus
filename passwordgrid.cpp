#include "passwordgrid.hpp"
using namespace std;



passwordgrid::passwordgrid(int row,int column):nbrow(row),nbcolumn(column)
{//initialisé les paramètres nbrow,nbcolumn
	//this->nurow = row;
	//this->column= column
	passwordgrid::reset();
	passwordgrid::print();
	
}



void passwordgrid::print()
{
	int i,j;
	for (i=0;i < nbrow; i++)
	{
		for(j=0 ; j<nbcolumn ; j++)
		{
			cout<<grid[i][j];
		}
		cout<<endl;
	}
}
void passwordgrid::reset()
{
	int i,j;
	grid = new char*[nbrow];
	for (i=0;i < nbrow; i++)
	{
		grid[i] = new char[nbcolumn];
		for(j=0 ; j<nbcolumn ; j++)
		{
			grid[i][j] = rand() %93 + 33 ;
		}
	}
}
