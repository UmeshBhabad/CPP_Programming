#include <iostream>
using namespace std;

void Display()                                                  // Function call 
{
    static int iCnt = 1;                                        // Local Variables
    auto i = 1;

    if(iCnt <=3)                                                // Business Logic
    {
        cout << "Jay Ganesh...." << iCnt << " " << i << endl;
        iCnt++;
        i++;

        Display();                                              // Recursive call
    }
}

int main()                                                      // Main method
{
    cout << "Inside Main" << "\n";
    Display();                                                  // Function call
    cout << "End of Main" << "\n";
    return 0;
}