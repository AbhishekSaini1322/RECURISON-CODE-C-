#include<iostream>
using namespace std;

void printDigit(int num){
    // base case 
    if(num == 0) 
     return;
    //  processing
    int digit = num % 10;
    // update
    num = num / 10;

    // RR
    printDigit(num);

    // processing
    cout<<digit<<endl;
}

int main(){
    int num = 4174;
    printDigit(num);
}