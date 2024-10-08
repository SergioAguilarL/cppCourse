#ifndef BOOKSTORAGEAPP_HPP
#define BOOKSTORAGEAPP_HPP


#include "bookClass.hpp"
#include <vector>
#include <cstdlib>



void bookStorageApp(void);
void addBook(std::vector<Book> *vecBookObjPtr ); 
void displayBooks(std::vector<Book> *vecBookObjPtr);



#endif /*BOOKSTORAGEAPP_HPP*/
