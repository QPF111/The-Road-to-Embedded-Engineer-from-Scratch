#ifndef DEVICE_H
#define DEVICE_H

#include <stdint.h>

typedef struct Device
{
    char *name;
    uint8_t initialized;
    void (*init)(void);
} Device;

void device_register(Device *dev);
void device_init_all(void);
Device *device_find(const char *name);  

#endif
