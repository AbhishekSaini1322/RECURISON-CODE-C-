#include<iostream>
#include<limits.h>
using namespace std;

void findMinimum(int arr[],int size,int index,int& mini){
    // base case
    if(index >= size){
        return;
    }
    // processing
    mini = min(mini,arr[index]);

    // recursive Call
    findMinimum(arr,size,index+1,mini);
    
}

int main(){
    int arr[] = {10,5,8,9,4,2,10,70};
    int size = 8;
    int index = 0;
    int mini = INT_MAX;
    findMinimum(arr,size,index,mini);
    cout<<"Minmum Number is: "<<mini<<endl;
}