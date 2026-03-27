#include <iostream>
using namespace std;

template <class T>                                                                  // Template Defination
class Arithematic
{
    public:
        T No1;                                                                      // Member variable Declaration
        T No2;

        Arithematic(T A, T B);                                                      // Parameterized Constructor
        T Addition();                                                               // Function Defination
        T Substraction();                                                           // Function Defination
};

template <class T>
Arithematic <T>:: Arithematic(T A, T B)                                             // Constructor
{
    No1 = A;                                                                        // Assigning Values
    No2 = B;
}

template <class T>
T Arithematic <T> :: Addition()                                                     // Function Defination
{
    T Ans;
    Ans = No1 + No2;                                                                // Logic
    return Ans;
}

template <class T>
T Arithematic <T>:: Substraction()                                                  // Function Defination
{
    T Ans;
    Ans = No1 - No2;                                                                // Logic
    return Ans;
}

int main()                                                                          // Main Method
{
    // Arithematic <int> iobj(11,10);

    Arithematic <int> *iobj = new Arithematic <int> (11,10);                        // Object Instanitation

    cout << "Addition is : " << iobj -> Addition() << "\n";
    cout << "Substraction is : " << iobj -> Substraction() << "\n";

    // Arithematic <double> dobj(11.8967,10.4567);

    Arithematic <double> *dobj = new Arithematic <double>(11.8967,10.4567);         // Object Instanitation

    cout << "Addition is : " << dobj -> Addition() << "\n";
    cout << "Substraction is : " << dobj -> Substraction() << "\n";

    delete iobj;                                                                    // Deallocate Memory
    delete dobj;                                                                    // Deallocate Memory

    return 0;
}