#ifndef GET_VECTOR_MAX_MIN_H_INCLUDED
#define GET_VECTOR_MAX_MIN_H_INCLUDED

#include <vector>

// MORE SIMPLE AND LESS ERROR CHANCE

void maxMin(const std::vector<int>& vec, int *Max, int *Min){
    *Max = vec[0];
    *Min = vec[0];
    for (size_t i = 1; i < vec.size(); i++){
        if (vec[i] > *Max){
            *Max = vec[i];
        }
        if (vec[i] < *Min){
            *Min = vec[i];
        }
    }
}

#endif // GET_VECTOR_MAX_MIN_H_INCLUDED
