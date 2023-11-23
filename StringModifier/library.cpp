#include "std_lib_facilities.h"
#include "my_string.h"

int main(){
    int mode, result;
    string First_String, Second_String;
    MyString myObj;
    cout << "Give me the type of operation: ";
    cin >> mode;
    try{
        if(mode >= 1 && mode <= 4){                            //checks if mode has a valid value                   
            cout <<"Give the first string: ";
            cin >> First_String;                             //stores first string in the class                    
            if(mode == 1){
                cout <<"Give the second string: ";
                cin >> Second_String;                            //stores second string in the class 
                cout << myObj.ConcatanationFun(First_String, Second_String);
            }else if(mode == 2){
                cout <<"Give the second string: ";
                cin >> Second_String;                            //stores second string in the class 
                result = myObj.CompareFun(First_String, Second_String);
                if(result == 0){
                    cout << "Strings are equal.";
                }else if(result == 1){
                    cout << "First string is greater than Second string.";
                }else{
                    cout << "Second string is greater than First string.";
                }                
            }else if(mode == 3){
                cout << myObj.ToUppperFun(First_String);
            }else{
                cout << myObj.ToLowerFun(First_String);
            }            
        }else{
            throw logic_error("Error");                          //throw logic error if mode has invalid value
        }
    }
    catch(std::logic_error){
        cerr << "Wrong input";                                  //print error message
    }        
}