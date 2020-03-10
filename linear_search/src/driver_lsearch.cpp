#include "../include/driver_lsearch.h"

int* lin_search (int *first, int *last, short target){

    // Traver the array
        while(first != last){

            // Found the target
            if (target == (*first))
                // Returns the element pointer
                return first;

            first++;
        }

        // Failed
        return last;
}

/// Prints out the entire array passed as argument
void print (int *first, int *last){
    std::cout << "[ ";

    while (first != last)
        std::cout << *first++ << " ";

    std::cout << "]";
}