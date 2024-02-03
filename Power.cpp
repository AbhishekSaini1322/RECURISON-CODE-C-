#include<iostream>
using namespace std;

int Findpower(int n, int power){
    // base case 
    if(n == 0){
        return 1;
    }

    // RR
    int ans = power * Findpower(n-1);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;

    int power;
    cout<<"Enter the value of power: ";
    cin>>power;

    cout<<"Power of n is: "<<Findpower(power,n);
}