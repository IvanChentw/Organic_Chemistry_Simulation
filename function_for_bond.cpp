#include<iostream>



bool check_triple_ok(c_atom* temp1,c_atom* temp2){
        if(temp1->third==0 && temp1->forth==0 && temp2->third==0 && temp2->forth==0){
                return true;
        }
        else{return false;}
}

bool check_double_type1(c_atom* temp1,c_atom* temp2){
	if(temp1->third==0 && temp2->third==0){
		return true;
	}
	else{return false;}
}

bool check_double_type2(c_atom* temp1,c_atom* temp2){
        if(temp1->third==0 && temp2->forth==0){
                return true;
        }
        else{return false;}
}

bool check_double_type3(c_atom* temp1,c_atom* temp2){
        if(temp1->forth==0 && temp2->third==0){
                return true;
        }
        else{return false;}
}

bool check_double_type4(c_atom* temp1,c_atom* temp2){
        if(temp1->forth==0 && temp2->forth==0){
                return true;
        }
        else{return false;}
}

bool check_double(c_atom *temp1,c_atom *temp2){
	if((temp1->third==temp2 && temp2->third==temp1)||(temp1->forth==temp2 && temp2->third==temp1)||(temp1->third==temp2 && temp2->forth==temp1)||(temp1->forth==temp2 && temp2->forth==temp1)){
		return true;
	}
	else{
		return false;
	}
}
bool check_triple(c_atom *temp1,c_atom *temp2){
	if(temp1->third==temp2 && temp1->forth==temp2 && temp2->third==temp1 && temp2->forth ==temp1){
		return true;
	}
	else{
		return false;
	}
}
bool check_double1(c_atom* temp1,c_atom* temp2){
        if(temp1->third==temp2 && temp2->third==temp1){
                return true;
        }
        else{return false;}
}

bool check_double2(c_atom* temp1,c_atom* temp2){
        if(temp1->third==temp2 && temp2->forth==temp1){
                return true;
        }
        else{return false;}
}

bool check_double3(c_atom* temp1,c_atom* temp2){
        if(temp1->forth==temp2 && temp2->third==temp1){
                return true;
        }
        else{return false;}
}

bool check_double4(c_atom* temp1,c_atom* temp2){
        if(temp1->forth==temp2 && temp2->forth==temp1){
                return true;
        }
        else{return false;}
}

