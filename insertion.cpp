#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n,i;

    cout << "Enter the number of elements:";
    cin >> n;

    for(i=0; i < n; i++)
    {
       if(i % 2 ==0)
       {
          cout << "Enter the element at index " << i << ": ";
          cin >> arr[i];
       }
       else {
        arr[i]= 0;
       }
    }
              cout << "\n Array is: \n";
              for(i =0;i < n; i++)
              {
                cout << "Index" << i << " :" << arr[i] <<endl ;
              }
                          return 0;

}