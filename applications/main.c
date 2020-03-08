
#include <rtthread.h>
#include <rtdevice.h>

#include "luat_base.h"

static void _main(void* param) {
    rt_thread_mdelay(100); // 故意延后100ms
    luat_main(NULL, NULL, NULL);
    while (1)
        rt_thread_delay(10000000);
}

int main(void)
{
    rt_thread_t t = rt_thread_create("luat", _main, RT_NULL, 6*1024, 15, 20);
    rt_thread_startup(t);
    //luat_main(NULL, NULL, NULL);
    //while (1) {
    //    rt_thread_mdelay(2000000);
    //}
    return 0;
}


