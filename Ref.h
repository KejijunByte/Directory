
/*Ref.h--define something
*Developer : https://gitee.com/Kawaiino-Nyanpasu
*            https://github.com/KejijunByte
*/

#include<algorithm>
#include<numeric>
#include<climits>

using byte = unsigned char;
using dbyte = unsigned short;
using word = unsigned int;
using dword = unsigned long long;    
    
#ifndef _CPP_NEWFEATURE_
#define _CPP_NEWFEATURE_
#include<iostream>
#include<fstream>
#include <filesystem>

namespace Cpp{
    namespace IO{
        using std::cin;
        using std::cout;
        using std::endl;
        using std::cerr;
        
    };
    namespace FileIO{
        using std::ofstream;
        using std::ifstream;
        using namespace std::filesystem;
    };
    namespace format{
        using std::oct;
        using std::hex;
        using std::dec;
        using std::ios_base;

    };
};

using std::string;

#endif

