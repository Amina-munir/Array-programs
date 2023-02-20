#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int c;
	//input array from user
	for (int i=0;i<5;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	//print array
	cout<<"values are ";
	for(int j=0;j<5;j++){
		cout<<arr[j]<<"\t";
	}
	//search array to count 
	cout<<"\n choose value to count in array";
	cin>>c;
	int count = 0;
	for(int i=1;i<5;i++){
		if (c == arr[i]){
			count ++ ;
		}
	}
		//print even array
	cout<<"\nEven values are : ";
	for(j=0;j<n;j++)
	{
		cout<<even[j]<<"\t";
	
    }
    	//print odd array
	cout<<"\n Odd values are : ";
	for(int k=0;k<n;k++)
	{
		cout<<odd[k]<<"\t";

    }
}
