#include <stdio.h>
#include <string.h>

struct address
{
    char add[500];
    char name[100];
};

void input(struct address a1[1000]);
void print(struct address a1[1000]);

int main()
{
    struct address a1[1000];

    input(a1);
    print(a1);

    return 0;
}

void input(struct address a1[1000])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of %d person : ", i + 1);
        scanf("%s", a1[i].name);
        getchar();
        printf("Enter address of %d person : ", i + 1);
        fgets(a1[i].add, sizeof(a1[i].add), stdin);
    }
}

void print(struct address a1[1000])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n Address of %s is : ", a1[i].name);
        puts(a1[i].add);
    }
}
