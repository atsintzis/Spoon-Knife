//
//  main.cpp
//  practice
//
//  Created by Athanasios Tsintzis on 2018-09-28.
//  Copyright © 2018 lund. All rights reserved.
//

// my first program in C++
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
    string mystr;
    float price=0;
    int quantity=0;
    
    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
    return 0;
}

