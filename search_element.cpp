// Program for Search an element in a sorted and pivoted array
// program to write the missing element of the array
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int key = 0;
    int arr[] = {2, 3, 4, 6, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + size);
    for (int i = 0; i < 7; i++)
    {

        if (arr[i] == key)
        {
            cout << i;
            break;
        }

        if (arr[i] != key && i == 6)
        {
            cout << "Key Not Found!" << endl;
        }
    }

    return 0;
}