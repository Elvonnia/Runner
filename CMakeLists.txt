cmake_minimum_required(VERSION 3.4)
project(Runner)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES runner/include/Main.cpp
        runner/include/controllers/ContollerMenu.cpp
        runner/include/controllers/ContollerMenu.h
        runner/include/controllers/ControllerGame.cpp
        runner/include/controllers/ControllerGame.h
        runner/include/controllers/ControllerUser.h

        runner/include/models/Character.cpp
        runner/include/models/Character.h
        runner/include/models/Field.cpp
        runner/include/models/Field.h
        runner/include/models/Menu.cpp
        runner/include/models/Menu.h
        runner/include/models/Obstacle.cpp
        runner/include/models/Obstacle.h

        runner/include/utils/ConfigChar.h
        runner/include/utils/ConfigField.h
        runner/include/utils/ConfigObj.h
        runner/include/utils/ConfigViewGame.h
        runner/include/utils/ConfigViewMenu.h

        runner/include/views/ViewGame.cpp
        runner/include/views/ViewGame.h
        runner/include/views/ViewMenu.cpp
        runner/include/views/ViewMenu.h
        )
add_executable(Runner ${SOURCE_FILES})