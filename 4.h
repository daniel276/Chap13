//
// Created by Daniel Juanda on 10/30/2016.
//

#ifndef CHAP13_4_H
#define CHAP13_4_H
#include <string>
using namespace std;

class Data{
private:
    string name;
    string address;
    int age;
    int phoneNumber;

public:
    Data() {
        name = "";
        address = "";
        age = 0;
        phoneNumber = 0;
    }
    void setName(string name){
        this->name=name;
    }

    void setAddress(string address){
        this->address = address;
    }

    void setAge(int age){
        this->age= age;
    }

    void setPhoneNum(int phoneNumber){
        this->phoneNumber= phoneNumber;
    }

    string getName(){
        return name;
    }

    string getAddress(){
        return address;
    }

    int getAge(){
        return age;
    }

    int getPhoneNum(){
        return phoneNumber;
    }

};



#endif //CHAP13_4_H
