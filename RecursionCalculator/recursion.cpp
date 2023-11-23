#include "std_lib_facilities.h"

double RecursionFun(int total_numbers, vector<double>numbers, int mode , double result, int i, int counter){
    if(mode == 1){                                                                                                                          //case: 1 sum
        if(i == total_numbers){                                                                                                           
            result = numbers[total_numbers] + numbers[total_numbers-1];                                                                   //stores the new valid of the result, so as to print it later
            cout << counter << ". " << numbers[total_numbers] << " + " << numbers[total_numbers-1] << " = " << result << endl;           //does the first print        
            return RecursionFun(total_numbers-1,numbers,mode,result,i, counter+1);               
        }else if(total_numbers>0){                                                                                                           //prints the rest
            cout << counter << ". " << result << " + " << numbers[total_numbers-1] << " = " << result+numbers[total_numbers-1] << endl;     //stores the new values of the result and we print it
            result = numbers[total_numbers-1] + result;
            return RecursionFun(total_numbers-1,numbers,mode,result,i, counter+1);           
        }else{
            return 0;
        }     
    }else if(mode == 2){                                                                                                                    //case: 2 multiplication
        if(i == total_numbers){
            result = numbers[total_numbers] * numbers[total_numbers-1];                                                                     //stores the new value of the result, so as to print it later
            cout << counter << ". " << numbers[total_numbers] << " * " << numbers[total_numbers-1] << " = " << result << endl;             //does the first print
            return RecursionFun(total_numbers-1,numbers,mode,result,i, counter+1);               
        }else if(total_numbers>0){
            cout << counter << ". " << result << " * " << numbers[total_numbers-1] << " = " << result*numbers[total_numbers-1] << endl;      //prints the rest
            result = numbers[total_numbers-1] * result;                                                                                     //stores the new values of the result and we print it 
            return RecursionFun(total_numbers-1,numbers,mode,result,i, counter+1);           
        }else{
            return 0;
        }             
    }else{                                                                                                                                     //case: 3 subtraction
        if(i == total_numbers){                                                                                                              
            result = numbers[total_numbers] - numbers[total_numbers-1];
            cout << counter << ". " << numbers[total_numbers] << " - " << numbers[total_numbers-1] << " = " << result << endl;                //stores the new value of the result, so as to print it later
            return RecursionFun(total_numbers-1,numbers,mode,result,i, counter+1);                                                           //does the first print              
        }else if(total_numbers>0){
            cout << counter << ". " << result << " - " << numbers[total_numbers-1] << " = " << result-numbers[total_numbers-1] << endl;      //prints the rest
            result = result - numbers[total_numbers-1];
            return RecursionFun(total_numbers-1,numbers,mode,result,i, counter+1);                                                          //stores the new values of the result and we print it
        }else{
            return 0;
        }             
    } 
}

int main(){
    int i, total_numbers, mode;
    double number;
    vector<double>numbers;
    cout << "Give me total numbers: ";
    cin >> total_numbers;                                                           //reads the total numbers                                                    
    try{
        if(total_numbers>1){
            cout << "Please enter the type of operation: ";
            cin >> mode;
            if(mode>=1 && mode<=3){                                                 //checks if mode is valid
                for(i=0; i<total_numbers; i++){
                cout << "Give me the number: ";                                     //reads all the numbers and stores them in the vector
                cin >> number;
                numbers.push_back(number);
                }
                total_numbers = total_numbers-1;
                double result = 0;                                                  //we need "result" to store our value that we calculate in RecursionFun
                i = total_numbers;
                int counter = 1;                                                    //position of the operation
                RecursionFun(total_numbers,numbers,mode, result, i, counter);       //calls RecursionFun that prints our operation
            }else{
                throw logic_error("Mode has invalid value");                        //throw if we have invalid value for mode
            }   
        }else{
            throw logic_error("Total numbers cannot be a negative number");         //throw if we have invalid value for total_numbers
        }
    }
    catch(std::logic_error){
        cerr << "\nWrong input";                                                    //prints "Wrong input" if we have a wrong value in mode or in total_numbers.  
    }               
}