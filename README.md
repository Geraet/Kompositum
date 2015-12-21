# Kompositum

## Requirements

* CMake 3.0+
* C++11 compatible compiler
* Ninja (for generating ninja files)

## How to build and run the tests

1. Clone the repository: `git clone https://github.com/rehans/Kompositum.git`
2. Generate ninja files:
```
cd Kompositum
mkdir build
cd build
cmake -G "Ninja" ..
```
3. Run the tests:
```
ninja
ninja test
```

## License

Released under the [MIT License](LICENSE)
