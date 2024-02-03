#include<iostream>
using namespace std;

int Factroial(int n){
    // base case
    if(n == 0 || n == 1){
        return 1;
    }

    // Recurisve Call
    int RecKaAns = Factroial(n-1);

    // Processing
    int FinalAns = n * RecKaAns;

    return FinalAns;
}


int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Factorial is: "<<Factroial(n);
}