cmake_minimum_required(VERSION 3.10)
project(Blockchain)

set(CMAKE_CXX_STANDARD 17)

# Include OpenSSL for hashing
find_package(OpenSSL REQUIRED)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/Block.cpp
    src/Blockchain.cpp
    src/Transaction.cpp
    src/HashUtils.cpp
    src/main.cpp
)

# Executable
add_executable(blockchain ${SOURCES})
target_link_libraries(blockchain OpenSSL::Crypto)

# Tests
add_executable(test_blockchain tests/test_blockchain.cpp src/Block.cpp src/Blockchain.cpp src/HashUtils.cpp)
target_link_libraries(test_blockchain OpenSSL::Crypto)