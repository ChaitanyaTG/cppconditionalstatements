//
//  ToCheckIfaNumberIsPositiveOrNegative.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 22/01/23.
//


#include<iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter a number ";
    cin>>x;
    if(x >= 0) {
        cout<<"The number is positive "<<x<<endl;
    }
    else {
        cout<<"The number is negative "<<x<<endl;
    }
    return 0;
}
