#include "utilities.hpp"
#include <iostream>

int main(){
    int x = 5;
    int y = 7;

    std::cout << "x: " << x << ", y: " << y << '\n';

    utilities::swap( x, y );

    std::cout << "x: " << x << ", y: " << y << '\n';

    std::cout << utilities::min( x, y ) << '\n';
   
}
