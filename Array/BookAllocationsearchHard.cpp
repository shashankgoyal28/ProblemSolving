// Book Allocation Problem
// There are N books, each "i"th book has A[i] number of pages.
// You have to allocate books to M number of students so that 
// the maximum number of pages allocated to a student is minimum.

// Note:
// • Each book should be allocated to a student.
// • Each student has to be allocated at least one book.
// • Allotment should be in contiguous order.

// Calculate and return that minimum possible number.
// Return -1 if a valid assignment is not possible.


#include<iostream>
using namespace std;
// int mid is equivalent to int maxallowedPages
bool isValid(vector<int> arr, int n, int m, int maxallowedPages)
{
int student = 1; // starting with first student
int pages = 0;
for(int i = 0 ; i< n;i++){
    if(pages + arr[i] <= maxallowedPages)
    {
pages += arr[i];
    }
    else{
        student++;
        pages = arr[i];
    }
}
return student > m ? false : true; // if students exceed m return false else true
}

int bookAllocationStep(vector<int> arr, int n, int m)
{
    if(m > n)
    {
        return -1; // not enough books to allocate 
    }
int sum = 0;
for(int i = 0; i<n ;i++)
{
    sum += arr[i];
}
int ans = -1;
int start = 0; 
int end = sum; // this is the range of possible answers 
// 0 to 10 in this case 
while (start <= end){
 int mid = start + (end - start)/2; // potential answer

 if(isValid(arr, n, m, mid))
{//left
ans = mid;
    end = mid - 1; // try to find a better minimum answer 
 }
 else
 {//right 
    start = mid + 1; // increase the potential answer 
 }
}
return ans;
}
int main(){
vector<int> arr = {2,1,3,4};// pages in books 2+1+3+4=10
int n = arr.size(); // number of books 
int m = 2; // number of students
cout<<bookAllocationStep(arr, n, m)<<endl;
return 0;
}