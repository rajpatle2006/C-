#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcbjfbebeaaaakhdaaaf";
    int freq[256] = {0};
    int i, max = 0;
    char result;
    for (i = 0; i < strlen(str); i++) {
        freq[(int)str[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = (char)i;
        }
    }

    printf("Most frequent character: %c\n", result);
    printf("Frequency: %d\n", max);

    return 0;
}