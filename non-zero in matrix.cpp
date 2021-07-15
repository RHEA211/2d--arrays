#include<bits/stdc++.h>
using namespace std;

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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if( arr[i][j]!=0)
            {
                cout<<arr[i][j]<<" ";
            }
            
        }
    }
    return 0;
    

}