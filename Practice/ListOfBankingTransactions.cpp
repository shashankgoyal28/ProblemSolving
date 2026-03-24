#include<iostream>
#include<vector>
using namespace std;

struct Trnx {
    string Name;
    double Amount;
    long long time;
};

int main(){
    int n;
    cin >> n;

    vector<Trnx> t(n);

    for(int i = 0; i < n; i++)
    {
        cin >> t[i].Name >> t[i].Amount >> t[i].time;
    }

    vector<bool> Flagged(n, false);

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(t[i].Name == t[j].Name && t[i].Amount == t[j].Amount)
            {
                Flagged[j] = true; 
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(Flagged[i]) {
            cout << t[i].Name << " " << t[i].Amount << " " << t[i].time << endl;
        }
    }

    return 0;
}