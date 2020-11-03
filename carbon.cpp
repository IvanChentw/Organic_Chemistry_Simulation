#include <iostream>
#include <iomanip>
#include "carbon.h"
#include "function_for_bond.cpp"
#include "constant.cpp"

using namespace std;

carbon::carbon(int number) :total_c_atom(number>1 ? number : 10){
	int count=total_c_atom;
	c_chain=total_c_atom;
	c_atom *temp;
	temp = new c_atom;
	temp->previous=0;
	temp->next=0;
	top = temp; bottom =temp;
	count--;
	while(count>0){
		temp = new c_atom;
		temp->previous = bottom;
		bottom->next = temp;
		bottom = temp;
		temp->next = 0;
		count--;
	}
}
ostream &operator<<( ostream &out, const carbon& temp){
	temp.print();
	return out;
}

carbon& carbon::double_bond(int num){
	if(num<1 || num>(c_chain-1) ){
		cout<<"Error position"<<endl;
	}
	else{	c_atom *temp,*temp2;
		temp=top;
		for(int i=1;i<=(num-1);i++){
		temp = temp->next;
		}
		temp2=temp->next;

		if( check_double_type1(temp,temp2) ){
			temp->third=temp2;
			temp2->third=temp;
		}
		else if(check_double_type2(temp,temp2)){
			temp->third=temp2;
			temp2->forth=temp;
		}
		else if(check_double_type3(temp,temp2)){
		        temp->forth=temp2;
                        temp2->third=temp;
		}
		else if(check_double_type4(temp,temp2)){
			temp->forth=temp2;
                        temp2->forth=temp;
		}
		else{
			cout<<"Error position"<<endl;
		}
	;}
	return (*this);
}
carbon& carbon::triple_bond(int num){

	if(num<1 || num>(c_chain-1)){
		cout<<"Error position"<<endl;
	}
	else {
		c_atom* temp=top;
		c_atom* temp2;
                for(int i=1;i<=(num-1);i++){
                temp = temp->next;
                }
                temp2= temp->next;
		

		if( check_triple_ok(temp,temp2) ){
			temp->third=temp2;
			temp->forth=temp2;
			temp2->third=temp;
			temp2->forth=temp;
		}
		else{
			cout<<"Error position";
		}
		
	;}
	return (*this);
}

void carbon::print() const{
	c_atom *temp=top;
	c_atom *temp2=top->next;
	int count=c_chain;
	for(int i=1;i<=(count-1);i++){	
		if(check_triple(temp,temp2)){
			cout<<temp->name<<"≡";
		}
		else if(check_double(temp,temp2)){
                        cout<<temp->name<<"=";
                }
		else{
			cout<<temp->name<<"-";
		}
		temp = temp->next;
		if(temp->next!=0){
			temp2 = temp2->next;
		}
	};
	cout<<temp2->name<<endl;
	
}
carbon& carbon::hydrogen_addition(int num){

        if(num<1 || num>(c_chain-1) ){
                cout<<"Error position"<<endl;
        }
        else{   c_atom *temp,*temp2;
                temp=top;
                for(int i=1;i<=(num-1);i++){
                temp = temp->next;
                }
                temp2 = temp->next;

		if( check_triple(temp,temp2) ){
			temp->third=0;
			temp->forth=0;
			temp2->third=0;
			temp2->forth=0;
		}
		else if( check_double1(temp,temp2) ){
                        temp->third=0;
                        temp2->third=0;
                }
                else if(check_double2(temp,temp2)){
                        temp->third=0;
                        temp2->forth=0;
                }
                else if(check_double3(temp,temp2)){
                        temp->forth=0;
                        temp2->third=0;
                }
                else if(check_double4(temp,temp2)){
                        temp->forth=0;
                        temp2->forth=0;
                }
                else{
                        cout<<"Error position"<<endl;
                }
        ;}
	return *this;
}
carbon& carbon::halogen_addition(int num,string element){
	return *this;
}
