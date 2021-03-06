
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// MARK: - Definitions

typedef struct {
    char *name;
    size_t age;
} person_t;

// MARK: - Prototypes

void login_user(person_t *user);

// MARK: - Implementations

int main(int argc, char * argv[]) {
    person_t user;
    login_user(&user);


    return 0;
}

void login_user(person_t *user) {
    char buffer[256];

    
    puts("What's your name?");
    scanf("%s", buffer);

    user->name = malloc(sizeof(char) * (strlen(buffer) + 1));
    user->name = strcpy(user->name, buffer);
    printf("Hello, %s!\n", buffer);

    puts("How old are you?");
    scanf("%lu", &user->age);
    printf("Nice to meet you, %lu", user->age);
}