#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

template<typename T>
void print_container(T container) {
    auto first = container.cbegin();
    auto last = container.cend();
    while (first != last) {
        std::cout << *(first++) << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list);
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector);

    return 0;
}