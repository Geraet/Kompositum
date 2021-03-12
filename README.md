# Kompositum

[![CMake](https://github.com/rehans/Kompositum/actions/workflows/cmake.yml/badge.svg)](https://github.com/rehans/Kompositum/actions/workflows/cmake.yml)


## Requirements

* CMake 3.0+
* C++11 compatible compiler
* Ninja (for generating ninja files)

## How to build and run the tests

* Clone the repository: `git clone https://github.com/Geraet/Kompositum.git`
* Generate ninja files:
```
mkdir Kompositum_build
cd Kompositum_build
cmake -G "Ninja" ../Kompositum
```
* Run the tests:
```
ninja
ninja test
```

## License

Released under the [MIT License](LICENSE)
