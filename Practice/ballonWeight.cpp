#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int noOfPeople ;
cout<< " Enter the No. Of People" << endl;
cin >> noOfPeople;

vector<int> WeightOfIndiviualPerson(noOfPeople);
for(int i = 0; i < noOfPeople; i++)
{
    cin >> WeightOfIndiviualPerson[i];
}
int MaximumCapacity;
cin >> MaximumCapacity;

sort(WeightOfIndiviualPerson.begin(), WeightOfIndiviualPerson.end());

int sum = 0;
int count = 0;
for(int i = 0; i < noOfPeople; i++)
{
    if(sum + WeightOfIndiviualPerson[i] <= MaximumCapacity)
    {
        sum += WeightOfIndiviualPerson[i];
        count++;
    }
    else{
        break;
    }
}
cout << count << endl;

return 0;
}