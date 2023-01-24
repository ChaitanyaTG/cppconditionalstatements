//
//  ToCheckIfaHourisWorkingOrLeisure.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//

#include<iostream>
using namespace std;

int main() {
    int hour;
    cout<<"Enter hour ";
    cin>>hour;
    if(hour >=9 && hour<=18) {
        cout<<"The hour you asked for is working hour "<<hour<<endl;
    }
    else {
        cout<<"The hour you asked for is leisure hour "<<hour<<endl;
    }
    return 0;
}

