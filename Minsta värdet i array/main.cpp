#include <iostream>
#include "minsta värdet array.cpp"

int main() {
    int arr[] = {5, 2, 8, 1, 9}; // En array av heltal
    float arr1[] = {3.4, 23.3, 212.3, 54.3};
    int size = sizeof(arr) / sizeof(arr[0]); // Storleken på arrayen
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Anropa funktionen för att hitta det minsta värdet i arrayen
    int min = findMin(arr, size);
    float min1 = findMin(arr1, size1);

    // Skriv ut det minsta värdet
    std::cout << "Det minsta värdet i arrayen är: " << min << std::endl;
    std::cout << "Det minsta värdet i array float är: " << min1 << std::endl;

    return 0;
}
