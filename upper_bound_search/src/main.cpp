#include "../include/ub_search.h"

int main (){

    int A[]{ 2, 4, 6, 7, 9, 10, 11, 14, 18 };

    // It evaluates the number of elements in the array 
    size_t sz{ sizeof(A)/sizeof(A[0]) };
    // The target we are looking for
    int target{ 20 };
    // The first element pointer
    int *first{A};
    // The last element pointer
    int *last{A+sz};

    // It calls the searching function
    int *result = ubsearch (first, last, target);

    std::cout << ">>> Original array: ";

    // It calls the printing function
    print (A, sz);

    // If the target wasn't found
    if ((*result) != target)

        // It prints an error message
        std::cout << ">>> Sorry, could not find \"" << target << "\" in the array.\n";
    
    // If the target was found
    else
    
        // It prints the target value and its location (index) in the array
        std::cout << ">>> Found \"" << target << "\" at location " << result << ".\n";

    return 0;
}