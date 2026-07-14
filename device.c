#include <string.h>
#include <stdio.h>

#include "device.h"

#define DEVICE_MAX_NUM 100

Device *device_table[DEVICE_MAX_NUM];
int device_count = 0;

void device_register(Device *dev)
{
    if (device_count < DEVICE_MAX_NUM)
    {
        device_table[device_count++] = dev;
    }
}

void device_init_all(void)
{
    int i;

    for (i = 0; i < device_count; i++)
    {
        if (!device_table[i]->initialized && device_table[i]->init)
        {
            device_table[i]->init();
            device_table[i]->initialized = 1;
        }
    }
}

Device *device_find(const char *name)
{
    int i;

    for (i = 0; i < device_count; i++)
    {
        if (strcmp(device_table[i]->name, name) == 0)
        {
            return device_table[i];
        }
    }

    return NULL;
}