#include <highfive/H5File.hpp>
#include <stdlib.h>
#include <string>

#define bug 1

using namespace HighFive;
int main(int argc, char** argv) {
    if (argc != 2) return 1;
    File file(argv[1], File::ReadOnly);

    Group g = file.getGroup("/");
    for (auto attribute_name : g.listAttributeNames()) {
        std::cout << attribute_name << std::endl;

        auto attribute = g.getAttribute(attribute_name);
        std::string read;

#if bug
        if (attribute_name != "model_config") continue;
#endif

        attribute.read(read);
        std::cout << read << std::endl;
    }
    return 0;
}
