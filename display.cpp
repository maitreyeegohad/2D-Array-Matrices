#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[2][3];

    cout<<"Enter 6 numbers: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*
OUTPUT:
Enter 6 numbers: 1 2 3 4 5 6
1 2 3 
4 5 6 
*/
