Corner Grocer – Item Tracking Program (CS 210)
Project Summary
The Corner Grocer project is a C++ console application that reads a list of grocery items purchased throughout the day and counts how frequently each item is bought. This data is used to help the store optimize their layout by identifying high-traffic items. The program allows users to search for item frequencies, view a full list of items and counts, display a histogram, and export data to a backup file.

Reflection
What problem did the project solve?
This project helps a small grocery store analyze customer purchasing trends by tracking how many times each item is bought. This allows them to make informed decisions about how to organize their store more efficiently.

What did I do particularly well?
I used clear and maintainable C++ code to implement a clean, menu-based interface. I organized logic using a class, applied a map for tracking frequencies, and included file input/output that writes a backup file (frequency.dat) automatically at runtime. The use of case-insensitive search improved usability.

Where could I enhance my code?
To improve the program further, I could expand input validation and support more flexible formatting in the input file (e.g., handling commas or different casing automatically). I could also separate UI from logic more formally for better scalability. These changes would improve the program's security and adaptability.

What was most challenging?
The most challenging part was managing case sensitivity when users typed item names. Items in the file were capitalized, but user input might be lowercase. I overcame this by converting the first character to uppercase and the rest to lowercase before searching the map. I also had to ensure the input file and executable were in the same location, which required testing file paths and project settings.

What tools or resources helped me?
I relied on the C++ references in zyBooks, along with debugging features in Visual Studio, and basic file handling tutorials. ChatGPT also helped break down the project into manageable steps and provided feedback on my code.

What skills are transferable?

Using classes to encapsulate logic

Handling file I/O

Utilizing standard library data structures like std::map

Implementing clear, readable code with inline comments

Designing menu-driven console applications
These skills are all transferable to future C++ projects, Python scripting, and eventually larger-scale software development efforts.

How did I make the program maintainable and readable?
I followed naming conventions, used inline comments to explain logic, and structured the program with a single class (GroceryTracker) to separate logic from the main() function. The map data structure made frequency tracking efficient and clean. The program is easy to adapt with additional features like item sorting or GUI integration in the future.
