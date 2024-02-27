//
// Created by tanya on 27.02.2024.
//
#include "User.h"
#include <iostream>

User::User(const string& _name, int _age)
        : name(_name), age(_age) {
    cout << "User constructor called." << endl;
}

User::User() : User("Unknown", 0) {}
//deligation
User::~User() {
    cout << "User destructor called." << endl;
}

void User::getName() const {
    cout << "User Name: " << name << endl;
}

void User::getAge() const {
    cout << "User Age: " << age << endl;
}

void User::borrowBook(const Book& book) {
    borrowedBooks.push_back(book);
}
