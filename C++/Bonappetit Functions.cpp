//
// Created by HP on 01/11/2023.
//

#include "Bonappetit Functions.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displaymenu() {
    string readmenu[10];

    ifstream menu;

    menu.open("Cakemenu.txt");

    if (!menu.is_open()) {
        cout << "FILE NOT OPEN!!" << endl;
    }
    while (!menu.eof()) {
        for (int i = 0; i < 10; i++) {
            getline(menu, readmenu[i]);

        }
    }

    menu.close();
    for (int i = 0; i < 10; i++) {
        cout << readmenu[i] << endl;
    }

}

void displayprice() {
    string pricedescription[5];
    ifstream pricedes;
    pricedes.open("Cakepricedes.txt");
    if (!pricedes.is_open()) {
        cout << "FILE NOT OPEN!!" << endl;
    }
    while (!pricedes.eof()) {
        for (int i = 0; i < 10; i++) {
            getline(pricedes, pricedescription[i]);
        }
    }
    pricedes.close();
    for (int i = 0; i < 5; i++) {
        cout << pricedescription[i] << endl;
    }
}


void customer() {
    string menu[10];
    int prices;
    cout << "* MENU *" << endl << "* FLAVOURS *"<<endl;
    displaymenu();
    cout<<endl<<"-----"<<endl<<endl;
    displayprice();

}