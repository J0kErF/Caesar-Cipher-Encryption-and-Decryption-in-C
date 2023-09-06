# Caesar Cipher

A simple Caesar cipher implementation in C.

## How to use

1. Compile the code with the following command:

`gcc caesar_cipher.c -o caesar_cipher`


2. Run the program with the following command:

`./caesar_cipher`


3. Enter the message you want to encrypt in the first prompt.

4. Enter the shift value in the second prompt.

5. The encrypted message will be printed to the console.

6. To decrypt the message, run the program again and enter the same message and shift value.

## Example

The following example encrypts the message "Hello, world!" with a shift value of 3:
```
./caesar_cipher
Enter message: Hello, world!
Enter shift: 3
Encrypted message: Khoor, zloog!
```

To decrypt the message, run the program again and enter the same message and shift value:
```
./caesar_cipher
Enter message: Khoor, zloog!
Enter shift: 3
Decrypted message: Hello, world!
```

## License

The Caesar cipher implementation is released under the MIT License.
