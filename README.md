# Extract Bits algorithm

This is a C++ implementation of the [extract_bits](https://github.com/eusgeka/extract_bits)

1)  Assume there is a sequence of bits e.g. 00101.
2)  A "set" bit is always 1.

    If a bit is extracted from the sequence it will present a number depending at what position is.
    * ex: 16-bits integer 0000000000000010 = 2
    * ex: 16-bits integer 0000000000001010 = 2 (from the second position) and 8 (from the 4th position)

    Find the extracted number of a "set" bit in an integer of any size (8, 16, 32, ... bits) , for a positive number.

    Example : For the number 88, 3 bits are set. Extracting the bits then the numbers are 8, 16 and 64

     * 0000000001011000  = 88
     * 0000000000001000  = 8 - It means "Hello From Raspi Noobs"
     * 0000000000010000  = 16 - It means "Goodbye Raspi Noobs"
     * 0000000001000000  = 64 - It means "Welcome back Raspi Noobs"

     With Time Complexity
     * a) O(n), n is the amount of all bits in an integer
     * b) O(m), m is the amount of all "set" bits in an integer of n-bits.


## There are 2 implementations

* The first one uses the fast pass. This is the O(m)
* The second uses a more traditional pass that is O(n)

## Build

This is a CMake project (minimum version 3.10)

* Install CMake (Ubuntu 18.04 example) : ```sudo apt install cmake```
* ```chmod +x make_this.sh```
* ```chmod +x clean_this.sh```
* Use the **make_this.sh** to build the CMake project
  * ```./make_this.sh``` The shared library is located in **bin** directory.
* Use the **clean_this.sh** to clean the build directories **build** and **bin**
  * ```./clean_this.sh``` Both **build** and **bin** are removed
