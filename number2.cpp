#include <iostream>
using namespace std;

int main()
{
    float numbers[8], sum = 0, mul = 1, avg;

    for (int i = 0; i < 8; i++)
    {
        if (i <= 3)
        {
            cout << "Enter the integer number " << i + 1 << " :";
        }
        else
        {
            cout << "Enter the floating number " << i + 1 << " :";
        }
        cin >> numbers[i];
        sum += numbers[i];
        mul *= numbers[i];
        avg = sum / 8;
    }
    cout << "The sum of numbers :" << sum << endl;
    cout << "The multiplication of numbers :" << mul << endl;
    cout << "The average of numbers :" << avg;
    return 0;
}