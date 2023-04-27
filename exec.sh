#!/bin/bash
g++ -shared -fPIC -o libminha_biblioteca.so minha_biblioteca.cpp
gcc -o meu_programa meu_programa.c -L. -Wl,-rpath=. -lminha_biblioteca
javac -h . HelloWorldJNI.java
g++ -fPIC -I/usr/lib/jvm/temurin-11-jdk-amd64/include -I/usr/lib/jvm/temurin-11-jdk-amd64/include/linux -shared -o libhelloworldjni.so HelloWorldJNI.c minha_biblioteca.cpp
./meu_programa
java -Djava.library.path=. HelloWorldJNI
