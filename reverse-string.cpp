#include<iostream>
using namespace std;

void swap(char &a , char &b){
    char temp=a;
    a=b;
    b=temp;
}

int main(){
    string str="minakshee";
    int size=str.size();
    int start=0;
    int end=size-1;
    while(start<end){
        swap(str[start++],str[end--]);
    }
    cout<<str;
}