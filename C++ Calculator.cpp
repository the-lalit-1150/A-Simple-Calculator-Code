#include<iostream>
using namespace std;
int main() {
    int num1 , num2 , re ;
    char op ;
    cout<<"Enter First Number: ";
    if(!(cin>>num1)) {
        cout<<"----- Enter Valid Number -----";
        return 1;
    }
    cout<<"Enter Second Number: ";
    if(!(cin>>num2)) {
        cout<<"----- Enter Valid Number -----";
        return 1;
    }
    cout<<"Enter Operator '+ , - , * , /': ";
    cin >> op ;

    switch (op)
    {
    case '+':
    re = num1 + num2;
    cout<<re<<endl;
    break;
    
    case '-':
    re = num1 - num2;
    cout<<re<<endl;
    break;
    
    case '*':
    re = num1 * num2;
    cout<<re<<endl;
    break;
    
    case '/':
    if(num2 != 0){
    re = (float) num1 / num2;
    cout<<re<<endl;
    }
    else{
        cout<<"The Second Should Not Be Zero!"<<endl;
    }
    break;
    
    default:
    cout<<"----- Invalid Operator -----"<<endl;
    
    }
    
    return 0;
}
