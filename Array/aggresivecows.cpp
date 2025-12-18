//revise this
#include<iostream>
using namespace std;
bool isValid(int stalls[], int n, int cows, int minDist)
{
    int cowsPlaced = 1; // place first cow in first stall
    int lastPos = stalls[0]; 
    for(int i =1; i<n;i++)
    {
        if(stalls[i] - lastPos >= minDist)
        {
            cowsPlaced++;
            lastPos = stalls[i];
            if(cowsPlaced == cows)
            {
                return true; // successfully placed all cows
            }
        }
    } 
    return false;

}
int aggresiveCows(int stalls[], int n, int cows)
{
    sort(stalls, stalls+n);
    int start = 1;
    int end =stalls[n-1] - stalls[0]; // max possible distance
    int ans = -1;
    while(start <= end)
{
    int mid = start + (end - start)/2;
if(isValid(stalls, n, cows, mid)){
    ans = mid;
    start = mid + 1;
}
else{
        end = mid - 1;
}
}
return ans;
}
int main(){
int stalls[] = {1,2,4,8,9};
int n = 5; // no. of stalls
int cows = 3; // no. of cows
cout << aggresiveCows(stalls, n, cows) << endl;
return 0;
}