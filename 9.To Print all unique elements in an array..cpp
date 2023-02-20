 #include<iostream>
using namespace std;
int main()
{
	//size of array
	int n,i,j,a[100];
	cout<<"Please Input size of array : ";
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
	//print array
	cout<<"Values are ";
	for(int i=0;i<n;i++){
		cout<<"\t"<<arr[i];
	}
	//print unique value in array
	cout<<"\nUnique value in array ";
	for( i=0;i<n;i++)
	{
		for( j=0 ; j<n ; j++ )
		
			if( arr[i] ==arr[j] )
				break;
		
		if ( i==j ) 
    	{
		cout<<"\t"<<arr[i];
		
    	}
	}
  }
