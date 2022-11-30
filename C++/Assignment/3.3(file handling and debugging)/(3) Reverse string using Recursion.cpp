#include <stdio.h>
int reverse();
int main() {
    printf("Enter a sentence: ");
    reverse();
    return 0;
}

int reverse()
{
    char c;
    scanf("%c", &c);
    
    if (c != '\n') 
	{
        reverse();
        printf("%c", c);
    }
}
