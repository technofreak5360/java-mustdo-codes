#include <iostream>
using namespace std;
int quili(int arr[],int n)
	{
	  int sum=0,leftsum=0;
	  for(int i=0;i<n;i++)
	  {
	      sum+=arr[i];
	  }
	  for(int i=0;i<n;i++)
	  {
	      sum-=arr[i];
	      if(sum==leftsum)
	      return i+1;
	      leftsum+=arr[i];
	  }
	  return -1;
	}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int arr[n];
	   for(int i=0;i<n;i++)
	   cin>>arr[i];
	   cout<<quili(arr,n);
	   cout<<endl;
	}
	return 0;
}