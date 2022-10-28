#include <iostream>
#include <filesystem>
#include <string.h>
#include <vector>

using std::system;
using namespace std;
namespace fs = std::filesystem;

int main() {
    string contest_name;
    cout << "Input contest name : ";
    cin >> contest_name;

    fs::create_directory(contest_name)?
    cout << "created directory - " << contest_name << endl :
    cout << "create_directory() failed" << endl;

    string copy_cmd;
    vector<string> level={"_a", "_b", "_c", "_d"};
    for(int i=0;i<4;i++){
        copy_cmd = "";
        copy_cmd += "copy .\\template.cpp .\\"+contest_name+"\\"+contest_name+level[i]+".cpp";
        cout << copy_cmd << endl;
        system(copy_cmd.c_str());
    }

    

    return EXIT_SUCCESS;
}