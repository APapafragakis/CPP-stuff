#include "std_lib_facilities.h"

void GrammarFunSet(int i, string sentence){
    int counter=0,j;
    char character;
    character = sentence[0];
    for(j=0; j<i; j++){
        if(sentence[j]=='?' || sentence[j] == '!'){
            counter++;                                                                         //counts the number of the characters: !/?
        }
    }
    if((sentence[0]== character) && (sentence[i-1]== character)){     //checks the first and the last letter              
        if(counter == 2){
            cout <<"\nThe sentence is grammatically correct :" << sentence;                   //checks if counter is equal to two 
        }else{
            cout <<"\nThe sentence is grammatically incorrect: " << sentence;                 //otherwise we have a grammatically mistake 
        }        
    }else{
        cout <<"\nThe sentence is grammatically incorrect: " << sentence;
        }
}

void GrammarFunPar(int total_characters, string paragraph){
    int i;
    if(paragraph[0] != '?' &&  paragraph[0] != '!'){
        cout << "In position: " << 1 << " there is a grammar mistake!" << endl;                 //checks the beginning of the paragraph
    }
    for(i=0; i<total_characters; i++){                                                         //checks the rest of the sentence 
        if(paragraph[i+1] >= 'A' && paragraph[i+1] <= 'Z'){                                   //checks if we have a special character behind of the capitals   
            if (paragraph[i] != '!' && paragraph[i] != '?'){
                cout << "In position: " << i+1 << " there is a grammar mistake!" << endl;
            }
        }
        if(i+1 == total_characters){                                                         //checks the end of the paragraph 
            if (paragraph[i] != '?' && paragraph[i] != '!'){
            cout << "In position: " << i+1 << " there is a grammar mistake!" << endl;
            }
        }
        if(paragraph[i] == '!' || paragraph[i] == '?'){                                     //checks the same thing as the above but in the opposite way to cover all the cases
            if (paragraph[i+1] >= 'A' && paragraph[i+1] <= 'Z'){                
            }else{
                if(total_characters != i+1){
                   cout << "In position: " << i+1 << " there is a grammar mistake!" << endl; 
                }
            }
        }
    }
}

int main(){
    int mode,total_characters,i=0;
    string sentence, paragraph;
    cout << "Enter 1 for one sentence or 2 for more than one: ";
    cin >> mode;                                                 //mode determines the number of sentences
    if(mode == 1){                                               //checks the value of mode
        cout << "Please enter your sentence: ";
        cin >> sentence;
        while(sentence[i] != '\0'){                             //counts the length of the sentence
            i++;
        }
        GrammarFunSet(i, sentence);                            //calls the GrammarFunSet that checks the sentence 
    }else if(mode == 2){                                      //checks the value of mode
        cout << "Please enter your paragraph: ";
        cin >> paragraph;
        total_characters = paragraph.size();                  //counts the length of the sentence
        GrammarFunPar(total_characters, paragraph);
    }else{
        cout << "Wrong input!";                              //error message
    }
}