# Section 1 Goals
- Understand how arrays and linked lists work under the hood in C
- Build reusable libraries for both structures

## ✔️ Tasks
**Dynamic Array (array.c, array.h)**
[ ] Define a struct with size, capacity, and int *data
[ ] Implement functions:
    - `init_array`, `append`, `insert`, `remove`, `resize`, `free_array`
[ ] Optional: bounds checking and auto-resizing

**Singly Linked List (list.c, list.h)**
[ ] Define `Node` and `List` structs
[ ] Implement:
    - `list_init`, `list_push_front`, `list_push_back`
    - `list_remove`, `list_search`, `list_reverse`
[ ] Optional: doubly-linked version

**Testing & Docs**
[ ] Create main.c to test functionality of both modules
[ ] Write README.md explaining:
    - Structure API
    - Example usage
    - Time/space complexity
[ ] Build with `Makefile`
