#include<iostream>
using namespace std;


int factorial(int  n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}


int main(){ 

   int r,sum=0,value =150,t=value; 



   while(value != 0)
{
    r = value % 10;
    value = value /10;
    sum = sum+factorial(r);

}

if(sum == t)
{
    
    cout<<"The number is a strong number";
}
else
{
    cout<<"The number is not a strong number";
}


   
   

    return 0;
}