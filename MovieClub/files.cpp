#include "std_lib_facilities.h"

class Movie{
  public:
  string movie, status, cost;
  Movie(){

  }
  Movie(string NewMovie, string NewStatus, string NewCost){
    movie = NewMovie;                                                         // stores the data of the file 
    status = NewStatus;
    cost = NewCost;
  }
  void PrintFun(){
    cout << movie << " " << status << " " << cost << endl;                    //prints the file 
  }
};

class Movie SelectMovie(vector<class Movie> &list , string movie){  
  int mode;
  for(int i=0; i<list.size(); i++){
    if(list[i].movie == movie){
      cout <<"Press 1 if you want to rent it, or 2 if you want to buy it: ";  //asks if he wants to rent it or buy it
      cin >> mode;      
      if(mode == 1){  
        list[i].status = "1";                                                 // changes the status of the selected movie   
      }else if(mode == 2){
        list[i].status = "2";
      } 
      return list[i];                                                         // returns the vector with the selected class 
    }
  }
  cerr << "Movie doesnt exist.";                                              // error message
}

int main()
{
  string myText, nameFile, movie, status, cost;
  int user_cost = 0;                                 // initialize the cost of the user
  vector<class Movie> list;                          // creates a vector with classes
  Movie SelectedMovie;                               // creates a class for the selected movie
  cout << "Give me the name of the file: ";          // print a prompt 
  cin >> nameFile;                                   // read the file 
  ifstream MyFile(nameFile);                         // reads from files
  if(!MyFile){                                       // if file does not exist, 
    cerr << "Error";                                 // print "Error"
    return -1;
  }
  while(MyFile >> movie >> status >> cost){          // reads from the file
    Movie temp(movie, status, cost);                 // saves the data in a class                                     TEMP = FILE 
    list.push_back(temp);                            // stores the class in the vector 
    temp.PrintFun();                                  
  } 
  MyFile.close();

  cout << "Choose a movie: ";
  cin >> movie;                                      // reads a movie from the file 
  while (movie != "-1" && movie != "exit")
  {
    SelectedMovie = SelectMovie(list,movie);         // SelectMovie is a class that takes as arguments the vector and the selected movie
    if(SelectedMovie.status == "1"){                 // calculates the cost of the user
      user_cost = user_cost + 3;
    }else if(SelectedMovie.status == "2"){
      user_cost = user_cost + 5;
    }
    SelectedMovie.PrintFun();                         // prints the status of the selected movie 
    cout << "Choose a movie: ";
    cin >> movie;
  }
  ofstream Myfile(nameFile);                          // writes in the file the new status 
    for(int i=0; i<list.size(); i++){
      list[i].PrintFun();
      Myfile << list[i].movie << " " << list[i].status << " " << list[i].cost << endl;
    }
  Myfile.close(); 
  cout << "Cost of the movies: " << user_cost << endl;  // prints the cost of the user 
}