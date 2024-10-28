# Clock
CS-210 Clock Project
Project Summary and Problem Solved

This project creates a digital clock in both 12-hour and 24-hour formats. It allows users to increment hours, minutes, or seconds individually and displays the current time in both formats. The project solves the problem of managing and displaying time, incorporating flexibility in adding hours, minutes, and seconds and resetting to current time if needed.

What I Did Well

I organized the code into a header (Clock.h), an implementation file (Clock.cpp), and a main file (Main.cpp), separating concerns between class declarations, function implementations, and program logic. The menu function in the Main.cpp file also offers an intuitive way for users to interact with the program.

Enhancements for Code Efficiency and Security

Main.cpp, instead of updating both 12-hour and 24-hour clocks in each case, I could encapsulate the time-adding logic within a single method in the Clock class and call it once. The displayTime function could check once for format_24 and then calculate the time display rather than have conditional formatting within each time output line.

Challenging Code Sections and Solutions

The displayTime function posed a lot of challenges due to handling both 12-hour and 24-hour formats and managing the overflow. I tackled this by implementing modulo operations to ensure times remain within the required bounds. It was an effective approach, though incorporating a helper functions could make it even more manageable.

Tools and Resources for Support

Libraries like <chrono> in C++ for more precise and versatile time manipulations. Which I learned after the project was submitted Using debugging tools within IDEs like Visual Studio to step through code, especially in time-sensitive functions like displayTime was amazing help

Transferable Skills

Understanding how to manage time in C++ is valuable for any projects requiring real-time data or scheduling. The practice of splitting code into headers and implementation files is widely applicable in C++ development.

Maintaining Code Readability, Adaptability, and Maintainability
Clear and concise names like d_hours, d_mins, and d_secs made the code easier to understand. Separating logic into Clock.h and Clock.cpp improved maintainability, as I can modify the clock class without altering Main.cpp. By implementing both 12-hour and 24-hour formats in a single class, the code is adaptable for different time formats without major structural changes.
