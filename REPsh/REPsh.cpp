// REPsh.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include "help.h";
#include "functions.h";

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
        cout << file << endl;
        out.close();
    }else if(argc > 3){
        string file;
        cin >> file;
        string searchfor(argv[1]);
        string repwi(argv[2]);
        ReplaceString(file, searchfor, repwi);
        ofstream out(argv[3]);
        out << file;
        cout << file << endl;
        out.close();
    }
    else if (argc > 2) {
        string file;
        cin >> file;
        string searchfor(argv[1]);
        string repwi(argv[2]);
        ReplaceString(file, searchfor, repwi);
        cout << file << endl;
    }
    else {
        cout << "RepSH\n<c> Sharkbyteprojects\n" << endl;
        cout << help << endl;
    }
    return 0;
}
