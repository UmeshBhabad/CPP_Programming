// OOP Approach(Specific)

#include <iostream>
using namespace std;

// Logic class
class Arithmetic                            // Class defination
{
    public:
        int No1;                            // Class Variables
        int No2;

    Arithmetic(int A, int B)                // Constructor
    {
        cout << "Inside Character" << endl;
        No1 = A;
        No2 = B;
    }

    int Addition()                          // Function defination
    {
        int Ans = 0;                        // Local Variables

        Ans = No1 + No2;                    // Business Logic

        return Ans;
    }

    int Subtraction()                       // Function defination
    {
        int Ans = 0;                        // Local Variables

        Ans = No1 - No2;                    // Business Logic

        return Ans;
    }
};

int main()                                  // Main method
{
    Arithmetic aobj1(11,10);                // Object Instantiation

    cout << aobj1.Addition()<< "\n";        // Function call
    cout<< aobj1.Subtraction()<<"\n";

    Arithmetic aobj2(101,50);               // Object Instantiation

    cout << aobj2.Addition()<< "\n";        // Function call
    cout<< aobj2.Subtraction()<<"\n";

    return 0;
}