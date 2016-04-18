#include "eecs230.h"

struct Date {

    //member variables
    int year;
    int month;
    int day;
    bool isAD;

    //constructor
    Date(int y, int m, int d, bool AD)
    {
        year = y;
        month = m;
        day = d;
        isAD = AD;
    };

};

int main()
try
{
    Date today(2016,4,20,true);
    cout << "It is the " << today.day << "th day of the month.\n";
}

catch (runtime_error& e) {
    cerr << "Caught in main: " << e.what() << "\n";
    exit(1);
}