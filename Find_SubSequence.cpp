#include<iostream>
using namespace std;

void findSubSequence(string str,string output,int index){
    // base case
    if(index >= str.length()){
        // yaha answer bulid ho chuka hai
        cout<<"-> "<<output<<endl;
        return;
    }

    char ch = str[index];

    // exclude
    findSubSequence(str,output,index+1);

    // include
    output.push_back(ch);
    findSubSequence(str,output,index+1);
}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    findSubSequence(str,output,index);
}