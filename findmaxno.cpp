#include <iostream>
using namespace std;

int main()
{
    char name[3][10] = {"suraj", "shivam", "ram"};
    int rollno[3] = {1, 2, 3};
    int marks[3] = {85, 90, 78};

    int temp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (marks[i] < marks[j])
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}