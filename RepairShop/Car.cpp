#include "std_lib_facilities.h"

class Car{     
private:
    int ProblemTires, PaintPercentage, ProblemLights;
public:
    void setCar(int Tires, int Paint, int Lights){                                                       //setter for the car
        if((Tires >= 0 && Tires <= 4) && (Paint>=0 && Paint<=100) && (Lights>=0 && Lights<=8)){         //checks the attributes
            ProblemTires = Tires;
            PaintPercentage = Paint;
            ProblemLights = Lights;
        }else{
            ProblemLights = -1;
        }        
    }
    int getTires(){                                                                                   //getter for the tires that need repair
        return ProblemTires;
    }
    int getPaint(){                                                                                   //getter for the paint percentage
        return PaintPercentage;
    }
    int getLights(){                                                                                  //getter for the missing lights
        return ProblemLights;
    }
    Car(){
        ProblemTires = 0;
        PaintPercentage = 0;
        ProblemLights = 0;        
    }                                                                                                 //constructors that creates a new car
    Car(int Tires, int Paint, int Lights){                                                           //constructors that creates a used car
        if((Tires >= 0 && Tires <= 4) && (Paint>=0 && Paint<=100) && (Lights>=0 && Lights<=8)){     //checks the attributes
            ProblemTires = Tires;
            PaintPercentage = Paint;
            ProblemLights = Lights;
        }else{
            ProblemLights = -1;
        }
    }
    void PrintCarStatus(){                                                                          //method that prints the car status
        cout << "Tires that need repair: " << ProblemTires << endl;
        cout << "Paint Percentage: " << PaintPercentage << "%" << endl;
        cout << "Missing Lights: " << ProblemLights << endl;
    }
    float CalculateRepairCosts(float TireCost, float PaintCost, float LightCost){                   //method that calculates the total cost of the car
        if((ProblemTires >= 0 && ProblemTires <= 4) && (PaintPercentage>=0 && PaintPercentage<=100) && (ProblemLights>=0 && ProblemLights<=8)){
            float Total_Cost;
            Total_Cost = ProblemTires * TireCost;
            Total_Cost = (ProblemLights * LightCost) + Total_Cost;
            if(PaintPercentage > 30){
                Total_Cost = PaintCost + Total_Cost;
                return Total_Cost;
            }else{
                return Total_Cost;
            }
        }
    }
};

int main(){
    int TireCost, PaintCost, LightCost;                                                             //initilization of the costs                      
    float TotalCost_New, TotalCost_Used;
    cout << "Give me the cost of each tire: ";
    cin >> TireCost;
    cout << "Give me the cost of the paint: ";
    cin >> PaintCost;
    cout << "Give me the cost of each light: ";
    cin >> LightCost;  
    cout << endl;
    Car NewCar;
    NewCar.setCar(2, 28, 1);                                                                              //change the status of the new car
    Car UsedCar(2, 40, 5);
    try{
        if(NewCar.getLights() != -1 && UsedCar.getLights() != -1){
            TotalCost_New = NewCar.CalculateRepairCosts(TireCost, PaintCost, LightCost);                        //return the total cost of the new car
            TotalCost_Used = UsedCar.CalculateRepairCosts(TireCost, PaintCost, LightCost);                     //return the total cost of the used car
            cout << "Status of the new car" << endl;                                                          //prints the status and the total cost of the new car
            NewCar.PrintCarStatus();                                                                          
            cout << "Total cost of the new car: " << TotalCost_New << "$" << endl;
            cout << endl;
            cout << "Status of the used car" << endl;                                                      //prints the status and the total cost of the used car
            UsedCar.PrintCarStatus();
            cout << "Total cost of the used car: " << TotalCost_Used << "$";
        }else{
            throw logic_error("Wrong attributes");
        }
    }
    catch(std::logic_error){
            cerr << "Wrong attributes"; 
    }     
}
