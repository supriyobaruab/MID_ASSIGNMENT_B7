#include <iostream>
using namespace std;

int main()
{
    float multiply[6];
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    float arr2[6] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5};

    for (int i = 0; i < 6; i++)
    {
        multiply[i] = arr1[i] * arr2[6 - i - 1];
        cout << "Multiplied values :" << multiply[i] << endl;
    }
    return 0;
}