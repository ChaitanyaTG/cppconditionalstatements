//
//  ToCheckIfYouAreEligibleOrNot.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//


#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter Age ";
    cin>>age;
    if (age < 12 || age > 50) {
        cout<<"You are Eligible "<<endl;
    }
    else {
        cout<<"You are not Eligible "<<endl;
    }
    return 0;
}
