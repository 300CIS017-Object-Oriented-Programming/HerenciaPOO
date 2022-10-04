#file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp *.cc)

include_directories(Model)
include_directories(View)

file(GLOB_RECURSE SOURCES Model/ClassA.cpp Model/ClassA.h  Model/ClassB.cpp Model/ClassB.h  Model/ClassC.cpp Model/ClassC.h View/View.cpp View/View.h)  #Todas las fuentes sin el Main


set(BINARY ${CMAKE_PROJECT_NAME})  # El nombre va a a estar en el CMake principal

# Definicion variable sources
set(SOURCES ${SOURCES})

# STATIC libraries are archives of object files for use when linking other targets
#add_library(${CMAKE_PROJECT_NAME}_lib Calculator.h Calculator.cpp)  #construye una libraria que tiene los test que vamos a ejecutar

add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME}_lib)


# Instrucción que define el ejecutable a partir de las fuentes definidas
add_executable(${BINARY}_exe ${SOURCES} Main.cpp)  # Las fuentes mas el archivo main