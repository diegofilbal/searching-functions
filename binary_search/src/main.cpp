#include "../include/bin_search.h"

using namespace std;

int main (){

    int A[]{ 2, 4, 6, 7, 9, 10, 11, 14, 18 };

    // It evaluates the number of elements in the array 
    size_t sz{ sizeof(A)/sizeof(A[0]) };
    // The target we are looking for
    int target{ 20 };

    // It calls the searching function
    int *result = bsearch (begin(A), end(A), target);

    std::cout << ">>> Original array: ";

    // It calls the printing function
    print (A, sz);

    // If the target wasn't found
    if (result == end(A))

        // It prints an error message
        cout << ">>> Sorry, could not find \"" << target << "\" in the array.\n";
    
    // If the target was found
    else
    
        // It prints the target value and its location (index) in the array
        cout << ">>> Found \"" << target << "\" at location " << result << ".\n";

    return 0;
}
