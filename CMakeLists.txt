
cmake_minimum_required (VERSION 3.1.0)
project (teach)

# Set Configuration specific DEFINES
IF ( CMAKE_BUILD_TYPE STREQUAL "Debug" ) 
  add_definitions ( "-DUSE_PERFORMANCE_DATA")
  add_definitions ( "-DDEBUG " )
  add_definitions ( "-D_DEBUG " )
  add_definitions ( "-std=c++20")
  add_definitions ( "-rdynamic ")
  add_definitions ( "-g ")

  add_definitions ( "-Wno-deprecated ")
  add_definitions ( "-Wno-unknown-pragmas ")

ELSE()
  add_definitions ( "-Wall ")
  add_definitions ( "-DNDEBUG " )
  add_definitions ( "-DUSE_PERFORMANCE_DATA")
  add_definitions ( "-O3 ")
  add_definitions ( "-std=c++20")
  add_definitions ( "-march=native ")
  add_definitions ( "-mtune=native ")
  add_definitions ( "-Wno-deprecated ")
  add_definitions ( "-Wno-unknown-pragmas ")
  add_definitions ( "-rdynamic ")
  add_definitions ( "-g ")
ENDIF()


include_directories (/usr/include)
include_directories (/usr/local/include)

link_directories (/usr/lib)
link_directories (/usr/local/lib)

add_executable (HW1 
    HW1/cis25Fall2022BarryBalasinghamHw1.cpp)

add_executable (HW2 
    HW2/cis25Fall2022BarryBalasinghamHw2.cpp)

add_executable (HW3 
    HW3/cis25Fall2022BarryBalasinghamHw3.cpp)

add_executable (HW4 
    HW4/cis25Fall2022BarryBalasinghamHw4.cpp
    HW4/source/fraction.cpp
    HW4/source/utility.cpp
    )

add_executable (Final1
    Final1/cis25Fall2022BarryBalasinghamFinalA.cpp
    Final1/finalExamUtilityBarryBalasingham.cpp
    Final1/fractionBarryBalasingham.cpp
    Final1/fractionUtilityBarryBalasingham.cpp
    )

add_executable(25bHW1
    25bHW1/cis25bSpring2023BarryBalasinghamHw1.cpp
    25bHW1/finalExamUtilityBarryBalasingham.cpp
    25bHW1/fractionBarryBalasingham.cpp
    25bHW1/fractionUtilityBarryBalasingham.cpp
)

add_executable(25bHW2
    25bHW2/cis25bSpring2023BarryBalasinghamHw2.cpp
    25bHW2/fractionBarryBalasingham.cpp
    25bHW2/fractionUtilityBarryBalasingham.cpp
    25bHW2/pointBarryBalasingham.cpp
    25bHW2/pointUtilityBarryBalasingham.cpp
    25bHW2/hw2UtilityBarryBalasingham.cpp
)


add_executable(dad
    25bHW2/main.cpp
    25bHW2/fractionBarryBalasingham.cpp
    25bHW2/fractionUtilityBarryBalasingham.cpp
    25bHW2/pointBarryBalasingham.cpp
    25bHW2/pointUtilityBarryBalasingham.cpp
    25bHW2/hw2UtilityBarryBalasingham.cpp
)