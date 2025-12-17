# avr8-project-template

This is a template project for old AT90*, ATmega*, and ATtiny* projects. It uses a simple testing and mocking framework and relies on own `avr-libc` version.

## Prerequisite

Download `avr-gcc`: ![Microchip - GCC](https://www.microchip.com/en-us/tools-resources/develop/microchip-studio/gcc-compilers)
And make available in PATH.

Install `cmake`, and `avrdude`.

Install `gcc` for running tests.

## Building firmware
```
cmake -S . -B cmake
```

```
cmake --build cmake --target app
```

## Building and running test
```
cmake -DTEST=True -S . -B cmake-test
```

```
cmake --build cmake-test --target app-test
```
