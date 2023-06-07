#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <unistd.h>
//Still new to this #include thing but someone on was using these to get a word from a text file ¯\_(ツ)_/¯


using namespace std;

string getcwd_string() {
    char buff[PATH_MAX];
    getcwd( buff, PATH_MAX );
    string cwd( buff );
    return cwd;
}

string pathJoin(const string& p1, const string& p2){

    char sep = '/';
    string tmp = p1;

    #ifdef _WIN32
    sep = '\\';
    #endif

    // Add separator if it is not included in the first path:
    if (p1[p1.length() - 1] != sep) {
        tmp += sep;
        return tmp + p2;
    } else {
        return p1 + p2;
    }
}

string getAdjective(){
    string path = pathJoin(pathJoin(getcwd_string(), "WordLists"),"adjectiveList.txt");
    cout << path;
    vector<string> words;
    ifstream file(path);
    string line;
    while (getline(file, line)){
        words.push_back(line);
    }

    cout << words[rand() % words.size()] << endl;
    cout << words[rand() % words.size()] << endl;
    cout << words[rand() % words.size()] << endl;

    return " ";
}