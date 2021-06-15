#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int low,int high,int k,int a[])
{
    while(low<=high)
    {
        int mid=(low+high)>>1;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<binarysearch(0,n-1,k,a);
	return 0;
}
