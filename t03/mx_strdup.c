#include <stdio.h>
#include <stdlib.h>
#include "create_agent.h"

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

char *mx_strdup(const char *str)
{
    char *new_str = mx_strnew(mx_strlen((char *)str));
    mx_strcpy(new_str, str);
    return new_str;
}
