#include "NeonFile.hpp"
#include <sstream>
#include <fstream>

// using namespace std;

/*
    Neon
        File
            path (xxxx)
            name (xxxx)
            Read   (xxxx)
            Write  (xxxx, xxxx)
*/

namespace Neon
{
    File::File(/* args */) {
        // NeonPlusthis->path = path; 
    }

    File::~File() {
    }
    
    File::File(std::string path)
    {
        this->path = path;
    }

    std::string File::Read(std::string path)
    {
        this->path = path;
        std::ifstream File;
        File.open(this->path);
        if (!File.is_open())
        {
            File.close();
            return this->path + " " + "File Open Error!\n";
        }
        //将rdbuf返回的缓冲区转换成string
        std::stringstream buffer;
        buffer << File.rdbuf();
        File.close();
        return buffer.str();
    }

    std::string File::Read()
    {
        std::ifstream File;
        File.open(this->path);
        if (!File.is_open())
        {
            File.close();
            return this->path + " " + "File Open Error!\n";
        }
        //将rdbuf返回的缓冲区转换成string
        std::stringstream buffer;
        buffer << File.rdbuf();
        File.close();
        return buffer.str();
    }

    void File::Write(std::string path, std::string buffer) {
        this->path = path;
        std::fstream ouf(this->path, std::ios_base::out | std::ios_base::binary);
        ouf.write(buffer.data(), strlen(buffer.data()));
        ouf.close();
    }

    void File::Write(std::string buffer) {
        std::fstream ouf(this->path, std::ios_base::out | std::ios_base::binary);
        ouf.write(buffer.data(), strlen(buffer.data()));
        ouf.close();
    }
}


/*
string NeonPlusFile::getPath() {
     return NeonPlusthis->path; 
}
void NeonPlusFile::setPath(string path) {
    NeonPlusthis->path = path;
}

string NeonPlusFile::Read_() {
    ifstream codeFile;
    codeFile.open(NeonPlusthis->path);
    if (!codeFile.is_open())
    {
        codeFile.close();
        return NeonPlusthis->path + " " + "File Open Error!\n";
    }
    //将rdbuf返回的缓冲区转换成string
    std::stringstream codeStream;
    codeStream << codeFile.rdbuf();
    codeFile.close();
    return codeStream.str();
    //储存文件代码至Lexer
    // std::string code;
    // std::string remainder = code = codeStream.str();
}
string NeonPlusFile::Read(string path) {
    ifstream File;
    File.open(path);
    if (!File.is_open())
    {
        File.close();
        return path + " " + "File Open Error!\n";
    }
    //将rdbuf返回的缓冲区转换成string
    std::stringstream buffer;
    buffer << File.rdbuf();
    File.close();
    return buffer.str();
    //储存文件代码至buffer
    // std::string code;
    // std::string remainder = code = codeStream.str();
}

void NeonPlusFile::Write(string path, string buffer) {
    fstream ouf(path, ios_base::out | ios_base::binary);
    ouf.write(buffer.data(), strlen(buffer.data()));
    ouf.close();
}
void NeonPlusFile::Write_(string buffer) {
    fstream ouf(NeonPlusthis->path, ios_base::out | ios_base::binary);
    ouf.write(buffer.data(), strlen(buffer.data()));
    ouf.close();
}
*/
