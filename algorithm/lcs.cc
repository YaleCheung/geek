/*
 * =====================================================================================
 *
 *       Filename:  lcs.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/14/16 05:10:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

int lcs(const string& str1, const string& str2, int m, int n) {
    if (m == 0 || n == 0)
        return 0;    
    if (str1[m - 1] == str2[n - 1])
        return 1 + lcs(str1, str2, m - 1, n - 1);
    else 
        return max(lcs(str1, str2, m, n - 1), lcs(str1, str2, m - 1, n));
}

int main(int argc, char* argv[]) {
    string x = "AGGTAB";
    string y = "GXTXAYB";
    cout << lcs(x, y, x.size(), y.size()) << endl;
    return 0;
}
