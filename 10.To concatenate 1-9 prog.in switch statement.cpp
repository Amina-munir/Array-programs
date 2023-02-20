#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,n,c,j,choice=0;
	int min,max,count,sum,r,l;
	int k;
	bool quit=false;
	do
	{
		cout<<"\nChoose a program to open:"<<endl;
		cout<<"1) Program  accept inputs 5 number from user & print the minimum"<<endl;
		cout<<"2) Program  accept inputs 5 number from user & print the maximum "<<endl;
		cout<<"3) Program  for searching & check that number is present in array or not? "<<endl;
		cout<<"4) Program accept an input number for searching & check how many times that number comes? "<<endl;
		cout<<"5) Program to print only odd numbers from array list "<<endl;
		cout<<"6) Program to print only even numbers from array list "<<endl;
		cout<<"7) Program to find sum of elements in a given array "<<endl;
		cout<<"8) Program to reverse an array."<<endl;
		cout<<"9) Program to print all unique elements in an array."<<endl;
		cout<<"10) Quit "<<endl;
		cout<<"Enter Choice : "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					//nested switch for1-4 programs having array size 5
					switch(choice)
					{
                    case 1: 
    cout<<"To find minimum value in array of 5 "<<endl;
     for (i=0;i<5;i++)
	 {
		cout<<"Enter  values "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values in array are: ";
	for( j=0;j<5;j++){
		cout<<arr[j]<<"\t";
	}
	//search array for minimum number
	 min = arr[0];
	for( i=0;i<5;i++){
		if (min > arr[i]){
			min=arr[i];
		}
	}
		cout<<"\n minimum value is "<<min;
}
     
                    break;
      
   
                    case 2: 
    cout<<"To find maximum value in array"<<endl;
      for ( i=0;i<5;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values in array are:";
	for( j=0;j<5;j++){
		cout<<arr[j]<<"\t";
	}
	//search array for maximum number
	 max = arr[0];
	for( i=0;i<5;i++){
		if (max<arr[i])
		{
			max=arr[i];
		}
}
		cout<<"\n maximum value is "<<max;
		break;
}
                    break;
      
    //Enter a value To choose a value & identify if present in array
                    case 3:
	cout<<"To choose a value & identify if present in array"<<endl; 
      for( i=0;i<5;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values are ";
	for( j=0;j<5;j++){
		cout<<arr[j]<<"\t";
	}
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
				 break;
		    }
	    }
                    break;
      
                    case 4:
	   cout<<"choose a value to count apppearence in array of 5"<<endl; 
      for ( i=0;i<5;i++)
	  {
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values are ";
	
	for( j=0;j<5;j++){
		cout<<arr[j]<<"\t";
	}
	//search array to count 
	cout<<"\n choose value to count in array ";
	cin>>c;
	 count = 0;
	for( i=0;i<5;i++){
		if (c == arr[i]){
			count ++ ;
		}
	}
		cout<<"\n value is repeating "<<count<<" times";
      break;

			       	break;
				
				    case 5:
	cout<<"Odd value in user input array"<<endl;
	cout<<"input size of array";
	cin>>n;
	//iff user inputs array size 0 or less than 0
	if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
	for ( i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values in array are:";
	for( j=0;j<n;j++){
		cout<<arr[j]<<"\t";
	}
	//search odd value in array 
	cout<<"\n odd value(s) in array : ";
	 count = 0;
	for( i=0;i<n;i++){
		if (arr[i] % 2!=0){
			count ++ ;
		}
	}
		cout<<count;
				 
					break;
					
		            case 6:
	cout<<"Even value in user input array"<<endl;
	cout<<"input size of array";
	cin>>n;
	//iff user inputs array size 0 or less than 0
	if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
	 
	for ( i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values in array are:";
	for( j=0;j<n;j++){
		cout<<arr[j]<<"\t";
	}
	//search even value in array 
	cout<<"\n even value(s) in array : ";
	 count = 0;
	for( i=0;i<n;i++){
		if (arr[i] % 2 ==0){
			count ++ ;
		}
	}
		cout<<count;
					break;
					
			    	case 7:
	cout<<"Sum of elements in array"<<endl;				
	cout<<"input size of array";
	cin>>n;
	//iff user inputs array size 0 or less than 0
	if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
	 
	for (i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values in array are:";
	for( j=0;j<n;j++){
		cout<<arr[j]<<"\t";
	}
	cout<<"\n sum of values in array : ";
	
	sum = 0;
	for(i=0;i<n;i++){
		{
			sum+=arr[i] ;
		}
	}
		cout<<sum;
					break;
					
	                case 8:
	//to reverse an array			
	cout<<"To reverse an array"<<endl;
	cout<<"input size of array";
	cin>>n;
	//iff user inputs array size 0 or less than 0
	if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
	for ( i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
    cout<<"\n values in array are:";
	for(j=0;j<n;j++){
		cout<<arr[j]<<"\t";
	}
	cout<<"\nvalues in reversed array are : ";
	r= 0;
    l=n-1;
	while (r<l)
	{
		swap(arr[r],arr[l]);
		r++;
		l--;
	}
	for( i=0;i<n;i++)
	{
     	cout<<arr[i]<<"  ";
     }
				break;
					
			    case 9:
	cout<<"To print all unique elements in an array"<<endl;
	cout<<"input size of array";
	cin>>n;
	//iff user inputs array size 0 or less than 0
	if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
	for ( i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values are ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	//print unique value in array	cout<<"\n unique value in array ";
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
	            break;
				    

	            case 10:
	cout<<"Thank Yous! Have a nice day."<<endl;
	
			quit=true;
		    break;
			
		
		       default:
				cout<<"Invalid option Entered!"<<endl;
}//switch statement closed
}//do loop closed
while(!quit);
	return 0;
}




