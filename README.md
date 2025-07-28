DNS Resolver using Poco C++ Libraries

A C++ DNS resolver built with Poco libraries for network communication, capable of resolving domain names to IP addresses.
- Project initialized with Poco integration via [vcpkg](https://github.com/microsoft/vcpkg) (`poco[net]`).
- Researched DNS fundamentals and configured environment with CMake.

- C++17-compatible compiler  
- CMake  
- vcpkg with Poco (`poco[net]`)

Build Instructions

vcpkg install poco[net]
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build build

 Usage

Run the executable from the build directory:

cd build/Debug
./dns-resolver.exe www.google.com
