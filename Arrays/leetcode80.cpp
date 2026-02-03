#include<iostream>
using namespace std;
int check(int*arr,int s,int x)
{
    int c=0;
    for(int i=0;i<s;i++)
    {
        if(x==arr[i])
        {
           c++;
        }
    }
    if(c>=2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int s,x,j=0;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>x;
        if(!check(arr,i,x))
        {
            arr[j++]=x;
        }
    }

    cout<<j;
    for(int i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
}
