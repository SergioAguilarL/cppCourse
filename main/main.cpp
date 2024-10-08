
#include "bookStorageAppAll.hpp"




using namespace std;

int main()
{
    std::cout << "Main Application" << std::endl;

    #ifdef BOOK_STORAGE_APP

        std::cout << "Executiung Book Strorage app " << std::endl;

        bookStorageApp();
    #endif

    return 0; 
}