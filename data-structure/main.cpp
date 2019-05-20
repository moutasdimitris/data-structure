#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>
#include "minheap.h"
#include "minheap.cpp"
#include "maxheap.h"
#include "maxheap.cpp"
#include "hashtable.h"
#include "hashtable.cpp"

using namespace std;

int main(int argc,char* argv[]) {
    string filename,line;
    int number,line_cntr=0,q=0;
    ofstream output;
    ifstream input,input1,temp_in;
    minheap a;
    maxheap b;
    output.open("output.txt");
    input.open(argv[1]);
    hashtable hash(line_cntr);
    while(getline(input,line)){
        if (line.find("BUILD MINHEAP")==0){
            output<<"|------------------------|"<<endl;
            filename=line.substr(14);
            input1.open(filename);
            if (!input1){
                output<<"Fail to open file"<<endl;
            }else{
              while(getline(input1,line)){
                  int j=stoi(line);
                  a.insert(j);
               }
           }
           // for (int i=0;i< a.getSize();i++){
           // output<<"Index "<<i<<" - "<<a.print(i)<<endl;}
            output<<"Build MinHeap -> OK\n";
            output<<"|------------------------|"<<endl;
            input1.close();
        }else if (line.find("BUILD MAXHEAP")==0){
            filename=line.substr(14);
            input1.open(filename);
                while(getline(input1,line)){
                    int k=stoi(line);
                    b.insert(k);
                }
           // for (int i=0;i< b.getSize();i++){
             //   output<<"Index "<<i<<" - "<<b.print(i)<<endl;}
            output<<"Build MaxHeap -> OK"<<endl;
            output<<"|------------------------|"<<endl;
            input1.close();
        }else if (line.find("BUILD AVLTREE")==0){
            //output<<"|------------------------|"<<endl;
        }else if (line.find("BUILD GRAPH")==0){
           // output<<"|------------------------|"<<endl;
        }else if (line.find("BUILD HASHTABLE")==0){
            filename=line.substr(16);
            input1.open(filename);
                while(getline(input1,line)){
                    int p=stoi(line);
                    x[q]=p;
                    q++;
                }

              for (int i =0;i<line_cntr;i++){
                  hash.insert(x[i]);
              }
                //hash.print();
            output<<"Build HashTable -> OK"<<endl;
            output<<"|------------------------|"<<endl;
            input1.close();
        }else if (line.find("GETSIZE MINHEAP")==0){
            output<<"Size of MinHeap is "<<a.getSize()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE MAXHEAP")==0){
            output<<"Size of MaxHeap is "<<b.getSize()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE AVLTREE")==0){
          //  output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE GRAPH")==0){
           // output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE HASHTABLE")==0){
            output<<"Size of HashTable is "<<hash.getSize()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("FINDMIN MINHEAP")==0){
            output<<"Min for MinHeap is "<<a.find_min()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("FINDMIN MAXHEAP")==0){
            output<<"Min for MaxHeap is "<<b.find_min()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("FINDMIN AVLTREE")==0){
           // output<<"|------------------------|"<<endl;
        }else if (line.find("SEARCH AVLTREE")==0){
          //  output<<"|------------------------|"<<endl;
        }else if (line.find("SEARCH HASHTABLE")==0){
            filename=line.substr(16);
            number=stoi(filename);
            bool result=hash.search(number);
            if (result){
                output<<"Search "<<number<<" -> SUCCESS"<<endl;
            }else{
                output<<"Search "<<number<<" -> FAILURE"<<endl;
            }
            output<<"|------------------------|"<<endl;
        }else if (line.find("COMPUTESHORTESTPATH GRAPH")==0){
           // output<<"|------------------------|"<<endl;
        }else if (line.find("COMPUTESPANNINGTREE GRAPH")==0){
           // output<<"|------------------------|"<<endl;
        }else if (line.find("FINDCONNECTEDCOMPONENTS GRAPH")==0){
          //  output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT MAXHEAP")==0){
            filename=line.substr(14);
            number=stoi(filename);
            b.insert(number);
            output<<"Insert "<<number<<"..."<<endl;
          //  for (int i=0;i< b.getSize();i++){
            //    output<<"Index "<<i<<" - "<<b.print(i)<<endl;}
            output<<"Insert "<<number<<" -> OK"<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT MINHEAP")==0){
            filename=line.substr(14);
            number=stoi(filename);
            a.insert(number);
            output<<"Insert "<<number<<"..."<<endl;
            //for (int i=0;i< a.getSize();i++){
              //  output<<"Index "<<i<<" - "<<a.print(i)<<endl;}
            output<<"Insert "<<number<<" -> OK"<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT AVLTREE")==0){
          //  output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT HASHTABLE")==0){
            filename=line.substr(16);
            number=stoi(filename);
           // hash.insert(number);
            output<<"Insert "<<number<<" -> OK"<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT GRAPH")==0){
          //  output<<"|------------------------|"<<endl;
        }else if (line.find("DELETEMIN MINHEAP")==0){
            a.deleteMin();
            output<<"Delete min..."<<endl;
            //for (int i=0;i< a.getSize();i++){
              //  output<<"Index "<<i<<" - "<<a.print(i)<<endl;}
            output<<"Delete Min -> OK \n";
            output<<"|------------------------|"<<endl;
        }else if (line.find("DELETEMAX MAXHEAP")==0){
            b.deleteMax();
            output<<"Delete max..."<<endl;
           // for (int i=0;i< b.getSize();i++){
             //   output<<"Index "<<i<<" - "<<b.print(i)<<endl;}
            output<<"Delete Max -> OK \n";
            output<<"|------------------------|"<<endl;
        }else if (line.find("DELETE AVLTREE")==0){
         //   output<<"Delete AVLTREE -> OK \n";
           // output<<"|------------------------|"<<endl;
        }else if (line.find("DELETE HASHTABLE")==0){
            filename=line.substr(16);
            number=stoi(filename);
            //hash.remove(number);
            output<<"Delete Hashtable -> OK \n";
            output<<"|------------------------|"<<endl;
        }else if (line.find("DELETE GRAPH")==0){
           // output<<"Delete Graph -> OK \n";
            //output<<"|------------------------|"<<endl;
        }
    }
    input.close();
    output.close();
    return 0;
}
