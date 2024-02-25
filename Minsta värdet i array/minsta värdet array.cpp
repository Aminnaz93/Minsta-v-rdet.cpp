template<typename T>
T findMin(const T arr[], int size) {
    T min = arr[0]; // Antag att det första elementet är det minsta initialt

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}