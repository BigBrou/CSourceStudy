cmake_minimum_required(VERSION 3.14)
project(Chapter4)

set(CMAKE_CXX_STANDARD 14)

#add_executable(Rec RectangleFaultFind.cpp Rectangle/Point.cpp Rectangle/Point.h Rectangle/Rectangle.cpp Rectangle/Rectangle.h)
#add_executable(Chapter4 ColdMain.cpp Drug/SinivalCap.cpp Drug/SinivalCap.h Drug/SneezeCap.cpp Drug/SneezeCap.h Drug/SnuffleCap.cpp Drug/SnuffleCap.h Drug/ColdCap.cpp Drug/ColdCap.h)
#add_executable(construct Constructor/AAA.cpp Constructor/AAA.h PrivateConstructor.cpp)
add_executable(destruct Destructor/Person.cpp Destructor/Person.h Destructor.cpp)