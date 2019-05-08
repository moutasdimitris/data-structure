#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>
#include "minheap.h"
//#include "minheap.cpp"

using namespace std;
string removeSpaces(string str)
{
    for(int i=0; i<str.length(); i++)
        if(str[i] == ' ') str.erase(i,1);
    return str;
}
int main(int argc,char* argv[]) {
    ofstream output;
    output.open("output.txt");
    string filename;
    ifstream input;
    input.open(argv[1]);
    string line;
    int number;
    while(getline(input,line)){
        if (line.find("BUILD MINHEAP")==0){
           filename=line.substr(13);
           removeSpaces(filename);
           ifstream in;
           in.open(filename);
           while (getline(in,line)){
                minheap::insert(stoi(line));
           }
           in.close();
        }else if (line.find("BUILD MAXHEAP")==0){
            filename=line.substr(13);
            removeSpaces(filename);
        }else if (line.find("BUILD AVLTREE")==0){

        }else if (line.find("BUILD GRAPH")==0){

        }else if (line.find("GETSIZE MINHEAP")==0){
            int min=minheap::getSize();
            output<<"Size of MinHeap is "<<min<<endl;
        }else if (line.find("GETSIZE MAXHEAP")==0){

        }else if (line.find("GETSIZE AVLTREE")==0){

        }else if (line.find("GETSIZE GRAPH")==0){

        }else if (line.find("GETSIZE HASHTABLE")==0){

        }else if (line.find("FINDMIN MINHEAP")==0){
            int s=minheap::min();
            output<<"Min for MinHeap is "<<s<<endl;
        }else if (line.find("FINDMIN MAXHEAP")==0){

        }else if (line.find("FINDMIN AVLTREE")==0){

        }else if (line.find("SEARCH AVLTREE")==0){

        }else if (line.find("SEARCH HASHTABLE")==0){

        }else if (line.find("COMPUTESHORTESTPATH GRAPH")==0){

        }else if (line.find("COMPUTESPANNINGTREE GRAPH")==0){

        }else if (line.find("FINDCONNECTEDCOMPONENTS GRAPH")==0){

        }else if (line.find("INSERT MAXHEAP")==0){

        }else if (line.find("INSERT MINHEAP")==0){
            number=stoi(line.substr(13));
            minheap::insert(number);
        }else if (line.find("INSERT AVLTREE")==0){

        }else if (line.find("INSERT HASHTABLE")==0){

        }else if (line.find("INSERT GRAPH")==0){

        }else if (line.find("DELETEMIN MINHEAP")==0){
            minheap::deleteMin();
            output<<"Delete Min from MinHeap"<<endl;
        }else if (line.find("DELETEMAX MAXHEAP")==0){

        }else if (line.find("DELETE AVLTREE")==0){

        }else if (line.find("DELETE HASHTABLE")==0){

        }else if (line.find("DELETE GRAPH")==0){

        }
    }
    input.close();
    output.close();
    return 0;
}