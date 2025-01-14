# NotificationMessage

Shows how to create a NotificationMessage dialog with wxNotificationMessage.

## Source

[NotificationMessage.cpp](NotificationMessage.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start NotificationMessage.sln
```

Select NotificationMessage project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./NotificationMessage.xcodeproj
```

Select NotificationMessage project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./NotificationMessage.cbp > /dev/null 2>&1
```

Select NotificationMessage project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./NotificationMessage
```
