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
        // NeonPlusFile::path = path; 
    }

    File::~File() {
    }

    File::File(std::string path)
    {
        File::path = path;
    }

    std::string File::Read(std::string path)
    {
        File::path = path;
        std::ifstream File;
        File.open(File::path);
        if (!File.is_open())
        {
            File.close();
            return File::path + " " + "File Open Error!\n";
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
        File.open(File::path);
        if (!File.is_open())
        {
            File.close();
            return File::path + " " + "File Open Error!\n";
        }
        //将rdbuf返回的缓冲区转换成string
        std::stringstream buffer;
        buffer << File.rdbuf();
        File.close();
        return buffer.str();
    }

    void File::Write(std::string path, std::string buffer) {
        File::path = path;
        std::fstream ouf(File::path, std::ios_base::out | std::ios_base::binary);
        ouf.write(buffer.data(), strlen(buffer.data()));
        ouf.close();
    }

    void File::Write(std::string buffer) {
        std::fstream ouf(File::path, std::ios_base::out | std::ios_base::binary);
        ouf.write(buffer.data(), strlen(buffer.data()));
        ouf.close();
    }

}


/*
string NeonPlusFile::getPath() {
     return NeonPlusFile::path; 
}
void NeonPlusFile::setPath(string path) {
    NeonPlusFile::path = path;
}

string NeonPlusFile::Read_() {
    ifstream codeFile;
    codeFile.open(NeonPlusFile::path);
    if (!codeFile.is_open())
    {
        codeFile.close();
        return NeonPlusFile::path + " " + "File Open Error!\n";
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
    fstream ouf(NeonPlusFile::path, ios_base::out | ios_base::binary);
    ouf.write(buffer.data(), strlen(buffer.data()));
    ouf.close();
}
*/
