#include <iostream>
using namespace std;

// Logic class
class Arithematic
{
    private:
        int iNo1, iNo2;                                                 // Members Declaration

    public:
        Arithematic(int A, int B)                                       // Parameterised Constructor
        {
            this -> iNo1 = A;                                           // Assigning Values
            this -> iNo2 = B;
        }

        int Addition()                                                  // Function defination
        {
            return iNo1 + iNo2;                                         // Business Logic
        }

        int Substraction()                                              // Function Defination
        {
            return iNo1 - iNo2;                                         // Business Logic
        }
};

int main()                                                              // Main method
{
    Arithematic obj(11,10);                                             // Static Object Instantiation

    cout << "Addition is : "<< obj.Addition()<<"\n";                    // Display Output
    
    cout << "Substraction is : "<< obj.Substraction()<<"\n";            // Display Output

    return 0;
}