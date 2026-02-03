#include <iostream>
using namespace std;

int removeElement(int nums[], int n, int val)
{
    int k = 0;  // index for elements not equal to val

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int n;
    cin >> n;

    int nums[100];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int val;
    cin >> val;

    int k = removeElement(nums, n, val);

    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
}

