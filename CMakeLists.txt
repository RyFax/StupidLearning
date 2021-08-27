cmake_minimum_required(VERSION 3.6)
project(StupidLearning)

# set(CMAKE_CXX_STANDARD 20)

add_executable(StupidLearning
        src/core/main.cpp
        src/core/settings.cpp
        src/core/settings.h
        src/core/client.cpp
        src/core/client.h
        src/events/event_listener.cpp
        src/events/event_listener.h src/commands/commands_manager.cpp src/commands/commands_manager.h)


# -------------
# | Libraries |
# -------------

# SleepyDiscord
add_subdirectory(libs/sleepy-discord)
target_link_libraries(StupidLearning sleepy-discord)