//Harshil Nagori
//ENTC A2
//24070123046


#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;     

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted array (Quick Sort): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


/*OUTPUT:-

Enter number of elements: 6
Enter 6 elements:
55 87 46 77 34 98
Sorted array (Quick Sort): 34 46 55 77 87 98 
*/
