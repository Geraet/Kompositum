[![Build Status](https://travis-ci.org/Geraet/Kompositum.svg?branch=master)](https://travis-ci.org/Geraet/Kompositum)
[![Build status](https://ci.appveyor.com/api/projects/status/xsm54a7nd8ndwe7q/branch/master?svg=true)](https://ci.appveyor.com/project/rehans/kompositum/branch/master)

# Kompositum

## Requirements

* CMake 3.0+
* C++11 compatible compiler
* Ninja (for generating ninja files)

## How to build and run the tests

* Clone the repository: `git clone https://github.com/Geraet/Kompositum.git`
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
