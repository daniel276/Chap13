//
// Created by Daniel Juanda on 10/30/2016.
//

#ifndef CHAP13_5_H
#define CHAP13_5_H
#include <iostream>
#include <string>
using namespace std;

class RetailItem{
private:
    string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(string description, int units, double price){
        this->description= description;
        this->unitsOnHand=units;
        this->price=price;
    }

    void setDescription(string desc){
        desc = description;
    }
    void setUnits(int units){
        units = unitsOnHand;
    }

    void setPrice(double price){
        price = this->price;
    }

    string getDesc(){
        return description;
    }

    int getUnits(){
        return unitsOnHand;
    }

    double getPrice(){
        return price;
    }

};


#endif //CHAP13_5_H
