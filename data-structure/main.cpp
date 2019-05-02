#include <iostream>
#include <fstream>

using namespace std;
int main(int argc,char* argv[]) {
    string output="output.txt";
    ifstream input;
    input.open(argv[0]);
    string line;
    while(getline(input,line)){
        cout<<line<<endl;
    }
    return 0;
}