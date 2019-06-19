//
// Created by Windows on 2/5/2019.
//

#include <iostream>
#include "graph.h"
#include <fstream>

using namespace std;
void graph::insert(int num1,int num2) {
    if (!exists(num1,num2))
        Graph.push_back(make_pair(num1,num2));
}

int graph::getSize() {
    return Graph.size();
}

bool graph::exists(int num1, int num2) {
    bool result=false;
    for (int i=0;i<Graph.size();i++){
        if (num1==Graph[i].first && num2==Graph[i].second){
                result=true;
                break;
        }

    }
    return result;

}
void graph::print() {
    ofstream out;
    out.open("graph.txt");
    for (int i=0;i<Graph.size();i++){
            out<<Graph[i].first<<"->"<<Graph[i].second<<endl;
        }
        out.close();

}

