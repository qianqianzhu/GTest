A toy example of cuda c/c++ with unit test framework google test

To compile:

## install googletest
- mkdir ~/temp
- cd ~/temp
- unzip gtest-1.7.0.zip 
- cd gtest-1.7.0
- mkdir mybuild
- cd mybuild
- cmake -DBUILD_SHARED_LIBS=ON -Dgtest_build_samples=ON -G"Unix Makefiles" ..
- make
- cp -r ../include/gtest ~/usr/gtest/include/
- cp lib*.so ~/usr/gtest/lib

## centos
- export GTEST_HOME=~/usr/gtest
- export LD_LIBRARY_PATH=$GTEST_HOME/lib:$LD_LIBRARY_PATH
- nvcc -I $GTEST_HOME/include -L $GTEST_HOME/lib -lgtest -lgtest_main -lpthread tests.cu whattotest.cu -o test

## ubuntu
- nvcc tests.cu whattotest.cu -o test -lgtest -lgtest_main -lpthread

