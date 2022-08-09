#include <iostream>
#include <fstream>
#include <string>

std::string read_file(std::string path);
void        check_input(int argc);
void        create_file(std::string path, std::string text);
std::string replace_file(std::string text, std::string s1, std::string s2);

int main(int argc, char **argv)
{
    check_input(argc);

    std::string path(argv[1]);
    std::string text;
    text = read_file(path);
    
    text = replace_file(text, std::string(argv[2]), std::string(argv[3]));

    create_file(path, text);
    return (0);
}

void check_input(int argc)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments." << std::endl;
        exit(1);
    }
}

std::string read_file(std::string path)
{
    std::ifstream   infile;
    std::string     infile_contents;
    std::string     temp;

    infile.open(path);
    if (!infile.is_open())
    {
        std::cout << "Can't open the given path." << std::endl;
        exit (1);
    }
    while (infile)
       infile_contents += infile.get();
    infile_contents.pop_back();
    return (infile_contents);
}

std::string replace_file(std::string text, std::string s1, std::string s2)
{
    std::string::size_type current = 0;

    while ((current = text.find(s1, current)) != std::string::npos)
    {
        text.erase(current, s1.length());
        text.insert(current, s2);
        current += s2.length();
    }
    return (text);
}

void create_file(std::string path, std::string text)
{
    std::ofstream outfile(path += ".replace");
    outfile << text;
    outfile.close();
}