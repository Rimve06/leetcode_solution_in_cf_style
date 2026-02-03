#include<iostream>
using namespace std;
int rem(int*arr,int r,int z)
{
    int a[z];
    for(int i=0;i<z;i++)
    {
        a[i]=arr[i];
    }
    int os=0,es=0;
    while(r<z)
    {
       a[r]=a[r+1];
       r++;
    }
    z--;
    for(int i=0;i<z;i++)
    {
        if(i%2!=0)
        {
            os+=a[i];
        }
        else{es+=a[i];}
    }
    if(os==es)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(rem(arr,i,n))
           {
               k++;
           }
    }
    cout<<k;
}

