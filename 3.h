//
// Created by Daniel Juanda on 10/30/2016.
//

#ifndef CHAP13_3_H
#define CHAP13_3_H
#include <string>
using namespace std;
class Car{
private:
    int yearModel;
    string make;
    int speed;

public:
    Car(int year, string make){
    this->yearModel=year;
        this->make=make;
        speed =0;
    }

    int getYear(){
        return yearModel;
    }

    string getMake(){
        return make;
    }

    int getSpeed(){
        return speed;
    }

    int accelerate(){
        speed +=5;
        return speed;
    }

    int brake(){
        speed-=5;
        return speed;
    }

};

#endif //CHAP13_3_H
