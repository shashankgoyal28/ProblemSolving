// g++ main.cpp -o main && ./main 
#include<iostream>
using namespace std;
int main(){
int nums[] = {34, 15, 88, 2};
int size = 4;
int smallest = INT_MAX;
for (int i = 0; i < size; i++)
{
    if(nums[i] < smallest)
        {
            smallest = nums[i];
        }
}
cout << "The smallest number in the array is: " << smallest << endl;
return 0;
}
// pass by value 

// Pass by reference 
