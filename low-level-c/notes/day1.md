# Day 1 Notes

- You can view generated assembly by passing `-S` to `gcc`, i.e. `gcc -S hello.c`.
- Object files `.o` are binary files that can be inspected with the `hexdump` command.

## Conceptual Reinforcement

### What are `argc` and `argv`?
`argc` is an integer value of the main function which holds a value of how many arguments have been provided to the program. Where is `argv` provides the argument values of the program.

### What is the difference between a source file, an object file and an executable?
The source file is the human-readable code that we produce which is then converted into machine code when compiled down to an object file. This object file may not have been linked with other object files or libraries which is what makes it different to the executable file which includes all of those linked files, enabling the binary to be executed.

### What do the `-Wall` and `-Wextra` flags do in `gcc`?
The `-Wall` flag is the Warning All flag which enables all warnings.
The `-Wextra` flag provides extra warnings, when used with `-Wall` it warns on unused arguments.

## Useful Resources
- [Godbolt](https://godbolt.org/) - Inspect generated assembly.
- [GCC Flags](https://linuxhandbook.com/gcc-flags/) - List of useful GCC flags.
- [GNU GCC](https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Warning-Options.html#Warning-Options)
