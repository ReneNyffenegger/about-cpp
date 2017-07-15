#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {

//  Compile with g++ -std=c++11 or g++ -std=c++14 to
//  have different output.
//  See also https://stackoverflow.com/a/7132549/180275
    std::cout << std::setw(6) << argv[0] << ": " <<  __cplusplus << std::endl;
}
