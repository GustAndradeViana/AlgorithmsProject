#ifndef ORDER_VECTOR_ASCENSION_H_INCLUDED
#define ORDER_VECTOR_ASCENSION_H_INCLUDED

void order_ascension(std::vector<int>& vec){
    int Min, x;
    for (size_t i = 1; i < vec.size(); i++){
        Min = i;
        for (size_t j = i + 1; j <= vec.size(); j++){
            if (vec[j - 1] < vec[Min - 1]){
                Min = j;
            }
        }
        x = vec[Min - 1];
        vec[Min - 1] = vec[i - 1];
        vec[i - 1] = x;
    }
}

#endif // ORDER_VECTOR_ASCENSION_H_INCLUDED
