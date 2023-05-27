// Program to find suma of elements in a given array
#include <iostream>
using namespace std;
int sum (int arr[], int n){
    int sum=0;
    for(int i=0; i<n;i++){
       sum= sum+ arr[i];
    }
    return sum;
}
int main() {
    // Write code here
    int n;
  
    
    cout<<"enter the size of the array \n ";
    cin>>n;
      int arr[n];
     cout<<"enter the elements of the array \n ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
     int arraySum = sum(arr, n);
    cout << "Sum of array elements is: " << arraySum << endl;
   

    return 0;
}