#include <exception>
#include <iostream>
#include <stdexcept>

// this function moves all of the elements to the left after(and including) the given index
void shift( int dst[], int const index, int const insertCount, int const arrayLength )
{
    if ( index < 0 || index > insertCount ) {  // Change the condition here
        throw std::runtime_error( "INDEX OUT OF BOUNDS" );
    }
    if ( insertCount > arrayLength ) {
        throw std::runtime_error( "NOT ENOUGH SPACE TO INSERT" );
    }
    for ( int i = insertCount; i > index; i-- ) {
        dst[i] = dst[i - 1];
    }
}

// assumes dst is sorted[0,insertCount]
void insert( int dst[], const int val, const int insertCount, const int arrayLength )
{
    if ( insertCount > arrayLength ) {
        throw std::runtime_error( "NOT ENOUGH SPACE TO INSERT" );
    }

    int i;

    // clang-format off
    for ( i = insertCount - 1; ( i > -1 && dst[i] > val ); i-- );
    // clang-format on

    shift( dst, i + 1, insertCount, arrayLength );
    dst[i + 1] = val;
}

// this function takes in an integer array src and copys it sorted into an output array dst
// this functions relys on a "helper" function called insert that will insert a single element in a sorted array
// assumes dst length is greater than or equal to src
void insertsort( int const src[], int dst[], int const arrayLength )
{
    for ( int insertCount = 0; insertCount < arrayLength; insertCount++ ) {
        insert( dst, src[insertCount], insertCount, arrayLength );
    }
}

// this function takes in an integer array src and copys it sorted into an output array dst
// this functions relys on a "helper" function called insert that will insert a single element in a sorted array
// void insertsort( int const src[], int dst[], int const arrayLength )
// {
//     int i;
//     for ( i = 1; i < arrayLength; i++ ) {
//         int value = array[i];
//         int j     = i - 1;
//         while ( j >= 0 && array[j] > value ) {
//             array[j + 1] = array[j];
//             j            = i - 1;
//         }
//         array[j + 1] = value;
//     }
// }

void bubblesort( int array[], int arrayLength )
{

    int i;

    // Bad way
    // for ( int j = 0; j < arrayLength; j++ ) {

    // good way
    bool swap;
    do {
        swap = false;
        for ( i = 0; i < arrayLength - 1; i++ ) {
            if ( array[i] > array[i + 1] ) {
                std::swap( array[i], array[i + 1] );
                swap = true;
            }
        }
    } while ( swap );
}

int main()
{

    try {
        std::string my_str;

        // int array[]     = { 35, 6, 1, 9, 11 };
        constexpr int src[]       = { 35, 11, 9, 6, 1, 1, 5, 2, 4, 7, 45, 6, 23, 4, 236, 12, 34 };
        constexpr int arrayLength = sizeof( src ) / sizeof( src[0] );
        int           dst[arrayLength];

        for ( int i = 0; i < arrayLength; i++ ) {
            std::cout << src[i] << " ";
        }
        std::cout << "\n";

        insertsort( src, dst, arrayLength );  // call the insertsort function

        // print the sorted array
        for ( int i = 0; i < arrayLength; i++ ) {
            std::cout << dst[i] << " ";
        }
        std::cout << "\n";

        return 0;
    }
    catch ( std::exception const & err_msg ) {
        std::cout << err_msg.what() << "\n";
    }

    std::cout << "Goodbye\n";

    return 0;
}
