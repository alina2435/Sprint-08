#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents)
{
    if (agents == NULL || *agents == NULL)
        return;

    for (int i = 0; (*agents)[i] != NULL; i++)
    {
        if ((*agents)[i]->name != NULL)
        {
            free((*agents)[i]->name);
            (*agents)[i]->name = NULL;
        }
        free((*agents)[i]);
        (*agents)[i] = NULL;
    }

    free(*agents);
    *agents = NULL;
}
