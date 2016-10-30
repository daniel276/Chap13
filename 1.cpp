//
// Created by Daniel Juanda on 10/30/2016.
//

#include <iostream>
using namespace std;

class Date{
private:
    int day;
    int month;
    int year;

public:

    void form1(int day, int month, int year);
    void form2(int day, int month, int year);
    void form3(int day, int month, int year);

};

void Date::form1(int day, int month, int year) {
    cout << month << "/" << day << "/" << year << endl;
}

void Date::form2(int day, int month, int year) {
    cout << month << " " << day << ", " << year << endl;
}

void Date::form3(int day, int month, int year) {
    cout << day << " " << month << " " << year;
}


int main(){
    Date show;
    int getDay, getMonth, getYear;
    cout << "Enter Date : ";
    cin >> getDay;

    cout << "Enter Month : ";
    cin >> getMonth;

    cout << "Enter Year : ";
    cin >> getYear;

    show.form1(getDay,getMonth,getYear);
    show.form2(getDay,getMonth,getYear);
    show.form3(getDay,getMonth,getYear);

}
