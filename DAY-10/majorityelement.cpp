#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    int ct=0;
    int candidate=0;
    for(int i=0;i<n;i++)
    {
        if(ct==0)
            candidate=arr[i];
        
        if(arr[i]==candidate)
            ct+=1;
        else
            ct-=1;
    }
    ct=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate)
            ct++;
    }
    if(ct>n/2)
        return candidate;
    else
        return -1;
}