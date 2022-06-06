#include <bits/stdc++.h> 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int, int> result;
    for(int i=0; i<n; i++)
    {
        if(arr[abs(arr[i]) - 1] > 0)
        {
            arr[abs(arr[i]) - 1] *= -1;
        }
        else
        {
            result.second = abs(arr[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            result.first = i+1;
        }
    }
    return result;
}
