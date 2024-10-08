#include <bookStorageApp.hpp>

void bookStorageApp(void)
{
    int option = 0;
    std::vector<Book>* myBookVector = new std::vector<Book>();

    

    do
    {
        system("cls");
         cout << endl <<"Select an option " << endl << "1.Add new Book" << endl << "2. Display all Books" << endl << "3. Exit Program"  << endl;
         cin >> option;


        switch(option)
        {
            case 1:
                /*Call add new book function*/
                addBook(myBookVector); 
                break;
            case 2: 
                /*Call display all books */
                displayBooks(myBookVector);

                system("pause");
                break;
            case 3: 
                cout << "Program ended. " << endl;
                break;
            
            default: 
                cout << "Invalid option " << endl;


        }

    } while (option != 3 );

    
    delete myBookVector;

}


/*Imlementation for adding a new book*/

void addBook(std::vector<Book> *vecBookObjPtr )
{

    string newBookTitle; 
    string newBookAuthor; 
    string newbookISBN;
    system("cls");
    cin.ignore(); // Discard the leftover newline character from previous input

    do
    {
        cout << endl << "Enter book title: " ;
        getline(cin, newBookTitle);

        
    } while (newBookTitle.empty());

    do
    {
        cout << endl << "Enter book author: " ;
        getline(cin, newBookAuthor);

    } while (newBookAuthor.empty());
    
    do
    {
        cout << endl << "Enter book ISBN: " ;
        getline(cin, newbookISBN);

    } while (newbookISBN.empty());
    
    
    Book *bookEntryPtrObj = new Book(newBookTitle,newBookAuthor, newbookISBN);

    vecBookObjPtr->push_back(*bookEntryPtrObj);


    delete bookEntryPtrObj;

}

/*implementation for displaying al the books */
void displayBooks(std::vector<Book> *vecBookObjPtr)
{
    for(int index = 0; index < vecBookObjPtr->size(); index++ )
    {
        
        vecBookObjPtr->at(index).displayBookInfo();
    }
    cout << endl;
}







