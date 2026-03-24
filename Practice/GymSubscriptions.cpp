#include<iostream>
using namespace std;
int GymSubs(int Month)
{
    if(Month == 1) return 2000;
    else if(Month == 3) return 5000;
    else if(Month == 6) return 9000;
    else if(Month == 9) return 12000;
    else if(Month == 12) return 15000;
    else return -1;
}
int main(){
    int Month;
    cin >> Month;
    int result = GymSubs(Month);
    if(result == -1)
    {
        cout<< "Invalid Input"<< endl;
    }
else{
    cout<< result<< endl;
}
return 0;
}