#ifndef ATOM_H
#define ATOM_H
#include<iostream>
#include<string>
class atom{
	public:
		atom(string,int,double,int,double);
		string get_name()const;
		double get_electronegativity()const;
		int get_number()const;
		double get_mass()const;
		int get_group()const;
	
	private:
		const string name;
		const int number;
       		const double mass;
		const int group; //1A-8A group
		const double electronegativity;				
};

#endif

