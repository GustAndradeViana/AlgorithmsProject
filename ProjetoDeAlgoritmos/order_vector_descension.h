#ifndef ORDER_VECTOR_DESCENSION_H_INCLUDED
#define ORDER_VECTOR_DESCENSION_H_INCLUDED

void order_descension(std::vector<int>& vec){
    int Max, x;
    for (size_t i = 0; i < vec.size(); ++i) {
        Max = i;
        for (size_t j = i + 1; j < vec.size(); ++j) {
            if (vec[j] > vec[Max]) {
                Max = j;
            }
        }
        x = vec[Max];
        vec[Max] = vec[i];
        vec[i] = x;
    }
}

#endif // ORDER_VECTOR_DESCENSION_H_INCLUDED
