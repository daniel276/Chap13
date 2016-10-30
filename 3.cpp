//
// Created by Daniel Juanda on 10/30/2016.
//

#include <iostream>
#include "3.h"
int main(){

    Car BMW (1970, "Mini");
    BMW.accelerate();
    BMW.accelerate();
    BMW.accelerate();
    BMW.accelerate();
    BMW.accelerate();
    cout << "Initial Speed : " << BMW.getSpeed() << endl;
   cout << "Now speed after 5 times acceleration : " <<  BMW.getSpeed() << endl;

    BMW.brake();
    BMW.brake();
    BMW.brake();
    BMW.brake();
    BMW.brake();
    cout << "Speed after 5 times brake : " << BMW.getSpeed() << endl;

}

/* OUTPUT
 * Initial Speed : 25
Now speed after 5 times acceleration : 25
Speed after 5 times brake : 0

 */