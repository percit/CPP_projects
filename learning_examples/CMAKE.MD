https://cmake.org/examples/


# main directory:
cmake_minimum_required (VERSION 2.8.11)

project (HELLO)

add_subdirectory (Hello)

add_subdirectory (Demo)

# sub directory 1

add_library (Hello hello.cxx)

target_include_directories (Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})




# sub directory 2

add_executable (helloDemo demo.cxx demo_b.cxx)

target_link_libraries (helloDemo LINK_PUBLIC Hello)



# minimalny cmake:

CMakeLists.txt:

cmake_minimum_required(version 3.10)

project(ProjectName)

add_executable(execName main.cpp)

# budowanie

mkdir build

cd build

cmake ..

cmake --build


# jak chcemy dodac do kilka plikow do jednej zmiennej to:
set(SRC 

greeter.cpp

 main.cpp
 
 person.cpp
 
)

add_executables(${PROJECT_NAME}  ${SRC})

gdzie PROJECT_NAME to zmienna i bedzie taka sama jak nazwa projektu



# tworzenie bibliotek:

add_library(<name> [STATIC | SHARED | MODULE ] [source_file] )


add_library(lib STATIC functions.cpp modules.cpp)

add_executable(main main.cpp)

add_executable(ut tests.cpp)

target_link_libraries(main lib)

target_link_libraries(ut lib)



# dodawanie flag kompilacji:

set(FLAGS  -Wall -pedantic -03)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})

target_compile_options(${PROJECT_NAME}-ut PRIVATE ${FLAGS})

target_compile_options(${PROJECT_NAME}-lib PRIVATE ${FLAGS})



# dodanie testow - ctest

enable_testing()

add_test(NAME <name> COMMAND  <command> [<arg>...])


enable_testing()

add_test(NAME someTests COMMAND ${PROJECT_NAME}-ut)


# wlaczanie release/debug - release jest na default:

set(CMAKE_BUILD_TYPE Debug)


# dodatkowe rzeczy:

set(CMAKE_CXX_STANDARD 17) - ustawia na c++17

