cmake_minimum_required(VERSION 3.26)
project(cppexe)

set(CMAKE_CXX_STANDARD 20)


#set(CMAKE_CHARSET "UTF-8")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -finput-charset=UTF-8")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
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
add_executable(catalan catalan.cpp)
add_executable(IntegerSplit IntegerSplit.cpp)
add_executable(week week.cpp)

add_executable(convertDatatype1 convertDatatype1.cpp)

add_executable(stringAsinput stringAsinput.cpp)
add_executable(istringstreamex istringstreamex.cpp)

add_executable(sortTest sortTest.cpp)

add_executable(datatypeconverse3 数据类型转换/datatypeconverse3.cpp)
add_executable(datatypeconverse2 数据类型转换/datatypeconverse2.cpp)
add_executable(datatypeconverse1 数据类型转换/datatypeconverse1.cpp)
add_executable(进制转换 进制转换.cpp)
add_executable(分割字符串 分割字符串.cpp)
add_executable(进制转换带字母 进制转换带字母.cpp)
add_executable(字符串转整数 字符串转整数.cpp)
add_executable(获得单词 获得单词.cpp)
add_executable(单词反转 单词反转.cpp)
add_executable(韩信点兵 韩信点兵.cpp)
add_executable(f0805 f0805.cpp)
add_executable(幂运算 运算符重载/幂运算.cpp)
add_executable(矢量叉积 运算符重载/矢量叉积.cpp)