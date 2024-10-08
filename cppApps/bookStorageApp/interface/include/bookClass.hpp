#ifndef BOOKCLASS_HPP
#define BOOKCLASS_HPP

#include <iostream>
using namespace std;

class Book
{

    public: 
        /*Constructor & destructor declaretion for Book class */

        Book(string title, string author, string bookNumber);

        ~Book();

        /*Method declaration for Book class*/

        /*getters*/
        
        string getBookTitle(void);
        string getBookAuthor(void);
        string getISBN(void);

        /*setters*/

        void setBookTitle(string title);
        void setBookAuthor(string author);
        void setISBN(string bookNumber);


        void displayBookInfo(void);

    private: 

        string bookTitle; 
        string bookAuthor; 
        string bookISBN;

};

#endif /*BOOKCLASS_HPP */