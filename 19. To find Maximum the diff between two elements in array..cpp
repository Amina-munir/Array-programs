// to find Maximum the difference between two elements in an array.
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
   int size, arr[100];
   
   // input the size of the array
   cout<<"Enter the size of the array: ";
   cin>>size;
   
   // input the array
   cout<<"Enter the elements of the array: ";
   for (int i = 0; i < size; i++) 
   {
      cin>>arr[i];
   }
   
   // find the maximum difference between two elements
   //let maximum diff is between 1st and 2nd element of array
   //where the minimum element is 1st value
   int maxDiff = arr[1] - arr[0];
   int minElement = arr[0];
   for (int i = 1; i < size; i++) 
   {
      if (arr[i] - minElement > maxDiff) 
      {
      	//so indirectly maxdiff= (all values of arrray)-arr[0](min element)
         maxDiff = arr[i] - minElement;
      }
      //if any value of array is less than our supposed minelement then replace
      if (arr[i] < minElement) 
      {
         minElement = arr[i];
      }
   }
   
   // print the maximum difference
   cout<<"Maximum difference between two elements in the array: "<<maxDiff<<endl;
   
   return 0;
}

