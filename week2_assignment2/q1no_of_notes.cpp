#include <iostream>
using namespace std;
int main()
{
    int amount;
    int no_of_notes = 0;
    cout << "enter amount";
    cin >> amount;
    if (amount >= 2000)
    {
        no_of_notes = amount / 2000;
        cout << "no of 2000 note:"
             << " " << no_of_notes;
        amount = amount - (no_of_notes * 2000);
    }
    if (amount >= 500)
    {
        no_of_notes = amount / 500;
        cout << "no of 500 note:"
             << " " << no_of_notes;
        amount = amount - (no_of_notes * 500);
    }
    if (amount >= 100)
    {
        no_of_notes = amount / 100;
        cout << "no of 100 note:"
             << " " << no_of_notes;
        amount = amount - (no_of_notes * 100);
    }
    if (amount >= 50)
    {
        no_of_notes = amount / 50;
        cout << "no of 50 note:"
             << " " << no_of_notes;
        amount = amount - (no_of_notes * 50);
    }
    if (amount >= 20)
    {
        no_of_notes = amount / 20;
        cout << "no of 20 note:"
             << " " << no_of_notes;
        amount = amount - (no_of_notes * 20);
    }
    if (amount >= 10)
    {
        no_of_notes = amount / 10;
        cout << "no of 10 note:"
             << " " << no_of_notes;
        amount = amount - (no_of_notes * 10);
    }
    if (amount >= 5)
    {
        no_of_notes = amount / 5;
        cout << "no of 5 note:"
             << " " << no_of_notes;
        amount = amount - (no_of_notes * 5);
    }
}