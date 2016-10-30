//
// Created by Daniel Juanda on 10/30/2016.
//

#ifndef CHAP13_2_H
#define CHAP13_2_H
#include <string>
using namespace std;
class Employee{
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee(){
        name = "";
        idNumber= 0;
        department="";
        position="";
    }

    Employee(string getName, int idNum, string dep, string pos){
        name = getName;
        idNumber = idNum;
        department = dep;
        position = pos;
    }

    string getName(){
        return name;
    }

    int getID(){
        return idNumber;
    }

    string getDep(){
        return department;
    };

    string getPos(){
        return position;
    }


};



#endif //CHAP13_2_H
