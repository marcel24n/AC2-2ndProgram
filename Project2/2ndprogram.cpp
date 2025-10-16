#include <array>
#include <iostream>
const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS = 100;

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr,
    int nrrows, int nrcolumns) {
    // Print each element of the matrix row by row
    std::cout << "\nMatrix elements:\n";
    for (int i = 0; i < nrrows; i++) {
        for (int j = 0; j < nrcolumns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl; // move to next row
    }
}

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr,
    int nrrows, int nrcolumns) {
    // Input elements row by row
    for (int i = 0; i < nrrows; i++) {
        for (int j = 0; j < nrcolumns; j++) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }
}

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> matrix;
    fillArray(matrix, 5, 4); // elements are entered row by row
    printArray(matrix, 5, 4);
}
