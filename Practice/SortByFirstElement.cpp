#include<iostream>
using namespace std;
int main(){
int n;
cout << " Enter the no. Of Pairs" << endl;
cin >> n; 
vector<pair<int, int>> arr(n);
cout << " Enter the First and the Second Element of the Pair"<<endl;
for(int i = 0; i< n; i++)
{
    cin >> arr[i].first >> arr[i].second;
}
sort(arr.begin(), arr.end());
cout<< "The Sorted Order is" << endl;
for(auto &p : arr)
{
    cout << p.first << " "<< p.second<< endl;
}
return 0;
}