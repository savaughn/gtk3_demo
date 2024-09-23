# GTK+ 3 Demo

A simple GTK+ 3 application written in C.

## Prerequisites

- macOS
- [Homebrew](https://brew.sh/)
- GTK+ 3

## Setup

### macOS

1. Run the setup script to install Homebrew and GTK+ 3:

    ```sh
    chmod +x setup_macos.sh
    ./setup_macos.sh
    ```

## Building the Project

1. Use the provided `Makefile` to build the project:

    ```sh
    make
    ```

    This will compile the source files and create the executable in the `build/` directory.

## Running the Application

1. After building the project, run the executable:

    ```sh
    ./build/main
    ```

    This will launch the GTK+ 3 application with a window titled "Hello World".

## Cleaning Up

1. To clean up the build files, run:

    ```sh
    make clean
    ```

## Tutorial
This project follows a tutorial from [C & GUI Programming](https://magpi.raspberrypi.com/books/c-gui-programming-2/). The tutorial provides step-by-step instructions on how to create a simple GTK+ 3 application in C. It covers setting up the development environment, writing the source code, and building and running the application. The tutorial is a great resource for learning the basics of GUI programming with GTK+ and C.
