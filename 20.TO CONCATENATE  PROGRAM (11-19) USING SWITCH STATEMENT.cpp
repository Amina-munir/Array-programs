#include<iostream>
using namespace std;
int main()
{
	int choice;
	int i,j=0,k=0,e=0,d=0,n;
	int evencount=0, oddcount=0;
	int even[e],odd[d],smallest,secondsmallest,largest,secondlargest;
	int n1,n2,temp,arr1[200],arr2[200],merge_array[400];
	int size, arr[100],maxDiff,minElement;
    bool check;
	bool quit=false;
	do
	{
		cout<<"\n Choose a program to open:"<<endl;
		cout<<"11) Program to separate odd & even integers in arrays."<<endl;
		cout<<"12) Program to count odd & even integers in an array."<<endl;
		cout<<"13) Program to sort elements of array in ascending order."<<endl;
		cout<<"14) Program to sort elements of array in descending order."<<endl;
		cout<<"15) Program to find  2nd smallest element in the array."<<endl;
		cout<<"16) Program to find  2nd largest element in the array."<<endl;
		cout<<"17) Program to check if two arrays are the same or not?"<<endl;
		cout<<"18) Program to Merge two unsorted arrays of different lengths."<<endl;
		cout<<"19) Program to find Maximum difference between two elements in array."<<endl;
		cout<<"20) Quit "<<endl;
		cout<<"Enter Choice : "<<endl;
		cin>>choice;
		switch(choice)
		{
			        case 11:
	// to separate odd & even integers in arrays.
	//size of array
	cout<<"Input size of array : ";
	cin>>n;
	//input array from user
	for ( i = 0 ; i<n ; i++){
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
	for( e = 0 ; e < j ; e++)
	{
		cout<<even[e]<<"\t";
	
    }
    	//print odd array
	cout<<"\n Odd values are : ";
	d=k;
	for( d = 0 ; d<k ; d++)
	{
		cout<<odd[d]<<"\t";

    }
			        	
		            break;
		            
                    case 12:
    //Program to count odd & even integers in an array.
    // input the size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
  
    //input array from user
	for ( i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
  
    // count the number of even and odd integers
     for( i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
             evencount++;
         else
            oddcount++;
    }
  
     // print the number of even and odd integers
     cout<<"Even count: "<<evencount<<endl;
     cout<<"odd count: "<<oddcount<<endl;
                    break;
					
			        case 13:
	//program to sort elements of array in ascending order
    // size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    //input array from user
	for ( i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	
    // The array in ascending order
    for (i = 0; i < n ; i++)
	 {
        for (j = i+1; j < n ; j++)
		 {
            if (arr[i] > arr[j ])
			 {
                 temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printing the array in ascending order
    cout << "The sorted array in ascending order is: ";
    for ( i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
					break;
				
				    case 14:
	//to sort elements of array in descending order
    // size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    //input array from user
	for ( i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
    // sorting The array in descending order
    for ( i = 0; i < n ; i++)
	 {
        for ( j = i+1; j < n ; j++)
		 {
            if (arr[i] < arr[j ])
			 {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printing the array in descending order
    cout << "The sorted array in descending order is: ";
    for ( i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
					break;
					
			        case 15:
    //15.to find the 2nd smallest element in the array
  //second method using first approach
  cout<<"Enter the size of the array: ";
  cin>>n;
  //if size<=0
    if (n <= 0) 
   {
      cout<<"Array size should be greater than 0."<<endl;
      return 0;
   }
  
   //input array from user
	for ( i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
     smallest=arr[0];
	 secondsmallest=arr[1];
	for(i=0 ; i<n ;i++)
	{
		if( arr[i] < smallest)
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
			        break;
					
			        case 16:
    //16.to find the 2nd largest element in the array
    // input the size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    //input array from user
	for ( i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	 largest=INT_MIN;
	secondlargest=INT_MIN;
	for( i=0 ; i<n ;i++)
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
				    break;
				    
			        case 17:
  //to check if two arrays are the same or not?
  // input the size of 1st  array
  cout<<"Enter the size of first  array: ";
  cin>>n;
  
   //input array 1 from user
	for ( i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr1[i];
	}
	// input the size of 2nd  array
  cout<<"Enter the size of second  array: ";
  cin>>n;
  
    //input array 2 from user
	for ( i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr2[i];
	}
	//checkinf if arrays are same or not?
     check = true;
    for ( i = 0; i < n; i++)
	{
        if (arr1[i] != arr2[i]) 
		{
            check = false;
            break;
        }
    }
    if (check)
	{
        cout << "The arrays are same." <<endl;
    }
	 else 
	{
        cout << "The arrays are not same." <<endl;
    }
				    break;
					
				    case 18:
	//	to Merge two unsorted arrays of different lengths.		    	
    // input the size of 1st  array
    cout<<"Enter the size of first  array: ";
    cin>>n1;
  
    //input array 1 from user
 	for (i=0 ;i < n1 ; i++)
	{
		cout<<" Enter value "<< i + 1 <<":";
		cin>> arr1[i];
	}
	// input the size of 2nd  array
    cout<<"Enter the size of second  array: ";
    cin>> n2 ;
    //input array 2 from user
    	for ( i=0 ; i < n2 ; i++)
     	{
		cout<<" Enter value "<<i + 1<<":";
		cin>> arr2[i];
    	}
      // Merge the two arrays
     for ( i = 0; i < n1; i++) 
     {
      merge_array[i] = arr1[i];
     }
    for ( i = 0; i < n2; i++) 
     {
      merge_array[i + n1] = arr2[i];
     }
     // sorting the merged array
 	for ( i = 0; i < n1 + n2 - 1; i++) 
	{
		for (  j = 0; j < n1 + n2 - i - 1; j++) 
		{
			if (merge_array[j] > merge_array[j + 1]) 
			{
				int temp = merge_array[j];
				merge_array[j] = merge_array[j + 1];
				merge_array[j + 1] = temp;
			}
		}
	}
	
   // print the merged and sorted array
   cout << "Array after merging and sorting : " << endl;
   for ( i = 0; i < n1 + n2; i++) 
   {
      cout << merge_array[i] << "  ";
   }
		            break;
					
			        case 19:
   //19.to find Maximum difference between two elements in array
   cout<<"Enter the size of the array: ";
   cin>>size;
   cout<<"Enter the elements of the array: ";
   for ( i = 0; i < size; i++) 
   {
      cin>>arr[i];
   }
   maxDiff = arr[1] - arr[0];
   minElement = arr[0];
   for ( i = 1; i < size; i++) 
   {
      if (arr[i] - minElement > maxDiff) 
      {
         maxDiff = arr[i] - minElement;
      }
      if (arr[i] < minElement) 
      {
         minElement = arr[i];
      }
   }
   cout<<"Maximum difference between two elements in the array: "<<maxDiff<<endl;	
			        break;
			        
					case 20:
						cout<<"Thank you ! Have a nice day."<<endl;
			quit=true;
		        	break;
			
		
		default:
				cout<<"Invalid option Entered!"<<endl;
			}
}
	while(!quit);
	return 0;
}
