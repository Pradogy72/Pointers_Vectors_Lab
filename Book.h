#ifndef POINTERS_VECTORS_LAB_BOOK_H
#define POINTERS_VECTORS_LAB_BOOK_H
#include <__fwd/string.h>
#include <string>

using namespace std;

class Book {
    public:
        Book();
        Book(string title, string author, double price);
        void displayInfo() const;

    private:
        string title;
        string author;
        double price;
};


#endif