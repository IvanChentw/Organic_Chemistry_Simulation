#include<iostream>
#include"carbon.cpp"
#include"element.cpp"
#include<string>

int main(){
	carbon carbon(10);
	carbon.double_bond(2);
	carbon.triple_bond(4);
	carbon.double_bond(7);
	carbon.double_bond(8);
	carbon.print();
	atom c("fsdfs",4,3.4,4,4); 
	string name=c.get_name();
	cout<<name;
	element e();
}
