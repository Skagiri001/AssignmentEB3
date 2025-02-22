#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 20; // Change this for testing different values
    auto start = high_resolution_clock::now();
    long long fact = factorial(n);
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<nanoseconds>(stop - start);
    
    cout << "Factorial of " << n << " is: " << fact << endl;
    cout << "Execution Time: " << duration.count() << " nanoseconds" << endl;

    return 0;
}
