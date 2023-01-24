//
//  ToCheckIfthePersonsAgeIsYoungOrNot.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//


#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your Age ";
    cin>>age;
    if( age >= 12 && age <= 50) {
        cout<<"The Person's age is young"<<endl;
    }
    else {
        cout<<"The Person's age is not young"<<endl;
    }
    return 0;
}
