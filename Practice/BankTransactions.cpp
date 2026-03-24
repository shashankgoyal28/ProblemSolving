#include<iostream>
#include<string>
using namespace std;
struct Transactions{
    string sender, receiver;
    double amount;
    long long time;
};
int main(){
    int n; 
    cin >> n;
    vector<Transactions> t(n);

    for(int i = 0; i< n ; i++)
    {
        cin>>t[i].sender>>t[i].receiver>>t[i].amount>>t[i].time;
    }
    vector<bool> fraud(n,false);
    for(int i = 0; i < n ; i++)
    {
        for(int j = i + 1; j< n;j++ )
        {
            if(t[i].sender  == t[j].sender && t[i].receiver  == t[j].receiver &&
            t[i].amount  == t[j].amount && abs (t[i].time - t[j].time) <= 60)
            {
                fraud[i] = true;
                fraud[j] = true;
            }
        }
    }
    // Printing all Fraud Transactions 
    cout<< "Fraud Transactions"<< endl;
    for(int i = 0; i < n;i++){
        if(fraud[i]){
            cout<<t[i].sender<<" "<<t[i].receiver<<" "<< t[i].amount<<" "<<t[i].time<<endl;
        }
    }

return 0;
}