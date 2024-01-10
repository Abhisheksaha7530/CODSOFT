
//simple calculator


#include<iostream>
using namespace std;

int main(){
    char p;
    float num1,num2;

    cout<<"enter the operator-->(+,-,/,*)";
    cin>>p;
    cout<<"enter the two operands-->";
    cin>>num1;
    cin>>num2;

    switch(p){
        case'+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        case'*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        case'/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
        case'-':
        cout<<num1<<"+"<<num2<<"="<<num1-num2;
        break;

        default:
        cout<<"error";
        break;
    }
    return 0;

}