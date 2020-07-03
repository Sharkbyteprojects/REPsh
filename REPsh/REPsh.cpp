// REPsh.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

string readFile(const string& fileName)
{
    ifstream ifs(fileName.c_str(), ios::in | ios::binary | ios::ate);

    ifstream::pos_type fileSize = ifs.tellg();
    ifs.seekg(0, ios::beg);

    vector<char> bytes(fileSize);
    ifs.read(bytes.data(), fileSize);

    return string(bytes.data(), fileSize);
}

void ReplaceString(std::string& subject, const std::string& search,
    const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
}

int main(int argc, char* argv[])
{
    if (argc > 4) {
        string searchfor(argv[1]);
        string repwi(argv[2]);
        string infile(argv[3]);
        string file= readFile(infile);
        ReplaceString(file, searchfor, repwi);
        ofstream out(argv[4]);
        out << file;
        out.close();
    }
    return 0;
}
