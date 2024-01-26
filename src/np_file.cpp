#include "np_file.hpp"
#include <sstream>
#include <fstream>

// using namespace std;

/*
    源码文件    
    OtneReadFile
    npFile.ReadFile("xxxx");
    npFile.WriteFile("xxxx", xxxx);
    std::string path 

    npFile
        Read
        Write
*/

np_file::np_file(/* args */) {
     // np_file::path = path; 
}

np_file::~np_file() {
}

np_file::np_file(std::string path)
{
    np_file::path = path;
}

std::string np_file::Read(std::string path)
{
    np_file::path = path;
    std::ifstream File;
    File.open(np_file::path);
    if (!File.is_open())
    {
        File.close();
        return np_file::path + " " + "File Open Error!\n";
    }
    //将rdbuf返回的缓冲区转换成string
    std::stringstream buffer;
    buffer << File.rdbuf();
    File.close();
    return buffer.str();
}

std::string np_file::Read()
{
    std::ifstream File;
    File.open(np_file::path);
    if (!File.is_open())
    {
        File.close();
        return np_file::path + " " + "File Open Error!\n";
    }
    //将rdbuf返回的缓冲区转换成string
    std::stringstream buffer;
    buffer << File.rdbuf();
    File.close();
    return buffer.str();
}

void np_file::Write(std::string path, std::string buffer) {
    np_file::path = path;
    std::fstream ouf(np_file::path, std::ios_base::out | std::ios_base::binary);
    ouf.write(buffer.data(), strlen(buffer.data()));
    ouf.close();
}

void np_file::Write(std::string buffer) {
    std::fstream ouf(np_file::path, std::ios_base::out | std::ios_base::binary);
    ouf.write(buffer.data(), strlen(buffer.data()));
    ouf.close();
}




/*
string np_file::getPath() {
     return np_file::path; 
}
void np_file::setPath(string path) {
    np_file::path = path;
}

string np_file::Read_() {
    ifstream codeFile;
    codeFile.open(np_file::path);
    if (!codeFile.is_open())
    {
        codeFile.close();
        return np_file::path + " " + "File Open Error!\n";
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
string np_file::Read(string path) {
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

void np_file::Write(string path, string buffer) {
    fstream ouf(path, ios_base::out | ios_base::binary);
    ouf.write(buffer.data(), strlen(buffer.data()));
    ouf.close();
}
void np_file::Write_(string buffer) {
    fstream ouf(np_file::path, ios_base::out | ios_base::binary);
    ouf.write(buffer.data(), strlen(buffer.data()));
    ouf.close();
}
*/
