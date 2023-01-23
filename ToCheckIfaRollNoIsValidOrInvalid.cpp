//
//  ToCheckIfaRollNoIsValidOrInvalid.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 22/01/23.
//


#include<iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter a Roll number ";
    cin>>x;
    if (x < 1){
        cout<<"The roll number provided is invalid"<<endl;
    }
    else {
        cout<<"The roll number provided is valid"<<endl;
    }
    return 0;
}
