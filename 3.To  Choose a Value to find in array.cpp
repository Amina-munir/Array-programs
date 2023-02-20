#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int c;
	//input array from user
	for(int i=0;i<5;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	//print array
	cout<<"values are ";
	for(int j=0;j<5;j++){
		cout<<arr[j]<<"\t";
	}
	//search array to choose a value & identify if present
    
    bool flag;
    cout<<"\n choose value to identify in array ";
    cin>>c;
	for(int i=0;i<5;i++){
		if ( c ==arr[i] ) 
		{
			if(flag==1)
				cout<<"value found";
				break;
			}
		    if(flag!=1)
			{
				 cout<<"value not found";
			}
			return 0;
	    }
	    
}
   

