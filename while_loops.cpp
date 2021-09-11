#include<iostream>

using namespace std;

int main() {

    bool advertisement_up = true;
    int stock;

    // While
    /*

    stock = 1;

    while (stock > 0) {

        cout << "Enter Stock: ";
        cin >> stock;
        
        if (stock > 0) {

            cout << endl << "Buy Our Product" << endl << endl;
        }    
    }
    */

   do {
       cout << "Enter Stock: ";
        cin >> stock;
        
        if (stock > 0) {

            cout << endl << "Buy Our Product" << endl << endl;
        }
   } 
   while (stock > 0);
   

   advertisement_up = false;

    cout << "Out Of Stock";

    return 0;
}

