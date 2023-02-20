//to Merge two unsorted arrays of different lengths.
#include <iostream>
using namespace std;

int main() 
{
	
   int n1,n2,arr1[200],arr2[200],merge_array[400];
   // input the size of 1st  array
   cout<<"Enter the size of first  array: ";
   cin>>n1;
   //if user enters 0 or negative value
   if (n1 <= 0) {
      cout << "Error: size must be positive." << endl;
      return 1;
   }
   //input array 1 from user
	for (int i=0 ;i < n1 ; i++)
	{
		cout<<" Enter value "<< i + 1 <<":";
		cin>> arr1[i];
	}
	// input the size of 2nd  array
    cout<<"Enter the size of Second  array: ";
    cin>> n2 ;
     //if user enters 0 or negative value
   if (n2 <= 0) {
      cout << "Error: size must be positive." << endl;
      return 1;
   }
   //input array 2 from user
	for (int i=0 ; i < n2 ; i++)
	{
		cout<<" Enter value "<<i + 1<<":";
		cin>> arr2[i];
	}
	//Array  merging : 
	// Merge the two arrays
   for (int i = 0; i < n1; i++) 
   {
      merge_array[i] = arr1[i];
   }
   for (int i = 0; i < n2; i++) 
   {
      merge_array[i + n1] = arr2[i];
   }
   
   // sorting the merged array
	for (int i = 0; i < n1 + n2 - 1; i++) 
	{
		for (int j = 0; j < n1 + n2 - i - 1; j++) 
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
   for (int i = 0; i < n1 + n2; i++) 
   {
      cout << merge_array[i] << "  ";
   }
   
}
	
