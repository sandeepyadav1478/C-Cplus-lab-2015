#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,k=1;
    char a[10][10];
    cout<<"Enter m & n \n";
    cin>>m>>n;
    cout<<"Enter the array \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Final array is \n";
    for(i=0;i<=n;i++)
    {
        if(i=0)
        {
            for(j=0;j<=i;j++)
        {
            cout<<a[i];
        }
        }
        else
        {
            for(j=(0+k);j<=i;j++)
        {
            cout<<a[i];
        }
        }
        cout<<endl;
    }
   return 0;

}
