#include<iostream>
using namespace std;
int check(int*arr,int s,int x)
{
    for(int i=0;i<s;i++)
    {
        if(x==arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    int k=0,i=0,j=0;
    while(i<n)
    {
        cin>>x;
        if(!check(arr,j,x))
        {
          arr[j++]=x;
        }

        i++;
    }
    cout<<j<<endl;
    for(int i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
}
