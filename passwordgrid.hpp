/*#ifndef __passwordgrid_H_included__
#define __passwordgrid_H_included__
#endif*/

#include <string>
#include <iostream>

class passwordgrid
{
private: 
	char **grid;
	int nbrow;
	int nbcolumn;
public:
	passwordgrid(int row,int column);

	void print();
	void reset();


	/* data */
};