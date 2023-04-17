#include <ctype.h>
#include <stdio.h>
void caesar_cipher(char *str, int shift) {
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      if (isupper(str[i])) {
        str[i] = ((str[i] - 'A') + shift) < 0
                     ? ((str[i] - 'A') + shift) + 26 + 'A'
                     : ((str[i] - 'A') + shift) % 26 + 'A';

      } else {
        str[i] = ((str[i] - 'a') + shift) < 0
                     ? ((str[i] - 'a') + shift) + 26 + 'a'
                     : ((str[i] - 'a') + shift) % 26 + 'a';
      }
    }
  }
}
int main() {
  char message[100];
  int shift;

  printf("Enter message: ");
  fgets(message, 100, stdin);

  printf("Enter shift: ");
  scanf("%d", &shift);

  caesar_cipher(message, shift);

  printf("Encrypted message: %s\n", message);

  caesar_cipher(message, shift * (-1));
  printf("Decrypted message: %s\n", message);
  return 0;
}
