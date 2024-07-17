//Write program to display the array element.
#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << endl;
    }

    return 0;
}

//write a program to find the  max element from the list
#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int maxElement = array[0];
    for (int i = 1; i < arraySize; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }

    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}

//Write a program to find the count of 3 multiples in a given input integer array.
#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 33, 36, 40, 45, 50};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int countMultiplesOf3 = 0;

    for (int i = 0; i < arraySize; i++) {
        if (array[i] % 3 == 0) {
            countMultiplesOf3++;
        }
    }
    cout << "The count of multiples of 3 in the array is: " << countMultiplesOf3 << endl;

    return 0;
}

//4th
#include <iostream>
using namespace std;

// Function to count multiples of 3 in an array
int divisibleBy3(int array[], int size) {
    if (size < 0) {
        cout << "Invalid Input" << endl;
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            cout << "Invalid Input" << endl;
            exit(1);
        }
    }

    int countMultiplesOf3 = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 3 == 0) {
            countMultiplesOf3++;
        }
    }
    return countMultiplesOf3;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Invalid Input" << endl;
        return 1;
    }

    int array[20]; // Define an array with a maximum size of 20
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int result = divisibleBy3(array, n);
    cout << "The count of multiples of 3 in the array is: " << result << endl;

    return 0;
}
