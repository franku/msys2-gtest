# msys2-gtest (segfault why?)
```
$ ls
README.md  src

$ mkdir b
$ cd b

$ cmake ../src/
-- The C compiler identification is GNU 10.2.0
-- The CXX compiler identification is GNU 10.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found Python: /usr/bin/python3.9.exe (found version "3.9.6") found components: Interpreter
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done
-- Generating done
-- Build files have been written to: /home/f.ueberschar/PowerModul-Software/EclipseCDT/workspace/EnEcmoPowerModule/test/software/battery/b

$ make
[ 10%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 20%] Linking CXX static library ../../../lib/libgtest.a
[ 20%] Built target gtest
[ 30%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 40%] Linking CXX static library ../../../lib/libgmock.a
[ 40%] Built target gmock
[ 50%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[ 60%] Linking CXX static library ../../../lib/libgmock_main.a
[ 60%] Built target gmock_main
[ 70%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 80%] Linking CXX static library ../../../lib/libgtest_main.a
[ 80%] Built target gtest_main
[ 90%] Building CXX object CMakeFiles/Battery.dir/main.cc.o
[100%] Linking CXX executable Battery.exe
[100%] Built target Battery

$ ./Battery.exe
Running main() from .. [Uploading Battery.exe.stackdump…]()
battery/b/_deps/googletest-src/googletest/src/gtest_main.cc
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from Battery
[ RUN      ] Battery.get_remaining_capacity
Segmentation fault (core dumped)
```

[Battery.exe.stackdump.txt](https://github.com/franku/msys2-gtest/files/7177809/Battery.exe.stackdump.txt)

