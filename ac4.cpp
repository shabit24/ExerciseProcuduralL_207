#include <iostream>
using namespace std;

double average(double a, double b)
{
    return (a + b) / 2;
}

string status(double r, double n)
{
    if (r >= 70 || n > 80)
        return "pass";
    else
        return "failed";
}

int main()
{
    double scoreMath, scoreEnglish;
    float average;
    cout << "Enter Score of Mathmatics: ";
    cin >> scoreMath;
    cout << "Enter Score of English: ";
    cin >> scoreEnglish;

    cout << "status of candidate " << status((scoreMath, scoreEnglish), scoreMath) << endl;
}