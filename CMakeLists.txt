cmake_minimum_required(VERSION 3.26)
project(cppexe)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)
#递归遍历所有的cpp文件
#file (GLOB_RECURSE files *.cpp)
#
##将所有的cpp文件单独生成可执行文件
#foreach (file ${files})
#    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
#    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
#endforeach ()
add_executable(Time Time.cpp)
add_executable(Date Date.cpp)
add_executable(hanxin hanxin.cpp)
add_executable(卡特兰 卡特兰.cpp)
add_executable(整数划分 整数划分.cpp)
add_executable(week week.cpp)
