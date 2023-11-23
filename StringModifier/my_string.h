#include "std_lib_facilities.h"

class MyString{
public:
    string ConcatanationFun(string First_String, string Second_String){                                            //ConcatanationFun concatenates two strings
        string Total_String;
        Total_String = First_String + Second_String;
        return Total_String;
    }
    int CompareFun(string First_String, string Second_String){                                                  //CompareFun compares two strings
        if(First_String == Second_String){
            return 0;            
        }else if(First_String > Second_String){
            return 1;
        }else if(First_String < Second_String){
            return -1;
        }
    }   
    string ToUppperFun(string First_String){                              //ToUppperFun converts lowercase letters to uppercase 
        int First_Size = First_String.size();
        for(int i=0; i < First_Size; i++){                              //converts first string
            if(First_String[i]>=97 && First_String[i]<=122){
                First_String[i] = First_String[i] - 32;
            }
        }
        return First_String;                      
    }
    string ToLowerFun(string First_String){                              //ToLowerFun converts uppercase letters to lowercase
        int First_Size = First_String.size();
        for(int i=0; i < First_Size; i++){
            if(First_String[i]>=65 && First_String[i]<=90){             //converts first string
                First_String[i] = First_String[i] + 32;
            }
        }
        return First_String;
    }    
};