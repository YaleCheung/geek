#include <iostream>
using namespace std;

auto solution (int n) -> int {
    int ret = 1;
    int cur = ret;
    while(cur < n && cur <= std::numeric_limits<int>::max()) {
        ret = cur;
        cur <<= 1;
        cout << cur << '\n';
    }
    return ret;
}


int main(int argc, char* argv[]) {
    int input;
    cin >> input;
    cout << solution(input) << '\n';
    return 0;
}