[![Build Status](https://travis-ci.org/Geraet/Kompositum.svg?branch=master)](https://travis-ci.org/Geraet/Kompositum)

# Kompositum

## Requirements

* CMake 3.0+
* C++11 compatible compiler
* Ninja (for generating ninja files)

## How to build and run the tests

* Clone the repository: `git clone https://github.com/rehans/Kompositum.git`
* Generate ninja files:
```
cd Kompositum
mkdir build
cd build
cmake -G "Ninja" ..
```
* Run the tests:
```
ninja
ninja test
```

## License

Released under the [MIT License](LICENSE)
