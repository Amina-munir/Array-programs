#include<iostream>
using namespace std;
int main()
{
	int arr[5];
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
	//search array for minimum number
	int min = arr[0];
	for(int i=0;i<5;i++){
		if (min > arr[i]){
			min=arr[i];
		}
	}
		cout<<"\n minimum value is "<<min;
	return 0;
}
