//
// Created by Daniel Juanda on 10/30/2016.
//

#include <iostream>
#include "5.h"
void display(RetailItem);
int main(){

    RetailItem data1 ("Jacket", 12, 59.95);
    RetailItem data2 ("Designer Jeans", 40, 34.95);
    RetailItem data3 ("Shirt",20,24.95);
    display(data1);
    display(data2);
    display(data3);
}

void display(RetailItem data){
    cout << "\t\t" << "Description" << "\t\t" << "Units On Hand" << "\t\t" << "Price" << endl;
    cout << "Item #1" << "\t\t" << data.getDesc() << "\t\t\t" << data.getUnits() << "\t\t\t" << data.getPrice() << endl;
    cout << endl;
}

/*
 *                 Description             Units On Hand           Price
Item #1         Jacket                  12                      59.95

                Description             Units On Hand           Price
Item #1         Designer Jeans                  40                      34.95

                Description             Units On Hand           Price
Item #1         Shirt                   20                      24.95
 *
 */