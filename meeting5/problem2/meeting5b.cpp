#include <iostream>
#include <vector>

std::vector<int> reverseArray(const std::vector<int>& input) {
    std::vector<int> reversed(input.size());
    
    for (size_t i = 0; i < input.size(); ++i) {
        reversed[i] = input[input.size() - 1 - i];
    }
    
    return reversed;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::cout<<"array: ";
    for (int num: input){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
    std::vector<int> output = reverseArray(input);
    std::cout << "Reversed array: ";
    for (int num : output) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}