#include <iostream>
#include <vector>
#include "Math.hpp"

int main() {
    std::vector<std::string> array = {"Andreyus", "Johnson", "Yanny"};

    int i = 1;
    for (const auto& str : array) {
        std::cout << str << "   String length: " << str.length() << " ^ " << i << " = " << math::square(str.length(), i);
        i++;
        std::cout << '\n';
    }

    return 0;
}