#include <iostream>
#include <algorithm>
using namespace std;

void great(int arr[], int size)
{
    sort(arr, arr + size);
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int number = arr[i];
            count++;
            int h = i + 2;
            if (h <= size && arr[i] != arr[i + 2])
            {
                cout << number << " exists " << count << " times!" << endl;
            }
        }
        else
        {
            count = 1;
        }
    }
}

int main()
{
    // int size;
    // cout << "enter the size of array: " << endl;
    // cin >> size;
    // int arr[size];

    int arr[10] = {3, 3, 6, 8, 3, 8, 3, 8, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    great(arr, size);

    // cout << "enter element : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + n); //
    // int count=1;
    // int maj=0;
    // for (int i = 0; i < size; i++)
    // {
    //     arr[i] == arr[i + 1];
    //    int  maj = arr[i];
    //     // count++;
    // }
    // cout << "count " << count;
    return 0;
}