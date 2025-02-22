#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long fibonacci(int n, vector<long long>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 30; // Change this for testing different values
    vector<long long> memo(n + 1, -1);

    auto start = high_resolution_clock::now();
    long long fib = fibonacci(n, memo);
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Fibonacci number at position " << n << " is: " << fib << endl;
    cout << "Execution Time: " << duration.count() << " nanoseconds" << endl;

    return 0;
}
