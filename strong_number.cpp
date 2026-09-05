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
cout<<"The sum of factorial of digits of "<<t<<" is "<<sum<<endl;



   
    // int day;
    // cin >> day;

    // switch(day)
    // {

    //     case 1:
    //      cout << "Monday" << endl;
    //      break;
    //      case 2:
    //      cout << "Tuesday" << endl;
    //      break;
    //      case 3:
    //      cout << "Wednesday" << endl;
    //      break;
    //      case 4:
    //      cout << "Thursday" << endl;
    //      break;
    //      case 5:
    //      cout << "Friday" << endl;
    //      break;
    //      case 6:
    //      cout << "Saturday" << endl;2
    //      break;
    //      case 7:
    //      cout << "Sunday" << endl;
    //      break;
    //      default:
    //      cout << "Invalid day" << endl;


    // }
  

    return 0;
}