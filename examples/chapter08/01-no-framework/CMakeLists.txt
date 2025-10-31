cmake_minimum_required(VERSION 3.20.0)
project(NoFrameworkTests CXX)
#从enable_testing()开始，告诉CTest需要在这个目录及子目录启用测试
enable_testing()
#bin表示需要将src的二进制输出放到<build_tree>/bin,否则二进制文件会跑到src里
add_subdirectory(src bin)
add_subdirectory(test)
