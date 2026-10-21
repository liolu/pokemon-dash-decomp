#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209d148();
extern void func_0209d158();
extern void r2();
extern char data_020d869c[];
extern char data_020d86a0[];
extern char data_020d86a8[];
// clang-format off
asm void func_0209d288(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_020d869c
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_0209d148
    ldr r1, =data_020d86a0
    ldr r0, =data_020d869c
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_020d86a8
    blx r2
    bl func_0209d158
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
