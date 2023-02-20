//15.to find the 2nd smallest element in the array
#include<iostream>
using namespace std;
int main()
{
	int n,arr[200];
  // input the size of the array
  cout<<"Enter the size of the array: ";
  cin>>n;
  //if size<=0
    if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
  
   //input array from user
	for (int i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	int smallest=INT_MAX;
	int secondsmallest=INT_MAX;
	for(int i=0 ; i<n ;i++)
	{
		if( arr[i]>smallest)
		{
			secondsmallest=smallest;
			smallest=arr[i];
		}
		else
		{
			if( arr[i] < secondsmallest && arr[i] != smallest)
			{
				secondsmallest=arr[i];
			}
		}
	}
	cout<<"The Second Smallest Element is: "<<secondsmallest<<"  ";
	return 0;
}
