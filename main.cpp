#include <highfive/H5File.hpp>
#include <stdlib.h>
#include <string>

#define bug 1

using namespace HighFive;

int main(int argc, char** argv) {
    if (argc != 2) return 0;
    File file(argv[1], File::ReadOnly);

    Group g = file.getGroup("/");
    for (auto elem : g.listAttributeNames()) {
        std::cout << elem << std::endl;

        auto attribute = g.getAttribute(elem);
        std::string read;

#if bug
        if (elem != "model_config") continue;
#endif

        attribute.read(read);
        std::cout << read << std::endl;
    }
    return 0;
}
