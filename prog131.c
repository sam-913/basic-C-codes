#include <stdio.h>
//wap to show how enumerations helps in writing clear codes and simplify programming.
enum week{Sunday,Monday, Tuesday, Wednesday,Thursday,Friday,Saturday};
int main()
{
    enum week today;
    today = Wednesday;
    printf("%d day\n", today + 1);
    return 0;
}