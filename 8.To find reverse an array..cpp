#include<iostream>
using namespace std;
int main()
{
	//size of array
	int n ;
	cout<<"input size of array";
	cin>>n;
	int arr[n];
	
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
	cout<<endl;
	
	//print array
	cout<<"values are ";
	for(int j=0;j<n;j++){
		cout<<arr[j]<<"\t";
	}
	//reverse array
	cout<<"\n reversed array : ";
	
	int r= 0;
	int l=n-1;
	while (r<l)
	{
		swap(arr[r],arr[l]);
		r++;
		l--;
	}
	//print after reverse
	for(int i=0;i<n;i++){
		{
			cout<<arr[i]<<"  ";
		}
	}
	
	return 0;
}
