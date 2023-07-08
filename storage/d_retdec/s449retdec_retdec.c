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
int32_t set_var(int16_t g_3_l, int32_t g_5_l, int16_t g_7_l, int16_t g_10_l, int32_t g_15_l, int32_t g_43_l, int32_t g_45_l, int32_t g_46_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = 0xd408; // 0x4020
int32_t g3 = -1; // 0x4024
int16_t g4 = 1435; // 0x4028
int32_t g5 = -0xcc7cb99; // 0x402a
int32_t g6 = 0x552bf338; // 0x402c
int32_t g7 = 0x2c5a4ecb; // 0x4030
int32_t g8 = 0x547fce3b; // 0x4034
int32_t g9 = 8; // 0x4038
int32_t g10 = -1; // 0x403c
int64_t g11 = 0; // 0x4040
int32_t * g12 = NULL; // 0x4050
int16_t g13 = 0; // 0x59b
int32_t g14;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x3fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g14;
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
    return &g11;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g11 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x4018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g11 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s449retdec.c
// Address range: 0x1150 - 0x127d
// Line range:    92 - 108
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_3", v1);
    transparent_crc(g3, "g_5", v1);
    transparent_crc((int32_t)g4, "g_7", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_10", v1);
    transparent_crc(g6, "g_15", v1);
    transparent_crc(g7, "g_43", v1);
    transparent_crc(g8, "g_45", v1);
    transparent_crc(g9, "g_46", v1);
    platform_main_end(-1 - *(int32_t *)0x403c, v1);
    return (int32_t)&g14 ^ (int32_t)&g14;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1280 - 0x1286
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1280
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1290 - 0x1325
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x12f9
        int32_t v2 = i; // 0x1290
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x12c6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1304
        *(int32_t *)(4 * i + (int64_t)&g12) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s449retdec.c
// Address range: 0x1330 - 0x15f3
// Line range:    45 - 85
int32_t func_1(void) {
    // 0x1330
    set_var(0, -1, (int16_t)&g13, 0x3466, 0x552bf338, 0x2c5a4ecb, 0x547fce3b, 8);
    return 8;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1600 - 0x1645
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1600
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1624
        printf("...checksum after hashing %s : %X\n", vname, -1 - g10);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1650 - 0x1675
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1650
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s449retdec.c
// Address range: 0x1680 - 0x16fc
// Line range:    35 - 37
int32_t set_var(int16_t g_3_l, int32_t g_5_l, int16_t g_7_l, int16_t g_10_l, int32_t g_15_l, int32_t g_43_l, int32_t g_45_l, int32_t g_46_l) {
    // 0x1680
    *(int16_t *)&g2 = g_3_l;
    g3 = g_5_l;
    g4 = g_7_l;
    *(int16_t *)&g5 = g_10_l;
    g6 = g_15_l;
    g7 = g_43_l;
    g8 = g_45_l;
    g9 = g_46_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1700 - 0x175d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1700
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1760 - 0x17a0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g10;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g12); // 0x1795
    g10 = v1 / 256 ^ v2;
}

// Address range: 0x17a0 - 0x17ad
int64_t _fini(void) {
    // 0x17a0
    int64_t result; // 0x17a0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

