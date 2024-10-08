
#ifdef BOOK_STORAGE_APP
#include "bookStorageAppAll.hpp"
#endif

#ifdef BANK_ACCNT_APP
#include "bankAccountAppAll.hpp"
#endif






using namespace std;

int main()
{
    std::cout << "Main Application" << std::endl;

    #ifdef BOOK_STORAGE_APP

        std::cout << "Executiung Book Strorage app " << std::endl;

        bookStorageApp();
    #endif

    #ifdef BANK_ACCNT_APP

        std::cout << "Executiung Book Strorage app " << std::endl;

        bankAccntApp();
    #endif

    return 0; 
}