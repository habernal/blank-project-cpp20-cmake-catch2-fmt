# Blank C++20 project with CMake, Catch2, and {fmt}

This is a minimal blank working project in C++20 that integrates CMake for building and dependency management, Catch2 for unit testing, and {fmt} for better string formatting.

It can be used as a template for new projects.

## Using in CLion

The project can be easily imported into CLion (just open the project folder). CLion provides a fully integrated support for Catch2 unit tests and CMake.

## Building on the command line

Build the project

```bash
$ cmake -B cmake-build && cmake --build cmake-build --config Release
```

Run unit tests
```bash
$ ./cmake-build/test/unit_tests_app
```

Clean
```bash
$ rm -rf cmake-build
```