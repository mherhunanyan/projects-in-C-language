#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isUppercaseHex(const char *str) {
    while (*str) {
        if (!isxdigit(*str) || islower(*str)) {
            return 0; // Contains non-hex or lowercase character
        }
        str++;
    }
    return 1;
}

int readNumber(int* output, Base base) {
    char numStr[35];

    // Read number as string
    if (scanf("%34s", numStr) == 1) {
        char *numPart = numStr;

        // Check for "0b" prefix followed by binary digits for binary
        if (base == Binary) {
            if (numStr[0] == '0' && numStr[1] == 'b' && strlen(numStr) > 2) {
                numPart += 2; // Skip the "0b" part
            } else {
                // Invalid binary number (no digits after "0b")
                return 0;
            }
        }
        // Check for "0x" prefix followed by uppercase hex digits for hexadecimal
        else if (base == Hexadecimal) {
            if (numStr[0] == '0' && numStr[1] == 'x' && isUppercaseHex(numStr + 2) && strlen(numStr) > 2) {
                numPart += 2; // Skip the "0x" part
            } else {
                // Invalid hexadecimal number (no digits after "0x" or not uppercase)
                return 0;
            }
        }

        // Convert string to integer
        char *endptr;
        *output = (int) strtol(numPart, &endptr, base);

        if (*endptr != '\0') {
            // The input wasn't a valid number
            return 0;
        }
        return 1; // Successful read and conversion
    } else {
        // Error in reading input
        return 0;
    }
}
