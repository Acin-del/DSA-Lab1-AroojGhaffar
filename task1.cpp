#include <iostream>
using namespace std;

// Finds all indices where key is present
void findAllIndices(int arr[], int size, int key, int result[], int &count)
{
    count = 0; // Initialize match count

    // Traverse array
    for (int i = 0; i < size; i++)
    {
        // if curr element matches key
        if (arr[i] == key)
        {
            result[count] = i; // Store index
            count++;
        }
    }
}

int main()
{
    // Test Case 1 - Multiple occurrences
    int arr1[] = {4, 2, 7, 2, 9, 2, 5};
    int size1 = 7;
    int result1[size1];
    int count;

    findAllIndices(arr1, size1, 2, result1, count);

    cout << "Test Case 1 (Multiple occurrences): ";
    if (count == 0)
        cout << "Key not present";
    else
        // Display all matching indices
        for (int i = 0; i < count; i++)
            cout << result1[i] << " ";
    cout << endl;

    // Test Case 2 - Key not present
    int arr2[] = {1, 3, 5, 7, 9};
    int size2 = 5;
    int result2[size2];

    findAllIndices(arr2, size2, 4, result2, count);

    cout << "Test Case 2 (Key not present): ";
    if (count == 0)
        cout << "Key not present";
    else
        // Display all matching indices
        for (int i = 0; i < count; i++)
            cout << result2[i] << " ";
    cout << endl;

    // Test Case 3 - Empty array
    int size3 = 0;
    int result3[1];

    // Pass nullptr because the array is empty
    findAllIndices(nullptr, size3, 5, result3, count);

    cout << "Test Case 3 (Empty array): ";
    if (count == 0)
        cout << "Array is empty";
    else
        // Display all matching indices
        for (int i = 0; i < count; i++)
            cout << result3[i] << " ";
    cout << endl;

    return 0;
}