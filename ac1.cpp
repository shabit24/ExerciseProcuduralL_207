#include <iostream>
using namespace std;
int main()
{
    double scoreMath, scoreEnglish;
    float average;
    cout << "Enter Score of Mathmatics: ";
    cin >> scoreMath;
    cout << "Enter Score of English: ";
    cin >> scoreEnglish;
    average = (scoreMath + scoreEnglish) / 2;
    if (average >= 70 || scoreMath > 80)
    {
        cout << " The candidate is Passed";
    }
    else
    {
        cout << "The candidate is Failed";
    }
    return 0;
}