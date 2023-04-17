# Caesar Cipher Encryption & Decryption in C
This program encrypts and decrypts a message using the Caesar Cipher algorithm. The user enters a message and a shift value, and the program applies the cipher. The encrypted message is then printed, and the program decrypts the message and prints it again. This implementation uses the C programming language.


# Comments:

- The program uses the Caesar Cipher algorithm to encrypt and decrypt the message.

- The caesar_cipher function takes two parameters: a string (the message to be encrypted/decrypted) and an integer (the shift value).

- The for loop iterates through each character in the message.

- The isalpha function checks if the character is a letter.

- If the character is uppercase, the ASCII value is converted to a number between 0 and 25 using 'A' as the reference point.

- The shift is added to the number, and if it goes below 0, 26 is added to wrap around to the end of the alphabet.

- If the character is lowercase, the ASCII value is converted to a number between 0 and 25 using 'a' as the reference point.

- The shift is added to the number, and if it goes below 0, 26 is added to wrap around to the end of the alphabet.

- The encrypted message is printed.

- The program then applies the same cipher to the encrypted message but with a negative shift value to decrypt it.

- The decrypted message is printed.
