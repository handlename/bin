// http://hitode909.hatenablog.com/entry/20091216/1260936880
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int i, j, found = 0;
    char* s;
    for (i = 1; i < argc; i++) {
        s = argv[i];
        if (found) {
            printf("%s", s);
        } else {
            for(j = 0; s[j] != '\0'; j++) {
                if (isupper(s[j]) == 0) {
                    putc(s[j], stdout);
                } else {
                    printf(" %c%s", tolower(s[j]), (s[j+1] != '\0') ? &s[j+1] : "");
                    found = 1;
                    break;
                }
            }
        }
        if (i < argc-1) printf(" ");
    }
    return found;
}
