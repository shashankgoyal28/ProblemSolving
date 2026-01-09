// Celebrity Problem
// Given a 2D array (n x n), such that arr[i][j] = 1 means ith person knows jth person, the task is to find the
// celebrity.
// A celebrity is a person who is known to all but does not know anyone.
// Return the index of the celebrity, if there is no celebrity return -1.
// Inferences to be drawn:
// 1. If person A knows person B, then A cannot be a celebrity.
// 2. If person A does not know person B, then B cannot be a celebrity
// i.e, arr[i][celeb] = 1
// arr[celeb][i] != 1

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int getCelebrity(vector<vector<int>> &arr){
    int n = arr.size();
    stack<int> s;

    for(int i =0; i < n;i++)
    {
        s.push(i);
    }
    while(s.size() > 1){
        int i = s.top();
        s.pop();

        int j = s.top();
        s.pop();

        if(arr[i][j] == 0){
            s.push(i); 
        }
        else 
        {
            s.push(j); 
        }
    }
    int celeb = s.top();
     
    for(int i = 0; i < n; i++){
        if(i != celeb){
            if(arr[i][celeb] == 0 || arr[celeb][i] == 1){
                return -1;
            }
        }
    }
    return celeb;

}
int main(){
vector<vector<int>> arr = {
    {0, 1, 0},
    {0, 0, 0},
    {0, 1, 0}
};
int ans = getCelebrity(arr);
cout << "The celebrity is at index: " << ans << endl;
return 0;
}