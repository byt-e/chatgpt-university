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

## Day 1 Recap Quiz

**1. Conceptual: Compilation**
> In your own words, describe what each of the following files contains:
>   - hello.c
>   - hello.o
>   - hello (the executable)

- `hello.c` contains the source code, that is high-level human readable code. It is a set of instructions that will be compiled down to machine code to be executed against the hardware.

- `hello.o` contains the object file, this is the compiled code of a source file, but it does not contain linking information that would link libraries or files together to form the executable.

- `hello` contains the binary code, with object files and libraries linked creating an executable which runs the program.

**2. Command Line Behavior**

> What happens if you run:
> ```bash
> ./hello "Byte the Brave" 123 '!!'
> ```
> What will argc and argv[2] contain?

There will be `4` arguments with that command, meaning `argc=4`, and since arrays are 0 indexed then `argv[2]` will contain `123`.
This is because the executable name `hello` is the first argument.

**3. GCC Flags**
> What does the -g flag do during compilation, and when would you use it?

`-g` according to the manual pages provides debugging information in the operating system's native format. 
This information that is put into the compiled code can then be utilised by `gdb`, it comes with a warning that while it improves `gdb` it may make other debuggers crash.
