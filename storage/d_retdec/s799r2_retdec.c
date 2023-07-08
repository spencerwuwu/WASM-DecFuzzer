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
char func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_17_l, int32_t g_18_l, int16_t g_21_l, int16_t g_28_l, int16_t g_29_l, char g_30_l, int32_t g_31_l, int32_t g_32_l, char g_33_l, int32_t g_34_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = 0x231fbf68; // 0x4020
int32_t g3 = -0x4e295a94; // 0x4024
int32_t g4 = -0x55025fe7; // 0x4028
int32_t g5 = -0x30495503; // 0x402a
int32_t g6 = 0x1ecfb6; // 0x402c
int32_t g7 = 0x8001e; // 0x402e
int32_t g8 = 8; // 0x4030
int32_t g9 = 0xd1f2830; // 0x4034
int32_t g10 = -1; // 0x4038
int32_t g11 = -1; // 0x403c
int64_t g12 = 0; // 0x4040
int32_t g13 = 0; // 0x4050
int32_t * g14 = NULL; // 0x4060
int32_t g15;

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
        result = &g15;
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
    return &g12;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g12 != 0) {
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
    *(char *)&g12 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s799r2.c
// Address range: 0x1150 - 0x12a6
// Line range:    83 - 101
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
    transparent_crc(g2, "g_17", v1);
    transparent_crc(g3, "g_18", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_21", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_28", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_29", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_30", v1);
    transparent_crc(g8, "g_31", v1);
    transparent_crc(g9, "g_32", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_33", v1);
    transparent_crc(g10, "g_34", v1);
    platform_main_end(-1 - *(int32_t *)0x403c, v1);
    return (int32_t)&g15 ^ (int32_t)&g15;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12b0 - 0x12b6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12c0 - 0x1355
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1329
        int32_t v2 = i; // 0x12c0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x12f6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1334
        *(int32_t *)(4 * i + (int64_t)&g14) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s799r2.c
// Address range: 0x1360 - 0x1551
// Line range:    47 - 75
char func_1(void) {
    // 0x14ee
    set_var(0x231fbf68, 1, -0x4097, -0x5503, -0x304a, 30, 8, 0xd1f2830, 0, -2);
    return 8;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1560 - 0x15a5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1560
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1584
        printf("...checksum after hashing %s : %X\n", vname, -1 - g11);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15b0 - 0x15d5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x15b0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s799r2.c
// Address range: 0x15e0 - 0x1693
// Line range:    37 - 39
int32_t set_var(int32_t g_17_l, int32_t g_18_l, int16_t g_21_l, int16_t g_28_l, int16_t g_29_l, char g_30_l, int32_t g_31_l, int32_t g_32_l, char g_33_l, int32_t g_34_l) {
    // 0x15e0
    g2 = g_17_l;
    g3 = g_18_l;
    *(int16_t *)&g4 = g_21_l;
    *(int16_t *)&g5 = g_28_l;
    *(int16_t *)&g6 = g_29_l;
    *(char *)&g7 = g_30_l;
    g8 = g_31_l;
    g9 = g_32_l;
    *(char *)&g13 = g_33_l;
    g10 = g_34_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x16a0 - 0x16fd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x16a0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1700 - 0x1740
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g11;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g14); // 0x1735
    g11 = v1 / 256 ^ v2;
}

// Address range: 0x1740 - 0x174d
int64_t _fini(void) {
    // 0x1740
    int64_t result; // 0x1740
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

