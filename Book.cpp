#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() {
    this->title = "";
    this->author = "";
    this->price = -1;
}
Book::Book(string title, string author, double price) {
    this->title = title;
    this->author = author;
    this->price = price;
}
void Book::displayInfo() const {
    cout << "Title: " << this->title << endl;
    cout << "Author: " << this->author << endl;
    cout << "Price: $" << this->price << endl;
}