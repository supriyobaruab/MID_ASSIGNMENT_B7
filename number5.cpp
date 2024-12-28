#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of your name :";
    cin >> size;
    char arr1[size];
    // taking input
    for (int i = 0; i < size; i++)
    {
        cout << "Element number " << i + 1 << ":";
        cin >> arr1[i];
    }
    // checking the vowels
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != 'a' && arr1[i] != 'e' && arr1[i] != 'i' &&
            arr1[i] != 'o' && arr1[i] != 'u')
        {
            arr1[i] = '\0';
        }
        cout << arr1[i];
    }
    return 0;
}