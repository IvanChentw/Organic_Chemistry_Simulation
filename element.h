#ifndef ELEMENT_H
#define ELEMENT_H

#include<string>
#include"atom.cpp"

class element{
public:
	//number,mass,group,EN
	element();
	atom H(const string="Hydrogen",const int=1,const double=1.008,const int=1,const double=2.20);
	atom C(const string="Carbon",const int=6,const double=12.01,const int=4,const double=2.55);

};

#endif
