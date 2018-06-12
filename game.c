#include <stdio.h>
#include <string.h>

struct Game {
        char firstname[256];
        char lastname[256];
        int  one[1];
        int  two[1];
        int  three[1];
        int  four[1];
        int  five[1];
        int  six[1];
        int  seven[1];
        int  eight[1];
        int  nine[1];
        int  ten[1];
};

void printGame(struct Game* question);
int main()
{
        struct Game questionArr[10];
        char input[256];
        char firstname[256];
        char lastname[256];
        int menu=0;
        int one[1];
        int  two[1];
        int  three[1];
        int  four[1];
        int  five[1];
        int  six[1];
        int  seven[1];
        int  eight[1];
        int  nine[1];
        int  ten[1];
        struct Game question1;

while(menu != 3)
{
printf("\n\n****** MAIN MENU ******\n");
 printf("\t1.CREATE NEW PLAYER.\n\t2.PLAY.\n\t3.QUIT.\n");
 printf("***************************************\n");
 printf("YOUR CHOICE: ");
 scanf("%d", &menu);

if(menu == 1)
{
  printf("What is your name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname);
  printf("What is your last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname);

}

if(menu == 2)
{
 printf("What is the next number in the pattern: 2,4,6,8...\n");
  int a = 10;
while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == a) break;
        printf("Correct answer!\n");
}
{
        if (sscanf(input,"%d", &one) > a) break;
        printf("Incorrect answer!\n");
}
{
        if (sscanf(input,"%d", &one) < a) break;
        printf("Incorrect answer!\n");
}
}
printf("What is the next number in the pattern: 7,14,28,35...\n");
 int b = 42;
while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == b) break;
        printf("Correct answer!\n");
}
{
        if (sscanf(input,"%d", &one) > b) break;
        printf("Incorrect answer!\n");
}
{
        if (sscanf(input,"%d", &one) < b) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: 680,136,24,8...\n");
 int c = 4;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == c) break;
        printf("Correct answer!\n");
}
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > c) break;
        printf("Incorrect answer!\n");
}
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < c) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: -2.5,-10,-40,-160...\n");
 int d = -640;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == d) break;
        printf("Correct answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > d) break;
        printf("Incorrect answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < d) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: 2,10,50,250...\n");
 int e = 1250;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == e) break;
        printf("Correct answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > e) break;
        printf("Incorrect answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < e) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: 0.8,-4,20,-100...\n");
 int f = 500;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == f) break;
        printf("Correct answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > f) break;
        printf("Incorrect answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < f) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: -3,-9,-27,81...\n");
 int g = -243;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == g) break;
        printf("Correct answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > g) break;
        printf("Incorrect answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < g) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: 1,2,4,8...\n");
 int h = 16;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == h) break;
        printf("Correct answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > h) break;
        printf("Incorrect answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < h) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: 4,20,100,500...\n");
 int i = 2500;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == i) break;
        printf("Correct answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > i) break;
        printf("Incorrect answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < i) break;
        printf("Incorrect answer!\n");
}
}

printf("What is the next number in the pattern: 2,0.5,0.125,0.03125...\n");
 int j = 0.0078125;

while(1)
{
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) == j) break;
        printf("Correct answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) > j) break;
        printf("Incorrect answer!\n");
}
if(1)
{
        fgets(input, 256, stdin);
        if (sscanf(input,"%d", &one) < j) break;
        printf("Incorrect answer!\n");
}
}
}
}
}
