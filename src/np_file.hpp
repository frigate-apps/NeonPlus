#include <string>

// np ReadFile
// string npFile(string path);

class np_file
{
private:
    std::string path;
    /* data */
public: 
    // std::string path 
    np_file(/* args */);
    ~np_file();
    
    np_file(std::string path);
    std::string Read(std::string path);
    std::string Read();
    void Write(std::string path, std::string buffer);
    void Write(std::string buffer);

    // std::string getPath();
    // void setPath(std::string path);
    // std::string Read(std::string path);
    // std::string Read_();
    // void Write(std::string path, std::string buffer);
    // void Write_(std::string buffer);
};
