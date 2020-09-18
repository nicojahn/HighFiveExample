#include <highfive/H5File.hpp>
#include <stdlib.h>
#include <string>

using namespace HighFive;
int main() {
    File file("main.h5", File::ReadOnly | File::Debug);
    for (auto elem : file.listAttributeNames()) {
        std::cout << elem << std::endl;
    }
    return 0;
}
