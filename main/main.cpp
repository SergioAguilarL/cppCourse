
#ifdef BOOK_STORAGE_APP
#include "bookStorageAppAll.hpp"
#endif

#ifdef BANK_ACCNT_APP
#include "bankAccountAppAll.hpp"
#endif

#ifdef STL_APP
#include "STLApp.hpp"
#endif






using namespace std;

int main()
{
    std::cout << "Main Application" << std::endl;

    #ifdef BOOK_STORAGE_APP

        std::cout << "Executing Book Strorage app " << std::endl;

        bookStorageApp();
    #endif

    #ifdef BANK_ACCNT_APP

        std::cout << "Executing bank account app " << std::endl;

        bankAccntApp();
    #endif

    #ifdef STL_APP

        std::cout << "Executing STL account app " << std::endl;

        STLApp();
    #endif

    return 0; 
}