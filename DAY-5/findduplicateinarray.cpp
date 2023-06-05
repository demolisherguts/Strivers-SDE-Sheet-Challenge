#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
    vector<int> temp(n+1,0);
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]++;
        if(temp[arr[i]]>1)return arr[i];
    }

}
