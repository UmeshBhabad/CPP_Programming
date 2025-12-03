#include <iostream>
using namespace std;

void Display()
{
    cout << "Jay Ganesh...." << endl;
    Display();
}

int main()
{
    Display();

    return 0;
}