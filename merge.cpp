// Program for Merge an array of size n into another array of size m+n

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int arr1[4] = {1, 2, 3, 5};
    int arr2[5] = {35, 6, 7, 8, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[1]);
    int size2 = sizeof(arr2) / sizeof(arr2[1]);
    int size3 = size1 + size2;
    cout << "size of both arrays " << size3;
    int arr3[size3];
    for (int i = 0; i < size3; i++)
    {
        if (i < size1)
        {
            arr3[i] = arr1[i];
        }
        else if (i > size1 && i < size2)
        {
            arr3[i] = arr2[i];
        }
    }
    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << "\t";
    }
    return 0;
}