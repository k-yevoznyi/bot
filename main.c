#include <stdio.h>

void reSpace(char *str) {
    int i = 0; 
    int j = 0; 

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}
int main() {
    char myString[] = "Е к з а м е н _ т е с т";
    printf("до:    '%s'\n", myString);
    reSpace(myString);
    printf("після: '%s'\n", myString);
    return 0;
}