//
//  ToCheckIfaNumberIsEvenOrOdd.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 22/01/23.
//

//If statement only answers true statements and else statement answers false statement
#include<iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter a number ";
    cin>>x;
    if(x % 2 == 0) {
        cout<<"The number provided is even "<<endl;
    }
    else {
        cout<<"The number provided is odd "<<endl;
    }
    return 0;
}
