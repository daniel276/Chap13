//
// Created by Daniel Juanda on 10/30/2016.
//

#include <iostream>
#include "4.h"
void display(Data);
int main(){

    Data info1;
    info1.setName("Daniel");
    info1.setAddress("Jl. Soekarno Hatta XV, No.5C");
    info1.setAge(18);
    info1.setPhoneNum(5345342);

    Data info2;
    info2.setName("Martha");
    info2.setAddress("Gotham West No.5");
    info2.setAge(47);
    info2.setPhoneNum(23402312);

    Data info3;
    info3.setName("Michael");
    info3.setAddress("Marina bay");
    info3.setAge(23);
    info3.setPhoneNum(345234112);

    display(info1);
    cout << endl;
    display(info2);
    cout << endl;
    display(info3);

    return 0;
}

void display(Data info){
    Data info1;
    cout << "Name : " << info.getName() << endl;
    cout << "Address : " << info.getAddress() << endl;
    cout << "Age : " << info.getAge() << endl;
    cout << "Phone number : " <<  info.getPhoneNum() << endl;
}