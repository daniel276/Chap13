//
// Created by Daniel Juanda on 10/30/2016.
//
#include <iostream>
#include "2.h"


using namespace std;



int main(){

    Employee info1("Matt Damon", 2001586262, "Quality Control", "Head of Division");
    Employee info2("Bennedict Cumberbatch", 200121523, "R&D","Supervisor");
    Employee info3("Cara Delevingne", 200121231,"System Analyst", "Head of Division");
    cout << "Name\t\t\t\t" << "ID Number\t\t\t" << "Department\t\t\t" << "Position\t\t\t" << endl;
    cout << info1.getName() << "\t\t\t"<<info1.getID()<< "\t\t\t" << info1.getDep() << "\t\t\t"<<info1.getPos() << endl;
    cout << info2.getName() << "\t\t"<<info2.getID()<< "\t\t\t" << info2.getDep() << "\t\t\t\t"<<info2.getPos() << endl;
    cout << info3.getName() << "\t\t\t"<<info3.getID()<< "\t\t\t" << info3.getDep() << "\t\t\t"<<info3.getPos() << endl;
    return 0;

}

/* OUTPUT
 * Name                            ID Number                       Department                      Position

Matt Damon                      2001586262                      Quality Control                 Head of Division
Bennedict Cumberbatch           200121523                       R&D                             Supervisor
Cara Delevingne                 200121231                       System Analyst                  Head of Division
 *
 * */
