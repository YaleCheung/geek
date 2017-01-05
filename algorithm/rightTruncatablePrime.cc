#include <iostream>
#include <vector>
using namespace std;

// SoE algorithm

auto SoE(const int n) -> vector<bool>{
    vector<bool> isPrime(n + 1, true);
    // init the array;
    // init the array;
    isPrime.at(0) = false;
    isPrime.at(1) = false;
    // enumerate the primes that less tan n;
    for(int i = 2; i * i <= n; ++ i) {
        if (isPrime.at(i) == true) {
            for(int j = 2 * i; j <= n; j += i) 
                isPrime[j] = false;
        }
    }
    return (isPrime);
}
auto rightTruncatablePrime(int input) -> bool {
    auto isPrime = SoE(input);
    while(input > 9 && isPrime[input]) 
        input = input / 10;
    return isPrime[input];
}

int main(int argc, char* argv[]) {
    int input;
    cin >> input;
    cout << (rightTruncatablePrime(input) ? "YES" : "NO") << '\n';
    //auto ret = SoE(239);
    //for(auto value : ret)
    //    cout << value << ' ';
    return 0;
}