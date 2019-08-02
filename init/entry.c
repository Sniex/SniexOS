#include "console.h"

int kern_entry() {
    
    console_clear();

    console_write_color("\n\nThis is My OS, It Name is Sniex-OS!\n", rc_black, rc_green);
    
    return 0;
}
