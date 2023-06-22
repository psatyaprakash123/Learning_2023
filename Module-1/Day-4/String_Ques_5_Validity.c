#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isValidEmail(const char* email) {
    int len = strlen(email);
    bool username = true;
    bool domain = true;
    bool extension = true;
    bool dot = false;
    int i, atPos = -1, dotPos = -1;
    for (i = 0; i < len; i++) {
        if (email[i] == '@') {
            atPos = i;
            break;
        }
        if (!isalnum(email[i]) && email[i] != '.'){
            username = false;
            break;
        }
        if (email[i] == '.' && i != 0 && i != len - 1 && email[i + 1] == '.'){
            username = false;
            break;
        }
        if (email[i] == '.'){
            dot = true;
        }
    }

    if (atPos != -1 && dot){
        for (i = atPos + 1; i < len; i++){
            if (!isalpha(email[i])) {
                if (email[i] == '.' && i != len - 1 && isalpha(email[i + 1])){
                    dotPos = i;
                    break;
                }
                domain = false;
                break;
            }
        }
        for (i = dotPos + 1; i < len; i++){
            if (!islower(email[i])){
                extension = false;
                break;
            }
        }
    } else {
        username = false;
    }

    return (username && domain && extension);
}

int main(){
    char email[100];

    printf("Enter email address: ");
    scanf("%s", email);

    if (isValidEmail(email)){
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}

