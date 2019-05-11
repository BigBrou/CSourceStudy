cmake_minimum_required(VERSION 3.14)
project(Chapter3)

set(CMAKE_CXX_STANDARD 14)
set(FRUIT_SRC
        Chapter3/Fruit/FruitBuyer.cpp
        Chapter3/Fruit/FruitBuyer.h
        Chapter3/Fruit/FruitSeller.cpp
        Chapter3/Fruit/FruitSeller.h)

#add_executable(Fruit/FruitSeller.cpp Fruit/FruitSeller.h Fruit/FruitBuyer.cpp Fruit/FruitBuyer.h Fruit/FruitMain.cpp)
#add_executable(Chapter3 RacingCar.cpp Car.cpp Car.h)
add_executable(Chapter3 FruitMain.cpp Fruit/FruitSeller.cpp Fruit/FruitSeller.h Fruit/FruitBuyer.cpp Fruit/FruitBuyer.h)
#add_executable(Chapter FruitMain.cpp)
#add_executable(Chapter3/Fruit FruitBuyer.cpp)
#add_executable(Chapter3/Fruit FruitSeller.cpp FruitSeller.h FruitBuyer.cpp FruitBuyer.h)