#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int curr = arr[0];
	    int globalmax = arr[0];
	    for(int i=1;i<n;i++)
	    {
	        curr = max(arr[i],curr+arr[i]);
	        globalmax = max(curr,globalmax);
	    }
	    cout<<globalmax;
	    cout<<endl;
	}
	return 0;
}