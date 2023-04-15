#include <iostream>
#include <cmath>
#include <cstring>
#include <filesystem>

#include "table.h"

int main()
{
    //         48672636 fits into 500 mib on windows
    int m = std::strlen("#ifndef _h_table\n#define _h_table\nconst int size=") + static_cast<int>(std::floor(std::log10(size))) + 1 + std::strlen(";const char*lookup[]={") + std::strlen("};\n#endif\n");
    long double sum = 0;
    for(int i = 1; i < (size + 1); ++i)
        sum += std::floor(std::log10(i)) + 4;
    sum -= 1;
    std::cout.precision(0);
    std::cout << std::fixed << sum + m << std::endl << std::filesystem::file_size("table.h") << std::endl << 524288000 << std::endl;
    return 0;
}
