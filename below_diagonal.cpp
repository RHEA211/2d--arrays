#include<bits/stdc++.h>
using namespace std;
//sum of elements above matrix diagonal 

int main()
{
    int m,n;
    cout<<"Enter the row and col of matrix-\n";
    cin>>n>>m;
    int arr[n][m];
    int sum=0;
    
  
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
    
    cout<<"Below Diagonal\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j<i){
           cout<<arr[i][j];
            }
            else{ cout<<"0";}
        }
        cout<<"\n";
    }
    return 0;
    

}



















    