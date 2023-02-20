#include<iostream>
using namespace std;
int main()
{
	
	int n,arr[n];
	//size of array

	cout<<"input size of array";
	cin>>n;
	
	//iff user inputs array size 0 or less than 0
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
	//print array
	cout<<"values are ";
	for(int j=0;j<n;j++){
		cout<<arr[j]<<"\t";
	}
	//search odd value in array 
	cout<<"\n odd value(s) in array : ";
	
	int count = 0;
	for(int i=0;i<n;i++){
		if (arr[i] % 2!=0){
			count ++ ;
		}
	}
		cout<<count;
	return 0;
}
