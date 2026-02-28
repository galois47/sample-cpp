g++ -c -fPIC Vector.cpp -o Vector.o
g++ -shared -o libVector.so Vector.o
rm -f Vector.o