#include <iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;
    auto i = 1;

    if(iCnt <=3)
    {
        cout << "Jay Ganesh...." << iCnt << " " << i << endl;
        iCnt++;
        i++;
        Display();
    }
}

int main()
{
    cout << "Inside Main" << "\n";
    Display();
    cout << "End of Main" << "\n";
    return 0;
}