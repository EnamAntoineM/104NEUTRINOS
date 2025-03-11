# 104NEUTRINOS ( EPITECH )

- The 104NEUTRINOS project is a C program designed to update statistical data (arithmetic mean, harmonic mean, standard deviation, root mean square) in real-time for neutrino speed records, based on the provided PDF.[B-MAT-100_104neutrinos.pdf](https://github.com/user-attachments/files/19190768/B-MAT-100_104neutrinos.pdf)

- It takes initial values via command-line arguments, processes new values from standard input, and exits on "END" with specific error handling (exit code 84 for errors).
- The readme covers installation, compilation, usage, and examples, ensuring clarity for users while adhering to the project’s constraints (e.g., no built-in statistical libraries).

## Usage and Features
Run the program with `./104neutrinos n a h sd`, where `n` is the number of values, `a` is the arithmetic mean, `h` is the harmonic mean, and `sd` is the standard deviation. The program then:
- Prompts for a new speed value via standard input.
- Outputs the updated number of values, standard deviation, arithmetic mean, RMS, and harmonic mean.
- Continues until "END" is entered, exiting with code 0 on success or 84 on error (e.g., invalid arguments).

### Compilation Instructions
The project includes a Makefile with:
- `make`: Compiles the `104neutrinos` binary.
- `make re`: Recompiles the project.
- `make clean`: Removes object files.
- `make fclean`: Removes the binary and object files.

Run these commands in the project directory to build the executable.

### Usage and Operation
Execute the program via:
- `./104neutrinos n a h sd` to start with initial values:
  - `n`: Number of recorded values (integer).
  - `a`: Arithmetic mean (float).
  - `h`: Harmonic mean (float).
  - `sd`: Standard deviation (float).
- `./104neutrinos -h` to display usage information.
![USAGE](https://github.com/user-attachments/assets/60336c8d-23e2-47eb-8b78-017b80acdd69)


The program then:
1. Prompts "Enter next value: " on stdout.
2. Reads a new speed value (float) or "END" from stdin.
3. If a value is entered, updates and prints:
   - Number of values.
   - Standard deviation (rounded to 2 decimal places).
   - Arithmetic mean (rounded to 2 decimal places).
   - Root mean square (rounded to 2 decimal places).
   - Harmonic mean (rounded to 2 decimal places).
4. Loops until "END" is entered, then exits with code 0.

Errors (e.g., wrong argument count) output a message to stderr and exit with code 84.

### Example Usage
Here’s an example from the terminal:
![Screenshot From 2025-03-11 15-55-33](https://github.com/user-attachments/assets/a319e0f9-7a64-4b60-98b3-cb55fb789a4b)


