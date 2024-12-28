#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int numbers[size];
    // ইনপুট এর জন্য
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << " element of the array :";
        cin >> numbers[i];
    }
    // পুরনো ভ্যালু প্রিন্ট এর জন্য
    cout << "Old values :";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i];
    }
    cout << " Replaced values :";
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            numbers[i] = 0;
        }
        else
        {
            numbers[i] = 1;
        }
        cout << numbers[i];
    }
    return 0;
}