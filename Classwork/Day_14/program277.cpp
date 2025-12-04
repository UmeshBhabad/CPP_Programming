// OOPs Approach

#include <iostream>
using namespace std;

// Logic class
class Arithmetic                                // Class defination
{
    public:
        int No1;                                // Class Variables(Members)
        int No2;

    Arithmetic(int A, int B)                    // Constructor
    {
        cout << "Inside Constructor" << endl;
        No1 = A;
        No2 = B;
    }

    int Addition()                              // Function defination
    {
        int Ans = 0;                            // Local Variables

        Ans = No1 + No2;                        // Business Logic

        return Ans;
    }

    int Subtraction()                           // Function defination
    {
        int Ans = 0;                            // Local Variables

        Ans = No1 - No2;                        // Business Logic

        return Ans;
    }
};

int main()                                      // Main method
{
    Arithmetic aobj(11,10);                     // Object Instantiation

    cout << aobj.Addition()<< "\n";             // Function call

    cout<< aobj.Subtraction()<<"\n";            // Function call

    return 0;
}