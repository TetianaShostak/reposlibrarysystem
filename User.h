//
// Created by tanya on 27.02.2024.
//

#ifndef UNTITLED4_USER_H
#define UNTITLED4_USER_H
#include <string>
#include <vector>
#include "Book.h"

class User {
private:
    string name;
    int age;
    vector<Book> borrowedBooks;

public:
    User(const string& _name, int _age);
    User();
    ~User();
    void getName() const;
    void getAge() const;
    void borrowBook(const Book& book);
};

#endif //UNTITLED4_USER_H
