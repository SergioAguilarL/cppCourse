#include <bookClass.hpp>


/*The porpuse of this file is to implement book class method definition */

/*Contructor & destructor */

Book::Book(string title, string author, string bookNumber) : bookTitle(title), bookAuthor(author), bookISBN(bookNumber)
{

}

Book::~Book()
{
    
}
/*Getters*/
string Book::getBookTitle(void)
{
    return bookTitle;
}

string Book::getBookAuthor(void)
{
    return bookAuthor;
}
string Book::getISBN(void)
{
    return bookISBN;

}

/*setters*/
void Book::setBookTitle(string title)
{
    bookTitle = title; 
}

void Book::setBookAuthor(string author)
{
    bookAuthor = author;
}

void Book::setISBN(string bookNumber)
{
    bookISBN = bookNumber;
}


void Book::displayBookInfo(void)
{

    cout << endl << "Book Info " << endl << "Title: " << bookTitle << " Author: " << bookAuthor << " ISBN: " << bookISBN;

}
