//
// Created by HP on 01/11/2023.
//

#include "Bonappetit Functions.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

    struct Menu {
    string flavor;
      string price;
};
void alsoadmin(int &N) {
    cout << "Enter total number of cakes available in the menu: " << endl;
    cin >> N;
}

void admin() {
    int N;
    alsoadmin(N); // Call the alsoadmin function to modify the value of N

    cin.ignore();
    Menu M[N]; // Declare an array of Menu objects

    for (int i = 0; i < N; i++) {
        cout << "Enter flavor of cake " << i + 1 << ": " << endl;
        cin.ignore(); // Ignore the newline character left in the input buffer
        getline(cin, M[i].flavor);
        for (int j = 0; j < 4; j++) {
            cout << "Enter price for " << j + 1 << " pound weight: "<<endl;
            cin >> M[i].price;
        }
    }


 ofstream saving("Cakepricedes.txt");
    ofstream seving("Cakemenu.txt");
    if(seving.is_open()){
        seving<<"Flavor: "<<endl; 
        for(int k=0; k<N; k++){
            seving << M[k].flavor << endl;
            for(int k=0;k<N;k++){
                saving << "Price for " << k + 1 << " pound weight: "<<endl<< M[k].price << endl;
            }
        }
        }
}

void displaymenu() {
    int N;
     alsoadmin(N);

    string *readmenu=new string[N];

    ifstream menu;

    menu.open("Cakemenu.txt");

    if (!menu.is_open()) {
        cout << "FILE NOT OPEN!!" << endl;
    }
    while (!menu.eof()) {
        for (int i = 0; i < N; i++) {
            getline(menu, readmenu[i]);

        }
    }

    menu.close();
    for (int i = 0; i < N; i++) {
        cout << readmenu[i] << endl;
    }

}
void displayprice() {
     int N;
     alsoadmin(N);
    string pricedescription[4];
    ifstream pricedes;
    pricedes.open("Cakepricedes.txt");
    if (!pricedes.is_open()) {
        cout << "FILE NOT OPEN!!" << endl;
    }
    while (!pricedes.eof()) {
        for (int i = 0; i < N; i++) {
            getline(pricedes, pricedescription[i]);
        }
    }
    pricedes.close();
    for (int i = 0; i < N; i++) {
        cout << pricedescription[i] << endl;
    } 
}

void customer() {
    string menu[10];
    int prices;
    cout << "* MENU *" << endl << "* FLAVOURS *"<<endl;
    displaymenu();
    cout<<endl<<"-----"<<endl<<endl;
    //displayprice();

}
