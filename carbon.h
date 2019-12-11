#ifndef CARBON_H
#define CARBON_H

#include <iostream>
#include <string>
using namespace std;
struct c_atom{
	char name='C';
	c_atom *next;
	c_atom *previous;
	c_atom *third= 0;
	c_atom *forth= 0;
};

class carbon{
	friend ostream& operator<<(ostream&,const carbon&);
public:
	carbon(int=10);//default decane

//	carbon(carbon&);
//	~carbon;
	carbon& double_bond(int);
	carbon& triple_bond(int);

	void print()const;

	carbon& hydrogen_addition(int);
	carbon& halogen_addition(int,string);

private:
	int total_c_atom;
	int c_chain;
	c_atom *top;
	c_atom *bottom;
};

#endif
