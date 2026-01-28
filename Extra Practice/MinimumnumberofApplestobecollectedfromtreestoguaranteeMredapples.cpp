#include<iostream>
using namespace std;
int minApples(int M, int K, int S, int N, int E, int W)
{
    if(M <= S*K)
    {
        return M;
    }
    else if (M <= S*K + W + E){
        return S*K + (M - S*K) * K;
    }
    else{
        return -1;
    } 
}
int main(){
    int M = 10;
    int K = 15;
    int S = 1;
    int N = 0;
    int E = 0;
    int W = 0;
    cout<<minApples(M, K, S, N, E, W)<<endl;
return 0;
}