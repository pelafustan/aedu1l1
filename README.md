# Lab number 1

## Introduction

In this lab I've to write three C++ programs.

1.  A program that fills an 1-dimensional array of integers and then returns the sum of all the entered elements squared.
1.  A program that reads N phrases from an array of chars and then returns the number of upper and lower case in each one. The usage of `islower()` and `isupper()` is allowed.
1.  A company records the following data for each of its N clients:

    *  Name (string).
    *  Phone (string).
    *  Balance (integer).
    *  Defaulter (boolean).

    Write a program that allows input client records and then let the user prints client data (and if is defalter or not). Use an array of classes.

## Installation

### Prerequisites

This repo provides you the source files for the programs and you'll need a compiler to get the executables. In order to do this, you will need a valid compiler, like `gcc`. There is a pretty good probability that if you're using some GNU/Linux distro, like Arch (I use Arch, btw) or Ubuntu (~~ugh~~) you already have a copy of `gcc` in your system; if isn't your case (a really weird case, btw), you can install it using your distro package manager, e.g., if you're using a debian-based distro (~~ugh~~), you can run `sudo apt-get install build-essential`. I encourage you to install the `manpages-dev` package and invest a little time reading documentation before do whatever you wanna do, to avoid spend time debugging. After my two-cents advice, the programs were written and tested on a machine that runs Arch, using `gcc` 11.1.0 under `c++17` standard. 

### Actual installation

To install all programs, you only need to bring this repo to your machine (a.k.a clone the repo). To do that run the next command in your favourite terminal emulator

```
git clone https://github.com/pelafustan/aed_u1l1.git
```

After this tremendous physical and mental effort, you need to go inside each folder and run the next command to _actually install_ the things.

```
make
```

This command will generate the documentation and display it in your favourite web browser. You can also view the documentation using `man`. To use `man`, read the `man` documentation.

## Usage

Once you have your clean and shiny executables, you can run it with

```
make run
```

inside the appropiate folder, obviously.

## Uninstall

To uninstall each program, you can run

```
make clean
```

and all compiled files will be removed from your system. 

After that, you can delete the repo (indeed, you can directly remove the repo, there is no really need to perform the step above).

## Authors

* [J. Patricio Parada G.](https://github.com/pelafustan)

## Acknowledgment

* Black coffee.
* My rubber duck.
* [StackOverflow](https://stackoverflow.com)

## License

No warranties granted about use of this program. This project is under MIT License. See [LICENSE](./LICENSE) for more information.
