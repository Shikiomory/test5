#include <iostream>
#include "complex_num.h"

// Main function
int main(){
    // Create two complex numbers z and w
    complex_num z(10.0,5.0); 
    complex_num w(-2.0);

    // Print both complex numbers
    std::cout << "    z = ";
    z.print(std::cout);
    std::cout << std::endl;
    std::cout << "    w = ";
    w.print(std::cout);
    std::cout << std::endl << std::endl;

    complex_num v;
    
    // Addition
    std::cout << "z + w = ";
    v = z + w;   
    v.print(std::cout);
    std::cout << std::endl;

    // Subtraction
    std::cout << "z - w = ";
    v = z - w;   
    v.print(std::cout);
    std::cout << std::endl;
    
    // Multiplication
    std::cout << "z * w = ";
    v = z * w;   
    v.print(std::cout);
    std::cout << std::endl;
    
    // Division
    std::cout << "z / w = ";
    v = z / w;   
    v.print(std::cout);

    std::cout << std::endl << std::endl << std::flush;
    return 0;
}