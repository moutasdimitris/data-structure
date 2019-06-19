#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <sstream>
#include "minheap.h"
#include "minheap.cpp"
#include "maxheap.h"
#include "maxheap.cpp"
#include "hashtable.h"
#include "hashtable.cpp"
#include "avltree.h"
#include "avltree.cpp"
#include "graph.h"
#include "graph.cpp"


int test(const string& file){
    int counter;
    ifstream input,temp_in;
    input.open(file);
    string line,filename;
    while(getline(input,line)){
    if (line.find("BUILD HASHTABLE")==0){
        filename=line.substr(16);
            temp_in.open(filename);
            while(getline(temp_in,line)){
                counter++;
            }
            temp_in.close();
       }
    }
    input.close();
    return counter;
}
int main(int argc,char* argv[]) {
    string filename,line;
    int number,hash_size;
    ofstream output;
    ifstream input1,temp_in,hash,input,graphs;
    minheap a;
    maxheap b;
    graph g;
    hash_size=test(argv[1]);
    avltree avl;
    hashtable h(hash_size);
    cout<<"Please see output file."<<endl;
    output.open("output.txt");
    input.open(argv[1]);
    while(getline(input,line)){
        if (line.find("BUILD MINHEAP")==0){
            output<<"|------------------------|"<<endl;
            filename=line.substr(14);
            input1.open(filename);
              while(getline(input1,line)){
                  int j=stoi(line);
                  a.insert(j);
               }
            for (int i=0;i< a.getSize();i++){
            output<<"Index "<<i<<" - "<<a.print(i)<<endl;}
            output<<"Build MinHeap -> OK"<<endl;
            output<<"|------------------------|"<<endl;
            input1.close();
        }else if (line.find("BUILD MAXHEAP")==0){
            filename=line.substr(14);
            input1.open(filename);
            while(getline(input1,line)){
                    int k=stoi(line);
                    b.insert(k);
                }
            for (int i=0;i< b.getSize();i++){
                output<<"Index "<<i<<" - "<<b.print(i)<<endl;}
            output<<"Build MaxHeap -> OK"<<endl;
            output<<"|------------------------|"<<endl;
            input1.close();
        }else if (line.find("BUILD AVLTREE")==0){
           filename=line.substr(14);
            input1.open(filename);
            while(getline(input1,line)){
                int k=stoi(line);
                avl.insert(root,k);
                cout<<k<<endl;
            }
            avl.display(root,1);
            output<<"Build AVL -> OK"<<endl;
            output<<"|------------------------|"<<endl;
            input1.close();
        }else if (line.find("BUILD HASHTABLE")==0){
          /*  filename=line.substr(16);
            input1.open(filename);
            while(getline(input1,line)){
                  int num=stoi(line);
                  h.insert(num);
              }
            h.print();
            hash.open("hash.txt");
            string str;
            int i=0;
            while(getline(hash,str)){
                output<<"Index "<<i<<str<<endl;
                i++;
            }
            hash.close();
            //remove("hash.txt");
            output<<"Build HashTable -> OK"<<endl;
            output<<"|------------------------|"<<endl;*/
            input1.close();
        }else if (line.find("BUILD GRAPH")==0) {
            filename = line.substr(12);
            input1.open(filename);
            vector<int> vec;
            while (getline(input1,line)) {
                string word = "";
                for (auto x : line) {
                    if (x == ' ') {
                        vec.push_back(stoi(word));
                        word = "";
                    } else {
                        word = word + x;
                    }
                }
                vec.push_back(stoi(word));
                g.insert(vec[0],vec[1]);
                vec.clear();
            }
            g.print();
            graphs.open("graph.txt");
            string str;
            int i=0;
            while(getline(graphs,str)){
                output<<str<<endl;
                i++;
            }
            graphs.close();
            input1.close();
            output << "|------------------------|" << endl;
        }else if (line.find("GETSIZE MINHEAP")==0){
            output<<"Size of MinHeap is "<<a.getSize()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE MAXHEAP")==0){
            output<<"Size of MaxHeap is "<<b.getSize()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE AVLTREE")==0){
         //   output<<"Size of AVLTree is "<<avl.getSize()<<"."<<endl;
          //  output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE GRAPH")==0){
            output<<"Size of Graph is "<<g.getSize()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("GETSIZE HASHTABLE")==0){
            output<<"Size of HashTable is "<<h.getSize()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("FINDMIN MINHEAP")==0){
            output<<"Min for MinHeap is "<<a.find_min()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("FINDMAX MAXHEAP")==0){
            output<<"Max for MaxHeap is "<<b.find_max()<<"."<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("FINDMIN AVLTREE")==0){
          //  output<<"Min for AVLTree is "<<avl.findMin(0)<<"."<<endl;
            //output<<"|------------------------|"<<endl;
        }else if (line.find("SEARCH AVLTREE")==0){
         /*   filename=line.substr(15);
            number=stoi(filename);
            bool result=avl.search(number);
            if (result){
                output<<"Search "<<number<<" -> SUCCESS"<<endl;
            }else{
                output<<"Search "<<number<<" -> FAILURE"<<endl;
            }
            output<<"|------------------------|"<<endl;*/
        }else if (line.find("SEARCH HASHTABLE")==0){
            filename=line.substr(16);
            number=stoi(filename);
            bool result=h.search(number);
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
            output<<"Insert "<<number<<" to MaxHeap..."<<endl;
            for (int i=0;i< b.getSize();i++){
                output<<"Index "<<i<<" - "<<b.print(i)<<endl;}
            output<<"Insert "<<number<<" -> OK"<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT MINHEAP")==0){
            filename=line.substr(14);
            number=stoi(filename);
            a.insert(number);
            output<<"Insert "<<number<<" to MinHeap..."<<endl;
            for (int i=0;i< a.getSize();i++){
                output<<"Index "<<i<<" - "<<a.print(i)<<endl;}
            output<<"Insert "<<number<<" -> OK"<<endl;
            output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT AVLTREE")==0){
         /*   filename=line.substr(15);
            number=stoi(filename);
            avl.insert(number);
            output<<"Insert "<<number<<" to MinHeap..."<<endl;
            for (int i=0;i< a.getSize();i++){
                output<<"Index "<<i<<" - "<<a.print(i)<<endl;}
            output<<"Insert "<<number<<" -> OK"<<endl;
            output<<"|------------------------|"<<endl;*/
        }else if (line.find("INSERT HASHTABLE")==0){
            filename=line.substr(16);
            number=stoi(filename);
            h.insert(number);
            h.print();
           output<<"Insert "<<number<<" -> OK"<<endl;
           output<<"|------------------------|"<<endl;
        }else if (line.find("INSERT GRAPH")==0){
          //  output<<"|------------------------|"<<endl;
        }else if (line.find("DELETEMIN MINHEAP")==0){
            a.deleteMin();
            output<<"Delete min from MinHeap..."<<endl;
            for (int i=0;i< a.getSize();i++){
                output<<"Index "<<i<<" - "<<a.print(i)<<endl;}
            output<<"Delete Min -> OK \n";
            output<<"|------------------------|"<<endl;
        }else if (line.find("DELETEMAX MAXHEAP")==0){
            b.deleteMax();
            output<<"Delete max from MaxHeap..."<<endl;
            for (int i=0;i< b.getSize();i++){
                output<<"Index "<<i<<" - "<<b.print(i)<<endl;}
            output<<"Delete Max -> OK \n";
            output<<"|------------------------|"<<endl;
        }else if (line.find("DELETE AVLTREE")==0){
            //  avl.~avltree();
             // output<<"Delete AVLTREE -> OK \n";
           // output<<"|------------------------|"<<endl;
        }else if (line.find("DELETE GRAPH")==0){
           // output<<"Delete Graph -> OK \n";
            //output<<"|------------------------|"<<endl;
        }
    }
    input.close();
    output.close();
    return 0;
}
