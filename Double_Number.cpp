#include<iostream>
using namespace std;

void doubleNumber(int arr[],int size,int index){
    // base case
    if(index >= size){
        return;
    }
    // processing
    arr[index] = 2 * arr[index];
    // recursive Call
    doubleNumber(arr,size,index+1);
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;

    doubleNumber(arr,size,index);

    for(auto num:arr){
        cout<<num<<" ";
    }
}