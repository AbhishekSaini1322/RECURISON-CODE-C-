#include<iostream>
#include<vector>
using namespace std;

void printAll_UTIL(vector<int>&nums,int start,int end){
    // base case
    if(end == nums.size()){
        return;
    }
    // one case
    for(int i=start; i<=end; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // RE
    printAll_UTIL(nums,start,end+1);
    // cout<<endl;
}

void printAll(vector<int>&nums){
    for(int start = 0; start<nums.size(); start++){
        int end = start;
        printAll_UTIL(nums,start,end);
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    printAll(nums);
}