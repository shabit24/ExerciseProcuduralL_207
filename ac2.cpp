#include <iostream>
using namespace std;
int main()
{
    double scoreMath, scoreEnglish;
    float average;
    string name;
    cout << "Enter Score of Mathmatics: ";
    cin >> scoreMath;
    cout << "Enter Score of English: ";
    cin >> scoreEnglish;

    cout << "Enter name of candidate";
    cin >> name;
    average = (scoreMath + scoreEnglish) / 2;
    if (average >= 70 || scoreMath > 80)
    {
        cout << "\nThe candidate is Passed. ";
    }
    else
    {
        cout << "\nThe candidate is Failed. ";
    }

    cout << "Name of candidate: " << name;
    return 0;
}