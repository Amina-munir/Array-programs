#include <iostream>
using namespace std;

int main() 
{
	int n,arr1[200],arr2[200];
  // input the size of 1st  array
  cout<<"Enter the size of first  array: ";
  cin>>n;
  
   //input array 1 from user
	for (int i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr1[i];
	}
	// input the size of 2nd  array
  cout<<"Enter the size of first  array: ";
  cin>>n;
  
   //input array 2 from user
	for (int i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr2[i];
	}
    
    
    
    bool same = true;
    for (int i = 0; i < n; i++)
	{
        if (arr1[i] != arr2[i])
		 {
            same = false;
            break;
        }
    }
    if (same)
	{
        cout << "The arrays are same." <<endl;
    }
	 else 
	{
        cout << "The arrays are not same." <<endl;
    }
    return 0;
}

