#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   int i=0,j=0,k=n-1;
        while(i<=k){                                
            if(nums[i]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[i],nums[k]);
                k--;
            }
        }
}