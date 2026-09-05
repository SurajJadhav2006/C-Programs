#include <iostream>
using namespace std;

int main()
{
    int arr[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
     if (i % 2 == 0)
     {
      cin >> arr[i];
   }
   else
   {
    arr[i] = 0;
   }
    
    for (int i = 0; i < n; i++)
    {
     
            cout << arr[i] << " ";
       
    }

    return 0;
}