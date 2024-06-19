#include <iostream>
#include "get_largest_vector_element.h"
#include "get_vector_max_min.h"
#include "get_vector_max_min_2.h"
#include "order_vector_ascension.h"
#include "order_vector_descension.h"

using namespace std;

int main()
{
    vector<int> vec = {500, 10, 0, 1};
    order_descension(vec);
    for (size_t i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
    order_ascension(vec);
    for (size_t i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
    return 0;
}
