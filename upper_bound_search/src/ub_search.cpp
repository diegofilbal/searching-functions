#include "../include/ub_search.h"

int* lbsearch (int *first, int *last, int target){

    // Holds the number of elements 
    int count = last - first;

    // It holds the current candidate for upper bound
    int* candidate = last;
    
    // Keeps running across the array while the array is not done
    while (count != 0){

        // Auxiliar variable to compute the middle element pointer
        int step {count / 2};

        // It holds the middle element pointer
        int *mid {first + step};

        // Middle element is less than the target
        // or found the target but it might not be the upper bound
        if ((*mid) <= target){

            // Set the candidate to the middle element pointer
            candidate = mid;

            // Moves right
            first = mid + 1;
            count = last - first; 
            
        }

        // The target is greater than the middle element
        else{

            // It resizes the current array turning it into the right half sub array
            count = step;
        }
    }

    return candidate;
}

void print (int *A, size_t sz){

    std::cout << "[ ";

    // It runs across the array 
    for (size_t i{0} ; i < sz ; ++i)

        // It prints out the current value 
        std::cout << A[i] << " ";

    std::cout << "]\n";
}