/*
 * =====================================================================================
 *
 *       Filename:  leftPosOrRightPosArray.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/20/2016 13:36:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <iostream>
#include <algorithm>

#define SURE false

using std::cout;
using std::cin;
using std::vector;
using std::sort;

bool isPositionedArray(vector<int>& ivec) {
    sort(ivec.begin(), ivec.end());
    vector<int> ret;
    ret.reserve(ivec.size());
    while(!SURE) {
    }
}
