#include <iostream>

struct my_struct_t {  // create a struct called my_struct_t
    int   num;        // create a blueprint for a int called num
    float real;       // create a blueprint for flot called real

    friend std::ostream & operator<<( std::ostream & lhs, const my_struct_t & printed_struct )
    {
        lhs << "num: " << printed_struct.num << "\n";
        lhs << "real: " << printed_struct.real << "\n";
        return lhs;
    }
};

int main()  // main function
{
    my_struct_t my_struct;  // creates a real struct called my struct
    my_struct.num  = 1;     // used the . to call "num" from my_struct and assign the value to 1
    my_struct.real = 1.2f;  // used the . to call "real" from my_struct and assign the value to 1.2

    std::cout << my_struct << "\n";  // print out the value

    // This line of code is a declaration. It’s telling the compiler
    // that we’re going to use a variable named my_struct_heap_ptr, and this variable
    // is a pointer to a type called my_struct_t
    my_struct_t * my_struct_heap_ptr;

    // using the new operator to create a new instance of my_struct_t on the heap,
    // and then it assigns the address of this new instance to the my_struct_heap_ptr pointer.
    my_struct_heap_ptr       = new my_struct_t;
    my_struct_heap_ptr->num  = 11;     // using the -> to access the num member from my_struct_heap_ptr
    my_struct_heap_ptr->real = 1.22f;  // using the -> to access the real member from my_struct_heap_ptr

    std::cout << *my_struct_heap_ptr << "\n";  // print out the value
    std::cout << "Double size: " << sizeof( double ) << " bytes " << "my_struct siize: " << sizeof( my_struct_t )
              << " bytes\n";
    std::cout << "my_struct as double: " << *(double *)my_struct_heap_ptr << "\n";

    // This line of code is a declaration. It’s telling the compiler
    // that we’re going to use a variable named my_struct_heap_ptr_2, and this
    // variable is a pointer to a type called my_struct_t
    my_struct_t * my_struct_heap_ptr_2;

    // using the new operator to create a new instance of my_struct_t on the heap,
    // and then it assigns the address of this new instance to the my_struct_heap_ptr pointer.
    my_struct_heap_ptr_2           = new my_struct_t;
    ( *my_struct_heap_ptr_2 ).num  = 22;      // here we de-refrence my_struct_heap_ptr_2 then call num using "."
    ( *my_struct_heap_ptr_2 ).real = 22.22f;  // here we de-refrence my_struct_heap_ptr_2 then call real using "."

    std::cout << *my_struct_heap_ptr_2 << "\n";  // prints out the value

    delete my_struct_heap_ptr;    // sinces its heap it doesnt get deallocted so this manually deallocates it
    delete my_struct_heap_ptr_2;  // sinces its heap it doesnt get deallocted so this manually deallocates it
}