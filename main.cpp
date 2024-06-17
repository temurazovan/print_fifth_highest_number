#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vector;
    int number = 0;
    std::cout << "Please, enter an array of numbers: " << std::endl;

    while (true) {
        std::cin >> number;
        if (number == -2) {
            std::cout << "Program completed" << std::endl;
            return 0;
        }
        if (number == -1 && vector.size() >= 5) {
            std::cout << "The fifth highest number - " << vector[4] << std::endl;
        } else if (vector.size() >= 5 && number < vector[4]) {
            std::swap(vector[4], number);
            std::sort(vector.begin(), vector.end());
        } else {
            vector.push_back(number);
            std::sort(vector.begin(), vector.end());
        }
    }
}
