cmake_minimum_required(VERSION 3.14)
project(data_structure)

set(CMAKE_CXX_STANDARD 14)

add_executable(data_structure main.cpp maxheap.cpp maxheap.h minheap.cpp minheap.h avltree.cpp avltree.h hashtable.cpp hashtable.h graph.cpp graph.h)