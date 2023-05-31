// Program for Find the Number Occurring Odd Number of Times
#include <iostream>
using namespace std;
void odd_number(int arr[], int size)
{
    int odd;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd = arr[i];
            cout << "odd numbers " << odd << endl;
        }
    }
}
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    odd_number(arr, 9);
    return 0;
}