#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {
}
void Inventory::addBook(Book* bookPtr) {
    this->books.push_back(bookPtr);
}
void Inventory::displayAll() const {
    if (this->books.size() == 0) {
        cout << "No books in Inventory." << endl;
    }
    else {
        for (int i = 0; i < this->books.size(); i++) {
            cout << "Book #" << i + 1 << endl;
            this->books.at(i)->displayInfo();
            cout << endl;
        }
    }
}
void Inventory::removeBook(int index) {
    while (index <= 0 || index >= books.size() + 1) {
        cout << "Book # " << index << " does not exist" << endl;
        cout << "Please Enter the # of the book you wish to remove" << endl;
        cin >> index;
    }
    delete books[index -1];
    books.erase(books.begin() + (index -1));
    cout << "Book #" << index << " removed successfully." << endl;
}
Inventory::~Inventory() {
    for (int i = 0; i < this->books.size(); i++) {
        delete this->books.at(i);
        books.clear();
    }
}