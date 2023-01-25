//
//  ToDisplayMonthNumber.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 24/01/23.
//

#include<iostream>
using namespace std;

int main() {
    int month;
    cout<<"Enter month number ";
    cin>>month;
    if (month == 1) {
        cout<<"The month is January!"<<endl;
    }
    else {
        if (month == 2) {
            cout<<"The month is February!"<<endl;
        }
        else {
            if (month == 3) {
                cout<<"The month is March!"<<endl;
            }
            else {
                if (month == 4) {
                    cout<<"The month is April!"<<endl;
                }
                else {
                    if (month == 5) {
                        cout<<"The month is May!"<<endl;
                    }
                    else {
                        if (month == 6) {
                            cout<<"The month is June!"<<endl;
                        }
                        else {
                            if (month == 7) {
                                cout<<"The month is July!"<<endl;
                            }
                            else {
                                if (month == 8) {
                                    cout<<"The month is August!"<<endl;
                                }
                                else {
                                    if (month == 9) {
                                        cout<<"The month is September!"<<endl;
                                    }
                                    else {
                                        if (month == 10) {
                                            cout<<"The month is October!"<<endl;
                                        }
                                        else {
                                            if (month == 11) {
                                                cout<<"The month is November!"<<endl;
                                            }
                                            else {
                                                if (month == 12) {
                                                    cout<<"The month is December!"<<endl;
                                                }
                                                else {
                                                    if (month > 12) {
                                                        cout<<"The entered month is invalid."<<endl;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
