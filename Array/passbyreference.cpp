// this is the example of pass by reference using arrays in c++
// the git push commands:
// git status 
// git add .
// git commit -m "your message"
// git push origin main

#include<iostream>
using namespace std;
void changeArray(int arr[], int size){
    cout<< "function\n";
    for(int i=0; i<size; i++){
        arr[i] = arr[i] * 2;
    }
}
int main(){
int arr[] = {1,2,3};
changeArray(arr,3);
cout<<"main\n";
for (int i=0; i<3; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}