#include<iostream>
#include<vector>
using namespace std;

void findEven(int arr[],int size,int index,vector<int>&ans){
    // base case
    if(index >= size){
        return;
    }
    // processing
    if(arr[index] % 2 == 0){
        ans.push_back(arr[index]);
    }
    // RR
    findEven(arr,size,index+1,ans);
}

int main(){
    int arr[] = {10,7,30,11,9};
    int size = 5;
    int index = 0;
    vector<int>ans;

    findEven(arr,size,index,ans);

    for(auto num:ans){
        cout<<num<<" ";
    }
}