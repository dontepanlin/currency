cmake_minimum_required(VERSION 3.19)

project("currency-exchanger" VERSION 1.0)

include_directories(.)
include_directories(./rapidxml)

set(SOURCES 
    main.cpp
    currency.cpp
)

add_executable(cexc ${SOURCES})