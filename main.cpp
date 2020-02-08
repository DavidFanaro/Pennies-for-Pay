#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int IAMOUNT = 2;
    int numDays;
    float dailyS = .01;
    float totalS = 0;

    cout << "Enter the number of days: ";
    while(!(cin >> numDays) || (numDays < 1))
    {
        cout << "error" << endl;
    }
    cout << setprecision(2) << fixed << endl;
    cout << "   Day          Pay" << endl;
    cout << "-----------------------------" << endl;

    for(int i = 0; i < numDays; i++)
    {
        totalS += dailyS;
        cout << "   " << (i + 1) << "           $";
        cout << dailyS << endl;
        dailyS *= IAMOUNT;
    }
    cout << "-----------------------------" << endl;
    cout << "Total $        ";
    cout << totalS << endl;
    cout << endl;
    
    return 0;
}