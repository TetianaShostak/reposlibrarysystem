//
// Created by tanya on 26.02.2024.
//

#ifndef UNTITLED4_BOOK_H
#define UNTITLED4_BOOK_H
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int yearPublished;

public:
    Book(const string& _title, const string& _author, int _yearPublished);
    Book();
    ~Book();
    void getTitle() const;
    void getAuthor() const;
    void getYearPublished() const;
};


#endif //UNTITLED4_BOOK_H
