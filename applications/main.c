
#include <rtthread.h>
#include <rtdevice.h>
#include "lua.h"
#include "lauxlib.h"

int main(void)
{
    luat_main(NULL, NULL, NULL);
    while (1) {
        rt_thread_mdelay(2000000);
    }
    return 0;
}


