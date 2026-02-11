#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='o'||a=='U'){
        printf("Vowels");
    }
    else{
    printf("consonants");
    }

    return 0;
}