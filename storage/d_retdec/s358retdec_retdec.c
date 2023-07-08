//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int64_t _fini(void);
int64_t _init(void);
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
void crc32_8bytes(uint32_t val);
void crc32_byte(unsigned char b);
void crc32_gentab(void);
int32_t func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_8_l, int32_t g_9_l, int32_t g_18_l, int16_t g_36_l, int16_t g_37_l, int32_t g_53_l, int16_t g_67_l, int32_t g_73_l, int16_t g_83_l, int16_t g_103_l, int32_t g_104_l, char g_146_l, int32_t g_147_l, int32_t g_152_l, int32_t g_250_l, int16_t g_252_l, char g_331_l, int16_t g_435_l, int16_t g_436_l, int32_t g_467_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = -0x259dd5ec; // 0x6020
int32_t g3 = -0x79d7bfa4; // 0x6024
int32_t g4 = -0x30ea; // 0x6028
int16_t g5 = -1; // 0x602a
int32_t g6 = -0x25603a3e; // 0x602c
int32_t g7 = 1; // 0x6030
int32_t g8 = 0x52eb0006; // 0x6034
int32_t g9 = 0x4352eb; // 0x6036
int32_t g10 = 67; // 0x6038
int32_t g11 = 2; // 0x603c
int32_t g12 = -1; // 0x6040
int32_t g13 = 2; // 0x6044
char g14 = -1; // 0x6048
int32_t g15 = -0x2e490001; // 0x604a
int32_t g16 = 0xd1b6; // 0x604c
int32_t g17 = -0x12bea1b2; // 0x6050
int32_t g18 = -1; // 0x6054
char g19 = 0; // 0x6060
int32_t g20 = 0; // 0x6070
int32_t g21 = 0; // 0x6074
int32_t g22 = 0; // 0x6078
int32_t g23 = 0; // 0x607c
int32_t * g24 = NULL; // 0x6080
int32_t g25;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x5fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g25;
    }
    // 0x1016
    return result;
}

// Address range: 0x1030 - 0x1036
int32_t function_1030(char * format, ...) {
    // 0x1030
    return printf(format);
}

// Address range: 0x1040 - 0x1046
int32_t function_1040(char * s1, char * s2) {
    // 0x1040
    return strcmp(s1, s2);
}

// Address range: 0x1050 - 0x1076
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1050
    int64_t v1; // 0x1050
    __libc_start_main(0x1150, (int32_t)a6, (char **)&v1, NULL, NULL, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}

// Address range: 0x1080 - 0x10a9
int64_t function_1080(void) {
    // 0x1080
    return 0x6058;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g19 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x6018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g19 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s358retdec.c
// Address range: 0x1150 - 0x13ae
// Line range:    358 - 388
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x1171
    if (argc == 2) {
        int64_t str = *(int64_t *)((int64_t)argv + 8); // 0x117b
        v1 = strcmp((char *)str, "1") == 0;
    }
    // 0x119b
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g20, "g_8", v1);
    transparent_crc(g2, "g_9", v1);
    transparent_crc(g3, "g_18", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_36", v1);
    transparent_crc((int32_t)g5, "g_37", v1);
    transparent_crc(g6, "g_53", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_67", v1);
    transparent_crc(g7, "g_73", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_83", v1);
    transparent_crc((int32_t)*(char *)0x40af, "g_102", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_103", v1);
    transparent_crc(g22, "g_104", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_146", v1);
    transparent_crc(g11, "g_147", v1);
    transparent_crc(g12, "g_152", v1);
    transparent_crc(-0x49ac6def, "g_192", v1);
    transparent_crc(g13, "g_250", v1);
    transparent_crc((int32_t)*(int16_t *)&g23, "g_252", v1);
    transparent_crc((int32_t)g14, "g_331", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_435", v1);
    transparent_crc((int32_t)*(int16_t *)&g16, "g_436", v1);
    transparent_crc(g17, "g_467", v1);
    platform_main_end(-1 - *(int32_t *)0x6054, v1);
    return (int32_t)&g25 ^ (int32_t)&g25;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13b0 - 0x13b6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13c0 - 0x1455
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1429
        int32_t v2 = i; // 0x13c0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13f6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1434
        *(int32_t *)(4 * i + (int64_t)&g24) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s358retdec.c
// Address range: 0x1460 - 0x3546
// Line range:    59 - 351
int32_t func_1(void) {
    // 0x156f
    set_var(-0x734eb612, 1, -0x79d7bfa4, -1, -1, -0x25603a3e, 0, 1, 6, 0, 0, 67, 2, -1, 2, 0, -1, -1, -0x2e4a, -0x12bea1b2);
    return 0xeee4;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3550 - 0x3595
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3550
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3574
        printf("...checksum after hashing %s : %X\n", vname, -1 - g18);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x35a0 - 0x35c5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x35a0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s358retdec.c
// Address range: 0x35d0 - 0x36f3
// Line range:    49 - 51
int32_t set_var(int32_t g_8_l, int32_t g_9_l, int32_t g_18_l, int16_t g_36_l, int16_t g_37_l, int32_t g_53_l, int16_t g_67_l, int32_t g_73_l, int16_t g_83_l, int16_t g_103_l, int32_t g_104_l, char g_146_l, int32_t g_147_l, int32_t g_152_l, int32_t g_250_l, int16_t g_252_l, char g_331_l, int16_t g_435_l, int16_t g_436_l, int32_t g_467_l) {
    // 0x35d0
    g20 = g_8_l;
    g2 = g_9_l;
    g3 = g_18_l;
    *(int16_t *)&g4 = g_36_l;
    g5 = g_37_l;
    g6 = g_53_l;
    *(int16_t *)&g21 = g_67_l;
    g7 = g_73_l;
    *(int16_t *)&g8 = g_83_l;
    *(int16_t *)&g9 = g_103_l;
    g22 = g_104_l;
    *(char *)&g10 = g_146_l;
    g11 = g_147_l;
    g12 = g_152_l;
    g13 = g_250_l;
    *(int16_t *)&g23 = g_252_l;
    g14 = g_331_l;
    *(int16_t *)&g15 = g_435_l;
    *(int16_t *)&g16 = g_436_l;
    g17 = g_467_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3700 - 0x375d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3700
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3760 - 0x37a0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g18;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g24); // 0x3795
    g18 = v1 / 256 ^ v2;
}

// Address range: 0x37a0 - 0x37ad
int64_t _fini(void) {
    // 0x37a0
    int64_t result; // 0x37a0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

