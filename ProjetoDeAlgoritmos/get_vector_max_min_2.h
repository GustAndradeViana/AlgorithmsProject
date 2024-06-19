#ifndef GET_VECTOR_MAX_MIN_2_H_INCLUDED
#define GET_VECTOR_MAX_MIN_2_H_INCLUDED

// MORE OPTMIZED (PAIRS CHECK)

void maxMin2(std::vector<int>& vec, int *Max, int *Min){
    int i, ringEnd, n;
    n = vec.size();

    if ((n & 1) > 0){
        vec[n] = vec[n - 1];
        ringEnd = n;
    } else {
        ringEnd = n - 1;
        if (vec[0] > vec[1]) {
            *Max = vec[0];
            *Min = vec[1];
        } else {
            *Max = vec[1];
            *Min = vec[0];
        }
        i = 3;
        while (i <= ringEnd){
            if (vec[i - 1] > vec[i]){
                if (vec[i - 1] > *Max){
                    *Max = vec[i - 1];
                }
                if (vec[i] < *Min){
                    *Min = vec[i];
                }
            } else {
            if (vec[i - 1] < *Min){
                *Min = vec[i - 1];
            }
            if (vec[i] > *Max){
                *Max = vec[i];
            }
            }
            i += 2;
        }
    }
}

#endif // GET_VECTOR_MAX_MIN_2_H_INCLUDED
