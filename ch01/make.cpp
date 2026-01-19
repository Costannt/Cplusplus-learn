#include <cstdlib>
#include <string>

int main() {
    for (int i = 1; i <= 25; ++i) {
        std::string cmd = "mkdir ex1." + std::to_string(i);
        std::system(cmd.c_str());
    }
    return 0;
}