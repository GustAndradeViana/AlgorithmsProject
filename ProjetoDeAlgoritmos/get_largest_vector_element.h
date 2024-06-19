#ifndef GET_LARGEST_VECTOR_ELEMENT_H_INCLUDED
#define GET_LARGEST_VECTOR_ELEMENT_H_INCLUDED

#include <vector>

//vector<int> vec = {1, 2, 3, 400, 5, 6, 7, 8, 9, 10};
int Max(const std::vector<int>& A)
{
    int Temp;
    Temp = A[0];
    for (size_t i = 1; i < A.size(); ++i)
    {
        if (Temp < A[i])
        {
            Temp = A[i];
        }
    }
    return Temp;
}

#endif // GET_LARGEST_VECTOR_ELEMENT_H_INCLUDED
