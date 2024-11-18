
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end) {
    for (int i = 0; i < numberOfElements; i++) {
        a[i] = start + rand() % (end - start + 1);
    }
}

void PrintArray(int* a, int size) {
    for (int i = 0; i < size; i++) {
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    }
    cout << endl;
}

int FindSumOfMaxAndMin(int* a, int size) {
    int maxElement = a[0];
    int minElement = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] > maxElement) {
            maxElement = a[i];
        }
        if (a[i] < minElement) {
            minElement = a[i];
        }
    }

    return maxElement + minElement;
}

int main() {
    srand((unsigned)time(NULL));

    const int size = 10;
    int array[size];

    CreateArrayWithRandomElements(array, size, -50, 50);

    cout << "Array:" << endl;
    PrintArray(array, size);

    int sum = FindSumOfMaxAndMin(array, size);

    cout << "\nSum of max and min elements: " << sum << endl;
    return 0;
}
