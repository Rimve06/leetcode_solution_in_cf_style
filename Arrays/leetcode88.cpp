#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
      int m;
    cin>>n;

   vector<int>arr;
   vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=0;
    for(int i=m;i<(m+n),k<m;i++)
    {
        arr[i]=a[k++];
    }

}
