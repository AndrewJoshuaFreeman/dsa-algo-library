#include<iostream>
namespace utilities{
//swaps two values of any of the same type
//uses std::move for move contrcution and move assignment instead of copy
template <typename T>
void swap( T& a, T& b ){
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

//returns min of any two types
template <typename T, typename U>
const T& min( const T& a, const U& b ){
    return a < b ? a : b;
}

//clamp value between max and min
template <typename T>
const T& clamp( const T& value, const T& min, const T& max ){
    if( value < min ) return min;
    if( value > max ) return max;
    return value;
}

}//end of ns utilities
