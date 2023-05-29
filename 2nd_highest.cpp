#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << " Enter size :: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element" << i + 1 << " of array :: ";
        cin >> arr[i];
    }
    std::sort(arr, arr + n);

    int h = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            h = arr[i - 1];
            break;
        }
    }

    cout << "2nd highest :: " << h << endl;

    return 0;
}