#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength)
{
    if (!name)
        return NULL;

    t_agent *p = malloc(sizeof(t_agent));
    if (!p)
        return NULL;

    p->name = mx_strdup(name);
    p->power = power;
    p->strength = strength;
    return p;
}
