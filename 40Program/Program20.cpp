#include <stdio.h>
#include <string.h>

int main() {
    char user[20], pass[20];
    int i, berhasil = 0;

    for (i = 1; i <= 3; i++) {
        printf("Username: ");
        scanf("%s", user);
        printf("Password: ");
        scanf("%s", pass);

        if (strcmp(user, "admin") == 0 && strcmp(pass, "123") == 0) {
            berhasil = 1;
            break;
        } else {
            printf("Salah! Percobaan ke-%d\n", i);
        }
    }

    if (berhasil)
        printf("Login berhasil\n");
    else
        printf("Akun diblokir\n");

    return 0;
}