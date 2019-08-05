#include "gdt.h"
#include "console.h"
#include "debug.h"

int kern_entry() {
    
    init_debug();
    init_gdt();
    console_clear();

    printk_color(rc_light_grey, rc_red, "\t\tThis is My OS, It Name is Sniex-OS!\n");
    
    panic("test");

    return 0;
}
