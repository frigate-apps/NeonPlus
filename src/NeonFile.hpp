#include <string>

// np ReadFile
// string npFile(string path);

namespace Neon
{

    class File
    {
    private:
        std::string path;
        /* data */
    public: 
        // std::string path 
        File(/* args */);
        ~File();
        
        File(std::string path);
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

}
