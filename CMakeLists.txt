cmake_minimum_required(VERSION 3.25)
project(StreamingApp VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 17)

# Optional: Build shared libs or not
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

# Fetch SFML

include_directories(/opt/homebrew/opt/sfml@2/include)
link_directories(/opt/homebrew/opt/sfml@2/lib)


# Use Homebrew-installed libevent
include_directories(/opt/homebrew/opt/libevent/include)
link_directories(/opt/homebrew/opt/libevent/lib)

# Add your executable
add_executable(StreamingApp sayHello.cpp main.cpp)

# ✅ Fix typo in target name (StremingApp → StreamingApp)
# Link SFML
target_link_libraries(StreamingApp PRIVATE sfml-graphics sfml-window sfml-system)

# Link libevent (from Homebrew)
target_link_libraries(StreamingApp PRIVATE event event_core)
