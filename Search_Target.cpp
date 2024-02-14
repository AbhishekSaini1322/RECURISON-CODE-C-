#include<iostream>
using namespace std;

bool searchTarget(int arr[],int size,int target,int index){
    // base case
    if(index >= size){
        return false;
    }
    // processing
    if(arr[index] == target){
        return true;
    }
    // recusive Call
    searchTarget(arr,size,target,index+1);
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int target = 500;
    int index = 0;
    int ans = searchTarget(arr,size,target,index);

    if(ans == true){
        cout<<"Target present hai"<<endl;
    }
    else{
        cout<<"Target not Present"<<endl;
    }
}