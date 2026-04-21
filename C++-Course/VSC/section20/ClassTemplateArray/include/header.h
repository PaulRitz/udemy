/**
 * @file main.cpp
 * @brief showcase of class templates: template class array
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p03 ClassTemplateArray
 * @brief showcase of class templates: template class array
 * @}
 */
/**
 * @addtogroup s20_p03
 * @{
 */

#include <iostream>

template <typename T, int N>
class Array{
    int size {N};           // how do we get the N
    T values [N];         // the N needs to be known at compile time!
    
    friend std::ostream &operator<<(std::ostream &out, const Array &source){
        out << "[ ";
        for(const auto &val : source.values){
            out << val << " ";
        }
        out << "]" << std::endl;
        return out;
    }

public:
    Array() = default;
    Array(T init_val) {
        for (auto &item : this->values){
            item = init_val;
        }
    }
    void fill(T val){
        for(auto &item : this->values){
            item = val;
        }
    }
    int get_size() const {
        return this->size;
    }
    T &operator[](int index){
        return this->values[index];
    }
};
/** @} */