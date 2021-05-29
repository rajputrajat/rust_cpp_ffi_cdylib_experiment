cargo build
g++ hello_c.cpp  -L target/debug/ -lhello_c_world -lpthread -ldl
