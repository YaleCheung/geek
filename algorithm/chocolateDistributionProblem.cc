#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using uint = unsigned int;
auto solution (vector<int>& vec, int m) -> int {
    sort(vec.begin(), vec.end());
    size_t size = vec.size();
    int ret = numeric_limits<int>::max();
    for(int i = 0; i < size - m + 2; ++ i) {
        int diff = static_cast<int>(abs(vec.at(i)-vec.at(i + m)));
        if (diff > ret)
            ret = diff;
    }
    return ret;
}

int main(int argc, char* argv[]) {
    vector<int> ivec{7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    cout << solution(ivec, m) << 'n';
    return 0;
}