#include <iostream>
using namespace std;

void Display()                                  // Function defination
{
    int iCnt = 0;                               // Local Variable

    iCnt = 1;
    while(iCnt <=4)                             // Business Logic(while Loop)
    {
        cout << "Jay Ganesh...." << endl;
        iCnt++;
    }
}

int main()                                      // Main Method
{
    Display();                                  // Function call

    return 0;
}