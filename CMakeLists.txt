cmake_minimum_required(VERSION 3.0.2)

project("wayangpus")

add_executable(${PROJECT_NAME}
    "src/Game.cpp"
    "src/main.cpp"
)

target_link_libraries(${PROJECT_NAME}
    "sfml-system"
    "sfml-window"
    "sfml-graphics"
)

