#include <iostream>
using namespace std;

template <class T>                                                  // Template Defination
class Arithematic                                                   // Logic class
{
    public:
        T No1;                                                      // Members Declaration
        T No2;

        Arithematic(T A, T B)                                       // Constructor
        {
            No1 = A;                                                // Assigning values
            No2 = B;
        }

        T Addition()                                                // Function Defination
        {
            T Ans;
            Ans = No1 + No2;                                        // Logic
            return Ans;
        }

        T Substraction()                                            // Function Defination
        {
            T Ans;
            Ans = No1 - No2;                                        // Logic
            return Ans;
        }
};


int main()                                                          // Main Method
{
    Arithematic <int> iobj(11,10);                                  // Object Instantiation

    cout << "Addition is : " << iobj.Addition() << "\n";            // Display Addition

    cout << "Substraction is : " << iobj.Substraction() << "\n";    // Display Substraction

    Arithematic <double> dobj(11.8967,10.4567);                     // Object Instantiation

    cout << "Addition is : " << dobj.Addition() << "\n";            // Display Addition
    
    cout << "Substraction is : " << dobj.Substraction() << "\n";    // Display Substraction

    return 0;
}