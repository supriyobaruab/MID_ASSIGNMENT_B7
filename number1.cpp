#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array you want to use :";
    cin >> size;
    char arr1[size];
    char arr2[size];

    // অ্যারে ইনপুট
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << " :";
        cin >> arr1[i];
    }
    // রিভার্স অ্যারে
    for (int j = 0; j < size; j++)
    {
        arr2[j] = arr1[size - j - 1];
    }

    // প্রিন্ট অ্যারে

    for (int i = 0; i < size; i++)
    {
        cout << arr2[i];
    }

    cout << "\n\n";

    // প্যাঁলিনন্ড্রোম চেক
    int check = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            check = 1;
        }
    }

    if (check == 0)
    {
        cout << "Palindrone";
    }
    else
    {
        cout << "Not Palindrone";
    }
    return 0;
}
