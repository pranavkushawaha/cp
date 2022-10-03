#include<iostream>
using namespace std;

int digit(int num){
    if(num==0){
        return 0;
    }
    else{
        return digit(num/10) + num%10;
    }
}

int main(){
    int num;
    cin>>num;
    cout<<digit(num)<<endl;
    return 0;
}