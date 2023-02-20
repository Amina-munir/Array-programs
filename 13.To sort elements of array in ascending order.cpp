//program to sort elements of array in ascending order
#include <iostream>
using namespace std;
int main() 
{
    int arr[20], n;
    // size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    //input array from user
	for (int i=0;i<n;i++){
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
	}
	
    // The array in ascending order
    for (int i = 0; i < n ; i++)
	 {
        for (int j = i+1; j < n ; j++)
		 {
            if (arr[i] > arr[j ])
			 {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printing the array in ascending order
    cout << "The sorted array in ascending order is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

