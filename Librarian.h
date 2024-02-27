//
// Created by tanya on 26.02.2024.
//

#ifndef UNTITLED4_LIBRARIAN_H
#define UNTITLED4_LIBRARIAN_H
using namespace std;

#include <string>
#include "Book.h"

class Librarian {
private:
    string name;
    int age;

public:
    Librarian(const string& _name, int _age);
    Librarian();
    ~Librarian();

    void getName() const;
    void getAge() const;

    void addBookToLibrary(Book& book);
    void removeBookFromLibrary(Book& book);
};

#endif //UNTITLED4_LIBRARIAN_H