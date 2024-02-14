#include<iostream>
using namespace std;

void findALLoccurance(int arr[],int size,int index,int target){
    // base case
    if(index >= size){
        return;
    }
    // processing
    if(arr[index] == target){
        cout<<index<<" ";
    }
    // RR
    findALLoccurance(arr,size,index+1,target);
}

int main(){
    int arr[] = {10,20,30,40,20,20};
    int size = 6;
    int target = 20;
    int index = 0;

    findALLoccurance(arr,size,index,target);
}