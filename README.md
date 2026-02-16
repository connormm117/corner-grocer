# Corner Grocer Frequency Analysis System

## Overview

The Corner Grocer Frequency Analysis System is a C++ console application designed to analyze grocery purchase data from a structured input file. The program processes item names, calculates frequency counts, and presents results through a user-friendly menu interface.

This project demonstrates applied knowledge in data structures, algorithmic design, file handling, defensive programming, and secure coding principles.

---

## Features

- Case-insensitive item frequency search
- Alphabetical frequency listing
- Histogram visualization
- Sorting by frequency count (descending)
- Backup data file generation (`frequency.dat`)
- Defensive input validation
- Safe file handling with fail-safe behavior

---

## Technical Implementation

### Data Structures
- `std::unordered_map` used for O(1) average lookup and insertion
- `std::vector` used for sorting and presentation
- `std::stable_sort` for deterministic frequency sorting

### Algorithmic Complexity
- Counting: O(n)
- Lookup: O(1) average
- Sorting: O(n log n)

### Security & Reliability Enhancements
- Input normalization to prevent case inconsistency
- File existence validation before processing
- Safe failure termination if critical resources are unavailable
- Robust menu input validation to prevent infinite loops
- Defensive checks against empty datasets

---

## File Structure

- `CornerGrocer.cpp` – Main application logic
- `CS210_Project_Three_Input_File.txt` – Input dataset
- `frequency.dat` – Generated backup file

---

## How to Run

1. Ensure `CS210_Project_Three_Input_File.txt` is in the same directory.
2. Compile using a C++17-compatible compiler.
3. Run the executable.
4. Follow the menu prompts.

---

## Professional Context

This project was enhanced as part of a Computer Science capstone portfolio to demonstrate growth in:

- Algorithmic efficiency
- Structural refactoring
- Defensive programming
- Security-aware development practices
- Clean architectural design

The enhancement reflects progression from basic functionality to production-quality, maintainable, and secure code.

