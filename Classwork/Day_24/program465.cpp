#include <iostream>
using namespace std;

// Logic class
class Arithematic
{
    public:                                                         // Class member variables declaration
        int No1;
        int No2;

        Arithematic(int A, int B)                                   // Parameterized Constructor
        {
            No1 = A;                                                // Assigning values
            No2 = B;
        }

        int Addition()                                              // Function Defination
        {
            int Ans;                                                // Local Variable

            Ans = No1 + No2;                                        // Business logic
            
            return Ans;
        }

        int Substraction()                                          // Function defination
        {
            int Ans;                                                // Local Variable

            Ans = No1 - No2;                                        // Logic

            return Ans;
        }
};

int main()
{
    Arithematic *obj = new Arithematic(11,10);                      // Dynamic Object Instantiation

    cout << "Addition is : " << obj -> Addition() << "\n";          // Function call

    cout << "Substraction is : " << obj -> Substraction() << "\n";  // Function call 

    delete obj;                                                     // Deallocate memory

    return 0;
}