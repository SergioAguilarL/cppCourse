#include <vectorUtils.hpp>

using namespace std;
void InitVector(std::vector<int> *vectorPtr)
{
    for(int index = 1; index <=10; index++)
    {

        vectorPtr->push_back(index);

    }
}

void displayVector(std::vector<int> *vectorPtr)
{

    cout << "Vector: ";

    for(int index = 0; index < vectorPtr->size(); index++)
    {


        cout << " " <<vectorPtr->at(index) << endl;

    }

}

void vectorPracticeFoo(void )
{
    std::vector<int> *myVector;

    InitVector(myVector);

    displayVector(myVector);

    for(int index = 0; index < myVector->size(); index++)
    {
        if(myVector->at(index) % 2)
        {
            auto pos = myVector->begin() + index;
            myVector->erase(pos);
        }
    }

    displayVector(myVector);




}