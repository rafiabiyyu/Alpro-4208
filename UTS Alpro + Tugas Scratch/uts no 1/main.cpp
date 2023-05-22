#include <iostream>
#include <vector>
// Rafi Abiyyu Ramadhan - A11.2022.14351
using namespace std;
bool isOdd(int number) {
    // Mengembalikan true jika bilangan tersebut ganjil, dan false jika genap.
    return number % 2 != 0;
}

void findSmallestEven(const std::vector<int>& numbers) {
    int smallestEven = -1;
    int index = -1;

    for (int i = 0; i < numbers.size(); i++) {
        if (!isOdd(numbers[i]) && (smallestEven == -1 || numbers[i] < smallestEven)) {
            smallestEven = numbers[i];
            index = i;
        }
    }

    if (smallestEven != -1) {
        cout << "Nilai genap terkecil: " << smallestEven << endl;
        cout << "Index: " << index << endl;
    } else {
        cout << "Tidak ada nilai genap dalam deret." << endl;
    }
}

int main() {
    // Contoh penggunaan
    vector<int> numbers = {9, 8, 4, 7, 5, 2, 3};
    findSmallestEven(numbers);

    return 0;
}
