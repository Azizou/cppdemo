Steps in creaing a C/C++ library:
==========================

- Create a header for your library say header.h
- Create the implementation file header.cp
- Compile the source file: g++ -c header.cpp -o header.o
- Now to create your library as static library: ar rcs libheader.a (Important, name start with lib and must have .a extension
- To have a dynamic library, first recompile with the -fPIC option: g++ -c -fPIC header.cpp -o header.o (create a position independant code)
- Then create the shared library with: g++ -shared -Wl, -soname,libheader.so.1 -o libheader.so.1.0.0 header.o

- When linking a library: 
        g++ -static driver.cpp -L /path/to/library -lheader -o outputname
        g++ driver.cpp -L /path/to/library -lheader -o outputname

- To execute the dynamic lib: LD_LIBRARY_PATH=. then ./outputname

Reference http://www.adp-gmbh.ch/cpp/gcc/create_lib.html
