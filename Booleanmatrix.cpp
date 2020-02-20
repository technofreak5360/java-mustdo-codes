#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r;
	    cin>>c;
	    int arr[r][c];
	    int row[r],col[c];
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    for(int i=0;i<r;i++)
	    row[i]=0;
	    for(int i=0;i<c;i++)
	    col[i]=0;
	     for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                row[i]=1;
	                col[j]=1;
	            }
	        }
	    }
	     for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            if(row[i]==1||col[j]==1)
	            {
	               arr[i][j]=1;
	            }
	        }
	    }
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	         cout<<arr[i][j]<<" ";
	            
	        }
	        cout<<endl;
	    }
	}
	return 0;
}