# C-- Compiler

This is a C-- language compiler written in C. It is capable of generating assembly code from C-- source files.

## Building

To build the compiler, run the following command:

```bash
make
```

This will generate the `compile` executable in the root directory.

## Usage

To use the compiler, run the following command:

```bash
./compile <input-file> <output-file>
```

Where `<input-file>` is the path to the C-- source file and `<output-file>` is the path to the output assembly file.

For example:

```bash
./compile test01.cmm test1
```


