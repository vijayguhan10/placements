#include <iostream>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    std::cout << "Fibonacci Series: " << a << " " << " ";
    for (int i = 2; i < n; i++) {
        next = a + b;
        std::cout << next << " ";
        a = b;
        b = next;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    fibonacci(n);
    return 0;
}
