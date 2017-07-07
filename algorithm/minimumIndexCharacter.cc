/*
 * =====================================================================================
 *
 *       Filename:  minimumIndexCharacter.cc
 *
 *    Description: 
 *    Given a string str and another string patt. Find the character in patt that is present at the minimum index in str. If no character of patt is present in str then print ‘No character present’. 
 *
 *        Version:  1.0
 *        Created:  07/07/2017 21:55:47
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
#include <algorithm>
using std::endl;
using std::cout;
using std::cin;
using std::string;

auto solution(const string& first, const string& second) -> bool {
    for(auto c : first)  {
        if (second.find(c) != string::npos) {
            cout << c << endl;
            return true;
        }
    }
    cout << "No character present" << endl;
    return false;
}


int main(int argc, char* argv[]) {
    string str1, str2;
    cin >> str1 >> str2;
    solution(str1, str2);
    return 0;
}
