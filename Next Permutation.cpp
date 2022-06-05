#include<bits/stdc++.h>
vector<int> nextPermutation(vector<int> &permutation, int N)
{
    if(N==1)
    {
        return permutation;
    }
    int i, j;
    for(i=N-2; i>=0; i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            break;
        }
    }
    if(i<0)
    {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
    for(j=N-1; j>i; j--)
    {
        if(permutation[i]<permutation[j])
        {
            break;
        }
    }
    swap(permutation[i], permutation[j]);
    reverse(permutation.begin()+i+1, permutation.end());
    return permutation;
}
