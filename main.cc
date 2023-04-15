#include <fstream>

int main()
{
    int s = 48672638;
    std::string n = "table.h";

    std::ofstream f;
    f.open(n, std::ios::trunc);
    f <<
"#ifndef _h_table\n\
#define _h_table\n\
const int size=" << s <<
";const char*lookup[]={";

    for(int i = 0; i < s; ++i)
    {
        f << (i == 0 ? "" : ",") << "\"" << i << "\"";
    }

    f << "};\n#endif\n";

    return 0;
}

