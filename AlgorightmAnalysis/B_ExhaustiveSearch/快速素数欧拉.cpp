//
// Created by 15167 on 2025/3/5.
//
#include <iostream>
#include <vector>

void eulerSieve(int n, std::vector<int>& primes) {
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
        for (size_t j = 0; j < primes.size() && i * primes[j] <= n; ++j) {
            isPrime[i * primes[j]] = false;
            if (i % primes[j] == 0) {
                break;
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the upper limit: ";
    std::cin >> n;

    std::vector<int> primes;
    eulerSieve(n, primes);

    std::cout << "Primes up to " << n << " are:\n";
/*    for (int prime : primes) {
        std::cout << prime << " ";
    }*/
    std::cout<<primes.size();
    //std::cout << std::endl;

    return 0;
}