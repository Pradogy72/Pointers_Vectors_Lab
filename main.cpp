/* Name: Miguel Angel Prado
* Date: 11/09/2026
 * Purpose: Use a class to manage an inventory of book objects and managing dynamic memory to free up space when objects are out of scope
 * Assignment: Lab Activities: Pointers
 */
#include <iostream>
#include "Inventory.h"
using namespace std;

void DisplayScreen() { //displays a meny, handles input validaiton and uses do-while switch casees to complete various actions until user quits
    int choice;
    Inventory store;
    do {
        cout << "Please select an option" << endl;
        cout << "1. Add New Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Remove Book" << endl;
        cout << "4. Quit" << endl;

        cin >> choice;
        cin.ignore();
        while (choice < 1 || choice > 4 ) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input, option must be 1-4, please try again" << endl;
            cin >> choice;
        }
        switch (choice) {
            case 1: { // takes inputs and creates a book object and stores a pointer to the object in a vector of bookptrs which resides in the Inventory class
                string title;
                string author;
                double price;
                cout << "Creating new book" <<  endl;
                cout << "Please Enter a Book's Title" << endl;
                getline(cin, title);
                cout << "Please enter Author's Name" << endl;
                getline(cin, author);
                cout << "Please Enter Book's Price" << endl;
                cin >> price;
                cin.ignore();
                while ((price <= 0) || cin.fail()) {
                    if ( cin.fail() ) {
                        cin.clear();
                        cin.ignore();
                    }
                    cout << "Invalid input, Price must be > 0, please try again" << endl;
                    cin >> price;
                }
                store.addBook(new Book(title, author, price));
                break;
            }
            case 2: { //displays all books in inventory
                store.displayAll();
                break;
            }
            case 3: { // removes a book from inventory
                int index;
                cout << "Removing book" << endl;
                cout << "Please Enter the # of the book you wish to remove" << endl;
                cin >> index;
                store.removeBook(index);
                break;
            }
            case 4: //quits the program
                cout << "Quitting" << endl;
                break;
        }
    }while (choice != 4);
}

int main() {
        DisplayScreen();
    return 0;
}