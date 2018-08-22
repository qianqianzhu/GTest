cmake_minimum_required(VERSION 2.8)

#Locate Cuda
find_package(CUDA 9.0 REQUIRED)
target_link_libraries(${PROJECT_NAME} ${CUDA_LIBRARIES})

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
