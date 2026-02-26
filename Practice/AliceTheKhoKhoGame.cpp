#include<iostream>
#include<vector>
using namespace std;
int AliceKhoKho(vector<int> players)
{
    int count = 0;
    int key = players[0];
    for(int i = 0; i < players.size(); i++){
        if(players[i] != key)
        {
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> players = {1, 2, 3, 2, 2};
    cout <<"The no. of Players Misunderstood the No. were " << AliceKhoKho(players) << endl;
}