//Program to count odd & even integers in an array.
#include<iostream>

using namespace std;

int main()
{
  int arr[20];
  int n, evencount=0, oddcount=0;
  
  // input the size of the array
  cout<<"Enter the size of the array: ";
  cin>>n;
  
 //input array from user
	for (int i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
  
  // count the number of even and odd values
  for(int i=0; i<n; i++)
  {
    if(arr[i]%2 == 0)
      evencount++;
    else
      oddcount++;
  }
  
  // print the number of even and odd integers
  cout<<"Even count: "<<evencount<<endl;
  cout<<"odd count: "<<oddcount<<endl;
  
  return 0;
}

