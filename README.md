# Brackets Validation in C++

This program verifies that a string of brackets are valid (i.e. every closing bracket has a opening bracket to match).

## Steps

1. Take in a string of brackets
1. Check the length of the string, if the length is odd we return false. Brackets come in pairs so the length should always be an even number.
1. Remove every "{}","[]", or "()" substring within the brackets string
1. Repeat above until 1 of the 2 following conditions appears
- The length of the string hits 0. Every bracket has been matched, therefore the string is valid and we return true.
- The length of the string stays the same over 2 rounds. We can't match some brackets, therefore the string is invalid and we return false