#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    int a[n],arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s+=arr[i];
        a[i]=s;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
