#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    int person_present = 0, capacity = 0;
    for (int i = 1; i <= t; i++)
    {
        int person_exit , person_enter;
        scanf("%d %d", &person_exit, &person_enter);
        person_present = person_present - person_exit;
        person_present = person_present + person_enter;
        if (person_present > capacity)
        {
            capacity = person_present;
        }
    }
    printf("%d",capacity);
}
