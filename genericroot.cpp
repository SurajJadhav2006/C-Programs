#include<iostream>
using namespace std;

int main()
{
    int value =185,sum=0;



    while(1)
    {
        while(value!=0)
        {
            sum = sum +value % 10;
            value = value / 10;
        }
        if(sum >= 10)
    {
      value = sum;
      sum =0;
    } 
    else
    {
        cout<<"The sum of digits is "<<sum;
        break;
    }
}
    return 0;
}