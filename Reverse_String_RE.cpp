#include<iostream>
using namespace std;

// -------------TIME COMPLEXITY = O(N)------------
// -------------SPACE COMPLEXITY = O(N)-----------

void reverseString(string&str,int start,int end){
    // base case
    if(start >= end){
        return;
    }
    // one case
    swap(str[start],str[end]);
    // RE
    reverseString(str,start+1,end-1);
}

int main(){
    string str;
    cout<<"Enter the value: ";
    cin>>str;
    int start = 0;
    int end = str.size()-1;
    reverseString(str,start,end);
    cout<<str<<endl;
}