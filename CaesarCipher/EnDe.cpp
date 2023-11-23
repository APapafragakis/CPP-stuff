#include"std_lib_facilities.h"

void EnDeFun(int mode, string message, int magic_number){
    int i;
    switch(mode){
        case 1:
            for(i=0; message[i] !='\0'; i++){
                message[i] = message[i] + magic_number;             //adds the magic_number to the characters 
            }
            cout << "\nEncrypted message: " << message << endl;     //prints the encrypted message
            break;
        case 2: 
            for(i=0; message[i] !='\0'; i++){
                message[i] = message[i] - magic_number;             //subtracts the magic_number 
            }
            cout << "\nDecrypted message: " << message << endl;     //prints the decrypted message
            break;
        default:                                                
            cout << "\nMode must be 1 or 2";                        //prints a message for wrong input
    }   
}

int main(){                                   //magic_number is the number that we will add to the characters
    int mode, magic_number;                  //mode determines if we will do encryption or decryption
    string message;                         //stores the message 
    cout << "Please enter your message: ";
    getline (cin, message);
    cout << "\nChoose the magic number: ";
    cin >> magic_number;
    cout << "\nChoose 1 for Encryption or 2 for Decryption: ";
    cin >> mode; 
    EnDeFun(mode, message, magic_number); //function that encrypts/decrypts the string 
}