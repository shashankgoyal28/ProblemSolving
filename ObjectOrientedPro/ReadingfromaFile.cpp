#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   // ofstream hout("sample60.txt");
    //cout<<"input the name "<<endl;//this has no relation with the file 
    //string name;
    //cin>>name;//this has no reltion with the file

    //hout<<name; 
    
    //hout.close();

    ifstream hin("sample60.txt");
    string content ;
    getline(hin,content);
     cout<<"the data in content is given by"<<endl<<content<<endl;
    return 0;
}