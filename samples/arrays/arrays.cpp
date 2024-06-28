#include <iostream>
// check if first position is > then second position if so swap then itterate through list until greatest value is
// at the back go back to front and do again until greatest values are at the back in decending order
//

void bubblesort( int array[], int arrayLength )
{

    int i;

    // Bad way
    // for ( int j = 0; j < arrayLength; j++ ) {

    // good way
    int swap = true;
    while ( swap == true ) {
        swap = false;
        for ( i = 0; i < arrayLength - 1; i++ ) {
            if ( array[i] > array[i + 1] ) {
                std::swap( array[i], array[i + 1] );
                swap = true;
            }
        }
    }
}

int main()
{

    // int array[]     = { 35, 6, 1, 9, 11 };
    int array[]     = { 35, 11, 9, 6, 1, 1, 5, 2, 4, 7, 45, 6, 23, 4, 236, 12, 34 };
    int arrayLength = sizeof( array ) / sizeof( array[0] );

    for ( int i = 0; i < arrayLength; i++ ) {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    bubblesort( array, arrayLength );

    // bubblesort( array, arrayLength );

    for ( int i = 0; i < arrayLength; i++ ) {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
