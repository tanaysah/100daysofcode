
//day45.2- 100 days of code
//Toggle case of each character in a string.

//tanaysah

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
         
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {

            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Toggled string: %s", str);

    return 0;
}
