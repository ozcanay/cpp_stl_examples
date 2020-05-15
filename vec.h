#pragma once

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

inline void vectorExamples()
{
    vector<int> m(5, 100); /// creates a vector of 5 items consisting of integer value of 100.
    vector<vector<int>> n(5, vector<int>(5)); /// creates a 5*5 matrix of all zeroes. (Integer is default initialized  to 0.)









}

inline void concatenateVectors()
{
    vector<int> AB;
    vector<int> A;
    vector<int> B;
    AB.reserve( A.size() + B.size() ); /// Pre-allocates memory.
    AB.insert( AB.end(), A.begin(), A.end() );
    AB.insert( AB.end(), B.begin(), B.end() );
}