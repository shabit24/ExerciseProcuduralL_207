#include <iostream>
using namespace std;
int main()
{
    int count1 = 0;
    int count2 = 0;
    double scoreMath;
    float average;
    for (int i = 0; i < 20; i++)
    {
        cout << " Enter Score of Mathmatics ";
        cin >> scoreMath;
        cout << " Enter Score of average ";
        cin >> average;
    }

    if (average > 70 || scoreMath > 80)
    {
        count1 = count1++;
        cout << "The number of passed students: " << count1;
    }
    else
    {
        count2 = count2++;
        cout << "The number of failed students: " << count2;
    }

    return 0;
}
