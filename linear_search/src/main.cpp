#include "../include/driver_lsearch.h"

using namespace std;

int main (){

    int A[]{ 9, 2, 1, 4, -2, 0, 5, 12 };
    size_t n = sizeof(A)/sizeof(A[0]);

    // The target we are looking for
    int target {5};

    // Show the search array
    cout << ">>> The array: ";
    print( begin(A), end(A) );
    cout << endl;

    int *result = lin_search( begin(A), end(A), target );

    if (result == std::end(A))
        cout << "\t-- Could not find " << target << "." << endl;
    else
        cout << "\t-- Found " << target << " at location "
            << result - begin(A) << endl;

    return 0;
}
