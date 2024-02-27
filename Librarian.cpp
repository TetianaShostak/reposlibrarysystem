//
// Created by tanya on 26.02.2024.
//
#include "Librarian.h"
#include <iostream>
using namespace std;

Librarian::Librarian(const string& _name, int _age)
        : name(_name), age(_age) {
    cout << "Librarian constructor called." << endl;
}

Librarian::Librarian() : Librarian("Unknown", 0) {}

Librarian::~Librarian() {
    cout << "Librarian destructor called." << endl;
}

void Librarian::getName() const {
    cout << "Librarian Name: " << name << endl;
}

void Librarian::getAge() const {
    cout << "Librarian Age: " << age << endl;
}
void Librarian::addBookToLibrary(Book& book) {
}
void Librarian::removeBookFromLibrary(Book& book) {
}
