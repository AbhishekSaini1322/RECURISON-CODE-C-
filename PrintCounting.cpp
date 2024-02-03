#include<iostream>
using namespace std;

// ---------------- ye tail recurison hai ---------------------
// ---ager counting increasing order me print krte to usse HEAD recurison bolte 
//    increasing order me print krane k liye processing recusive call k baad hoti ----------

void Print(int n){
    // base case
    if(n == 0){
        return;
    }
    
    // Proessing
    cout<<n<<" ";

    // Recurisve Call
    Print(n-1);

}

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    Print(n);
   

}