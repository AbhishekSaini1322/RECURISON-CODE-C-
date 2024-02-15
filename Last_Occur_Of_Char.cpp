#include<iostream>
using namespace std;

void findLastOccurLTR(string&str,char target,int index,int&ans){
    // base case 
    if(index < 0){
        return;
    }

    // one case 
    if(str[index] == target){
        ans = index;
        return;
    }

    // Recursive Call
    findLastOccurLTR(str,target,index-1,ans);
}

// void findLastOccurLTR(string&str,char target,int index,int&ans){
//     // base case 
//     if(index >= str.size()){
//         return;
//     }

//     // one case 
//     if(str[index] == target){
//         ans = index;
//     }

//     // Recursive Call
//     findLastOccurLTR(str,target,index+1,ans);
// }

int main(){

    string str;
    cout<<"Enter the value of String: ";
    cin>>str;

    char target;
    cout<<"Enter the value of Target: ";
    cin>>target;

    int index = str.size()-1;
    int ans = -1;

    findLastOccurLTR(str,target,index,ans);

    cout<<ans<<endl;
}
