#include <iostream>
#include <fstream>
#include "Bonappetit Functions.h"

using namespace std;

void menu() {
    int choice;
    cout << "ARE YOU A CUSTOMER OR AN ADMIN?" << endl
         << "Enter 0 if you are a customer and press 1 if you are an admin " << endl;
    cin >> choice;
    if (choice == 0) {
        customer();
    }
//    else if (choice == 1) {
//        admin();
//    }
}

int main() {
    cout << "Welcome to Bonappetit" << endl;
    menu();
}

