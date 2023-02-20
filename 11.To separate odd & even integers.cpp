// to separate odd & even integers in arrays.
#include<iostream>

using namespace std;
int main()
{
	int arr[20],even[20],odd[20];
	int i,j=0,k=0,e=0,d=0,n;
	//size of array
	cout<<"Input size of array : ";
	cin>>n;
	//IF ARRAY SIZE<=0
	if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
	//input array from user
	for (int i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	
	//to print even odd separate 
	for( i=0 ; i<n ; i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	//print even array
	cout<<"\nEven values are : ";
	e=j;
	for(int e=0;e<j;e++)
	{
		cout<<even[e]<<"\t";
	
    }
    	//print odd array
	cout<<"\n Odd values are : ";
	d=k;
	for(int d=0;d<k;d++)
	{
		cout<<odd[d]<<"\t";

    }
    return 0;
}
