# String to binary converter
This is a very simple tool written in C to convert some message into binary.
---
### How it works?
You give the message inside a char variable then the program counts how many characters it have by running a for loop. After that we append the hex 0x80 to the program know how the computer is interpreting this message then inside another for loop a bool variable returns true for **high**(1) values and false for **low**(0) values.
