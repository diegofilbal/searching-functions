#include "../include/driver_lsearch.h"

int main (){

    int A[]{ 9, 2, 1, 4, -2, 0, 5, 12 };
    size_t n = sizeof(A)/sizeof(A[0]);

    // The target we are looking for
    int target {5};

    // Show the search array
    std::cout << ">>> The array: ";
    print( std::begin(A), std::end(A) );
    std::cout << std::endl;

    int *result = lin_search( std::begin(A), std::end(A), target );

    if (result == std::end(A))
        std::cout << "\t-- Could not find " << target << "." << std::endl;
    else
        std::cout << "\t-- Found " << target << " at location "
            << result - std::begin(A) << std::endl;

    return 0;
}
