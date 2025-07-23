#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string replaceAll(std::string text, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    while (true) {
        size_t found = text.find(s1, pos);
        if (found == std::string::npos) {
            result.append(text, pos, text.size() - pos);
            break;
        }
        result.append(text, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    return result;
}

int main(int argc, char** argv) {
    if (argc != 4 || !*argv[2] || !*argv[3]) {
        std::cerr << "Usage: ./sedForLosers <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::ifstream ifs(argv[1]);
    if (!ifs) {
        std::cerr << "Error: cannot open input file" << std::endl;
        return 1;
    }
    std::ostringstream oss;
    oss << ifs.rdbuf();
    std::string content = oss.str();
    ifs.close();

    std::string replaced = replaceAll(content, argv[2], argv[3]);
    std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
    if (!ofs) {
        std::cerr << "Error: cannot open output file" << std::endl;
        return 1;
    }
    ofs << replaced;
    return 0;
}
