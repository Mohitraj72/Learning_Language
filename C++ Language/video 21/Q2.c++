#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;

    cout << "Enter the Size of the Array: ";
    cin >> n;
    
    cout << "Enter The elements of The Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Sorting the array in descending order using insertion sort
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            // Change the condition to sort in descending order
            if (arr[j] > arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }

    // Output the sorted array in descending order
    cout << "Array sorted in descending order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
