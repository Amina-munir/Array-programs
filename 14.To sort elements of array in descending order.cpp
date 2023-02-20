//to sort elements of array in descending order
//program to sort elements of array in ascending order
#include <iostream>
using namespace std;
int main() 
{
    int arr[20], n;
    // size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    //if size<=0
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
	
    // sorting The array in descending order
    for (int i = 0; i < n ; i++)
	 {
        for (int j = i+1; j < n ; j++)
		 {
            if (arr[i] < arr[j ])
			 {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printing the array in descending order
    cout << "The sorted array in descending order is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

