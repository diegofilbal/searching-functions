#include "../include/lb_search.h"

int* lbsearch (int *first, int *last, int target){

    // Holds the number of elements 
    int count = last - first;

    // It holds the current candidate for lower bound
    int* candidate = last;
    
    // Keeps running across the array while the array is not done
    while (count != 0){

        // Auxiliar variable to compute the middle element pointer
        int step {count / 2};

        // Holds the middle element pointer
        int *mid {first + step};

        // Middle element is greater than the target
        // or found the target but it might not be the lower bound
        if ((*mid) >= target){

            // Set the candidate to the middle element pointer
            candidate = mid;

            // Moves left
            count = step;
        }

        // The target is greater than the middle element
        else{

            // Resizes the current array turning it into the right half sub array
            first = mid + 1;
            count = last - first; 
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