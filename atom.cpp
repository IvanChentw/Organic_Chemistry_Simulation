#include"atom.h"
#include<iostream>
#include<string> 

atom::atom(string name1,int n,double m,int g,double en)
	:name(name1),number(n),mass(m),group(g),electronegativity(en){
	//empty
} 

string atom::get_name() const{
	return name;
}

int atom::get_number() const{
	return number;
}

double atom::get_mass() const{
        return mass;
}

int atom::get_group() const{
        return group;
}

double atom::get_electronegativity() const{
        return electronegativity;
}



