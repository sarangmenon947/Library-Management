# Library Management System

A console-based Library Management System written in C. It allows users to add books, display records, search by author or title, and view the total book count — all through an interactive menu.

---

## Features

- Add new book records (name, author, pages, price)
- Display all stored book information
- Search and list all books by a given author
- Look up a specific book by its title
- View the total number of books in the library
- Supports up to **100 book records**

---

## Getting Started

### Prerequisites

- A C compiler such as `gcc` or `clang`

### Build

```bash
gcc -o library-management library-management.c
```

### Run

```bash
./library-management
```

---

## Menu Options

```
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. Exit
```

| Option | Description |
|--------|-------------|
| 1 | Add a new book — prompts for name, author, pages, and price |
| 2 | Display all book records entered so far |
| 3 | Enter an author name to list all their books |
| 4 | Enter a book title to display its full details |
| 5 | Print the total number of books currently stored |
| 6 | Exit the program |

---

## Example Session

```
1. Add book information
...
Enter one of the above : 1
Enter book name = TheAlchemist
Enter author name = PauloCoelho
Enter pages = 208
Enter price = 299.00

Enter one of the above : 5
No of books in library : 1

Enter one of the above : 3
Enter author name : PauloCoelho
TheAlchemist PauloCoelho 208 299.000000
```

> **Note:** Because `scanf("%s", ...)` is used for input, book names and author names cannot contain spaces. Use joined words or underscores (e.g., `Paulo_Coelho`).

---

## Code Structure

| Element | Description |
|---------|-------------|
| `struct library` | Holds a single book record: name, author, pages, and price |
| `l[100]` | Array of up to 100 book records |
| `keepcount` | Tracks the number of books added |
| `case 1` | Reads and stores a new book into the array |
| `case 2` | Iterates and prints all stored records |
| `case 3` | Searches records by author using `strcmp` |
| `case 4` | Searches records by book name using `strcmp` |
| `case 5` | Prints the current value of `keepcount` |
| `case 6` | Calls `exit(0)` to terminate the program |
