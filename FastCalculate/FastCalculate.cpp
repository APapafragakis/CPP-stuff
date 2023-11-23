#include "std_lib_facilities.h"

void FastCalculator(int a, int b, int mode){
    if (mode == 1) {                            //if mode is equal to 1, the operation is multiplication
        cout << "Result: " << a*b;             
    }else if(mode == 2){                       //if mode is equal to 2, the operation is division
        try{
            if (b!=0){                         //if b is equal to 0, the program ends with a message 
              cout << "Result: " << a/b;  
            }else{
                throw (b);
            }
        }
        catch (int case1){
            cout << "b must be non-zero"; 
        }
    }else if(mode == 3){ 
        cout << "Result: "<< sqrt(pow(a,2) + pow(b,2));                   //if mode is equal to 3, then it does the specific operation
    }else if(mode == 4){                        //if mode is equal to 4, then it does the power 
        if(a==0){                              //if a is equal to 0 and b is a negative number, the program ends with a message,                                           
            try{                              //because we can't divide by zero 
                if(b>=0){
                    cout << "Result: " << pow(a,b);        
                }else{
                    throw(b);
                }
            }
            catch (int case4){
                cout << "b has to be a non-negative, if a is equal to zero";
            }
        }else{
            cout << "Result: " << pow(a,b);                   //if a is not equal to zero, then the program return the result normally
        }                                                              
    }else if(mode == 5){                       //if mode is equal to 5, the program returns the remainder 
        cout << "Result: " << a%b;
    }
}


int main(){
    int x,y,mode,result;                        
    cout << "Please enter two number: ";
    cin >> x >> y;                              //inputs
    try{
        cout << "Please enter the type of operation: ";
        cin >> mode;                            //types of operation
        if(mode>=1 && mode<=5){                 //checks if the value of mode is valid 
            FastCalculator(x,y,mode); 
        }else{
            throw (mode);
        }
    }
    catch (int Num){
        cout << "Mode has to be between 1 and 5";
    }
} 