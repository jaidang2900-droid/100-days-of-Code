#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};  // For lowercase letters a-z

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths are not same, they can't be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // Count frequency of each character in s
    for (int i = 0; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    // Subtract frequency using t
    for (int i = 0; t[i] != '\0'; i++)
        count[t[i] - 'a']--;

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
