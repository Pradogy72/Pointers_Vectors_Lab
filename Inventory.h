#ifndef POINTERS_VECTORS_LAB_INVENTORY_H
#define POINTERS_VECTORS_LAB_INVENTORY_H
#include "Book.h"
#include <vector>

using namespace std;

class Inventory {
    public:
        Inventory();
        void addBook(Book* bookPtr);
        void displayAll() const;
        void removeBook(int index);
        ~Inventory();

    private:
        vector<Book*> books;
};


#endif