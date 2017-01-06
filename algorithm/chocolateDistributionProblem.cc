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
    for(int i = 0; i < size - m + 1; ++ i) {
        int diff = static_cast<int>(abs(vec.at(i)-vec.at(i + m - 1)));
        if (diff < ret)
            ret = diff;
    }
    return ret;
}

int main(int argc, char* argv[]) {
    int test_case_num = 0;
    cin >> test_case_num;
    for(int i = 0; i < test_case_num; ++ i) {
        vector<int> ivec;
        int array_size = 0;
        cin >> array_size;
        for(int j = 0; j < array_size; ++ j) {
            int input = 0;
            cin >> input;
            ivec.push_back(input);
        }
        int m = 0;
        cin >> m;
        cout << solution(ivec, m) << '\n';
    }
    return 0;
}