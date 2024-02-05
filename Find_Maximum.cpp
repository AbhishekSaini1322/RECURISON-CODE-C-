#include<iostream>
#include<limits.h>
using namespace std;

void findMaximum(int arr[],int size,int index,int& maxi){
    // base case
    if(index >= size){
        return;
    }

    // processing
    maxi = max(maxi,arr[index]);

    // Recurive Call
    findMaximum(arr,size,index+1,maxi);
}

int main(){
    int arr[] = {10,20,555,8,177};
    int size = 5;
    int maxi = INT_MIN;
    int index = 0;

    findMaximum(arr,size,index,maxi);

    cout<<maxi<<endl;
}