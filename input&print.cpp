#include<bits/stdc++.h>
using namespace std;

//taking input and printing  a 2d matrix

/*
        a00 a01 a02
        a10 a11 a12

        int arr[n][m]
        input taken row by row(--->)
        a[i][j]- ith row's jth element
        n, m---row,column
        
        */

int main()
{
    int m,n;
    cout<<"Enter the row and col of matrix-\n";
    cin>>n>>m;
    int arr[n][m];
    
    


    cout<<"enter the matrix elements-\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is-\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}