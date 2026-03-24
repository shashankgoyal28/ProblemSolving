#include<iostream>
using namespace std;

int parkingCharges(int noOfHours)
{
    int cost = 0;

    if(noOfHours <= 2)
    {
        cost = noOfHours * 100;
    }
    else if(noOfHours <= 5)
    {
        cost = (2 * 100) + (noOfHours - 2) * 50;
    }
    else
    {
        cost = (2 * 100) + (3 * 50) + (noOfHours - 5) * 20;
    }

    return cost;
}

int main(){
    int hours;
    cin >> hours;

    cout << parkingCharges(hours) << endl;

    return 0;
}