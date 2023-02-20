//16.to find the 2nd largest element in the array
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
  
   //input array from user
	for (int i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	int largest=INT_MIN;
	int secondlargest=INT_MIN;
	for(int i=0 ; i<n ;i++)
	{
		if( arr[i]>largest)
		{
			secondlargest=largest;
			largest=arr[i];
		}
		else
		{
			if( arr[i] > secondlargest && arr[i] != largest)
			{
				secondlargest=arr[i];
			}
		}
	}
	cout<<"The Second Largest value is: "<<secondlargest<<"  ";
	return 0;
}
