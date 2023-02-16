#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t, i;
    char c;

    // read the number of test cases
    scanf("%d", &t);

    // process each test case
    for(i = 0; i < t; i++) {
        // read the input character
        scanf(" %c", &c);

        // check if the character appears in the string "codeforces"
        char* s = "codeforces";
        int len = strlen(s);
        int j, count = 0;
        for(j = 0; j < len; j++) {
            if(tolower(c) == s[j]) {
                count++;
            }
        }

        // output the result
        if(count > 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
