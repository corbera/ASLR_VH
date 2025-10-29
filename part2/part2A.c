/*
 * Address Space Layout Randomization
 * Part 2A: ret2win
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include "lab.h"

// Get vulnerable to call this:
extern void win();

// This is vulnerable to a buffer overflow attack:
extern void vulnerable(char *your_string);

/*
 * lab_code
 * Your code for part 1 goes here!
 */
void lab_code() {
    // The "string" we are going to use for our exploit
    char your_string[1024];

    // Fill the array with 0xFF's and set the last character to be a new line.
    memset(your_string, 0xFF, sizeof(your_string));
    your_string[1023] = '\n';

    // For now we don't worry about ASLR, we can directly use the address of win().

    // Part 2A: Fill in your_string such that vulnerable executes win() on exit.
    
    vulnerable((char *)your_string);
}
