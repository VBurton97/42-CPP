#pragma once

#include <iostream>

template<typename T>
void    iter(T *array, size_t len, void (*f)(T &target)){
    for (size_t i = 0; i < len; i++){
        f(array[i]);
    }
}
