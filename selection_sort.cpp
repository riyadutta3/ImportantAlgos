//Selection Sort : 1) Select minimal 2) Swap
//Time Complexity : Best, Average, Worst -> O(n^2)
//Space Complexity : O(1), in-place sorting

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini = i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[mini]>arr[j])
            mini=j;
        }

        swap(arr[mini],arr[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
