#include<iostream>
using namespace std;

int FoundTarget(int arr[],int size,int target,int index){
    // base case
    if(index >= size){
        return -1;
    }
    // processing
    if(arr[index] == target){
        return index;
    }
    // RR
    FoundTarget(arr,size,target,index+1);
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int target = 50;
    int index = 0;

    cout<<"Target found at index: "<<FoundTarget(arr,size,target,index);
}