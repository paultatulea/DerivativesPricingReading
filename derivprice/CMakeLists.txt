cmake_minimum_required(VERSION 3.20)
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

project(derivprice)

add_executable(${PROJECT_NAME}
    # src/SimpleMCMain1.cpp
    # src/SimpleMCMain2.cpp
    # src/SimpleMCMain3.cpp
    # src/SimpleMCMain4.cpp
    # src/SimpleMCMain5.cpp
    src/Random1.cpp
    # src/PayOff1.cpp
    # src/PayOff2.cpp
    src/PayOff3.cpp
    # src/SimpleMC.cpp
    # src/SimpleMC2.cpp
    # src/SimpleMC3.cpp
    # src/SimpleMC4.cpp
    # src/SimpleMC5.cpp
    src/SimpleMC6.cpp
    # src/DoubleDigital.cpp
    src/DoubleDigital2.cpp
    # src/Vanilla1.cpp
    # src/Vanilla2.cpp
    src/Vanilla3.cpp
    # src/VanillaMain1.cpp
    # src/VanillaMain2.cpp
    # src/VanillaMain3.cpp
    src/VanillaMain4.cpp
    src/PayOffBridge.cpp
    src/Parameters.cpp
    )

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)