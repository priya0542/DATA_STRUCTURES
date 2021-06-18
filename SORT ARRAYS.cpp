#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int fl=0;
	for(int i=0;i<n-1;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	            fl=1;
	            break;
	        }
	    }
	}
	if(fl==1)
	{
	    cout<<"not sorted";
	}
	else
	{
	    cout<<"yes soretd";
	}
	return 0;
}
