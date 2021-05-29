cargo build
clang++.exe .\hello.cpp -mdll .\target\debug\hello_c_world_dynamic.dll -lwsock32 -lws2_32 -ladvapi32 -luserenv
