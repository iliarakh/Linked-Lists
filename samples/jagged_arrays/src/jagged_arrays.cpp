#include <LinkedList.hpp>
#include <Node.hpp>
#include <fstream>
#include <iostream>
#include <string>


int main()
{
    // Variable to hold the file name
    std::string filename;

    // Ask the user for the file name
    std::cout << "Enter the file name: ";
    filename = "numbers.txt";
    // std::cin >> filename;

    // Create an ifstream object to open the file
    std::ifstream file( filename );

    // Check if the file opened successfully
    if ( !file.is_open() ) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return 1;  // Return with an error code
    }

    // Read the file int by int
    int                       a;
    my_linkedlist::LinkedList list;  // this is the list we are creating

    while ( file >> a ) {
        list.emplace_back( a );
    }
    list.print_list();

    // my_linkedlist::print_list(linked_list_var);

    // Close the file
    file.close();

    return 0;  // Return successfully
}
