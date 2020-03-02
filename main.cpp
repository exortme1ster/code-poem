//
//  main.cpp
//  art151poem
//
//  Created by Никита Мащенко on 2/28/20.
//  Copyright © 2020 Никита Мащенко. All rights reserved.
//
#include <iostream>
using namespace std;

class PayPal {
private:
    bool accounts;
    bool money;
    string name;

public:
    PayPal() {
        accounts = true;
        name  = "Success";
    }

    // Constructor
    PayPal(bool x, string y) {
        accounts = x;
        name  = y;
    }

   
    bool isAccount() {
        return accounts;
    }

    // Return fish's hunger status
    bool isMoney() {
        return money;
    }

    void printName() {
        cout << name;
    }
};

int main() {
    Sell PayPal(true, money == get);    // Create my cute fish, Dennis!

    // Dennis's life is like a loop.
    while(PayPal.Sell()) {
        cout << "I sold my first company " << PayPall.printName() << "!" << endl;

    }
}
