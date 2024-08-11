#include<iostream>
using namespace std;

bool checkpalin(string str,int size,int start,int end){
   while(start<end){
    if(str[start++]!=str[end--]) return false;
   }
   return true;
}

int main(){
    string str="minakshee";
    int size=str.size();
    int start=0;
    int end=size-1;
    cout<<checkpalin(str,size,start,end);
}