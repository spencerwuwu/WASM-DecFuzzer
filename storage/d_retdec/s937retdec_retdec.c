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
int32_t set_var(int16_t g_5_l, char g_13_l, int16_t g_20_l, int32_t g_21_l, int32_t g_22_l, int32_t g_30_l, char g_33_l, int32_t g_34_l, int16_t g_36_l, int16_t g_51_l, int32_t g_56_l, int32_t g_112_l, char g_113_l, int32_t g_144_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int16_t g2 = 6; // 0x4020
int32_t g3 = -0x427affaa; // 0x4022
int32_t g4 = 0xbd85; // 0x4024
int32_t g5 = 6; // 0x4028
int32_t g6 = 0x70e7ad53; // 0x402c
int32_t g7 = 80; // 0x4030
int32_t g8 = 2; // 0x4034
int32_t g9 = -0x4d4d3e55; // 0x4038
int32_t g10 = 0x3b2b2; // 0x403a
int32_t g11 = 3; // 0x403c
int32_t g12 = -0x700968f0; // 0x4040
int32_t g13 = 134; // 0x4044
int32_t g14 = -7; // 0x4048
int32_t g15 = -1; // 0x404c
int64_t g16 = 0; // 0x4050
int32_t g17 = 0; // 0x4060
int32_t * g18 = NULL; // 0x4070
int32_t g19;

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
        result = &g19;
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
    return &g16;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g16 != 0) {
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
    *(char *)&g16 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s937retdec.c
// Address range: 0x1150 - 0x1313
// Line range:    170 - 193
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
    transparent_crc((int32_t)g2, "g_5", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_13", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_20", v1);
    transparent_crc(g5, "g_21", v1);
    transparent_crc(g6, "g_22", v1);
    transparent_crc(g17, "g_30", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_33", v1);
    transparent_crc(g8, "g_34", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_36", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_51", v1);
    transparent_crc(g11, "g_56", v1);
    transparent_crc(114, "g_100", v1);
    transparent_crc(g12, "g_112", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_113", v1);
    transparent_crc(g14, "g_144", v1);
    platform_main_end(-1 - *(int32_t *)0x404c, v1);
    return (int32_t)&g19 ^ (int32_t)&g19;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1320 - 0x1326
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1320
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1330 - 0x13c5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1399
        int32_t v2 = i; // 0x1330
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1366
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x13a4
        *(int32_t *)(4 * i + (int64_t)&g18) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s937retdec.c
// Address range: 0x13d0 - 0x1dc7
// Line range:    56 - 163
int32_t func_1(void) {
    // 0x13d0
    set_var(6, 86, -0x4252, 0x5a4792d8, 0x70e7ad53, 0, 80, 0, -0x3e55, -0x4d4e, 1, -0x700968f0, -122, -7);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1dd0 - 0x1e15
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1dd0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1df4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g15);
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1e20 - 0x1e45
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1e20
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s937retdec.c
// Address range: 0x1e50 - 0x1f19
// Line range:    46 - 48
int32_t set_var(int16_t g_5_l, char g_13_l, int16_t g_20_l, int32_t g_21_l, int32_t g_22_l, int32_t g_30_l, char g_33_l, int32_t g_34_l, int16_t g_36_l, int16_t g_51_l, int32_t g_56_l, int32_t g_112_l, char g_113_l, int32_t g_144_l) {
    // 0x1e50
    g2 = g_5_l;
    *(char *)&g3 = g_13_l;
    *(int16_t *)&g4 = g_20_l;
    g5 = g_21_l;
    g6 = g_22_l;
    g17 = g_30_l;
    *(char *)&g7 = g_33_l;
    g8 = g_34_l;
    *(int16_t *)&g9 = g_36_l;
    *(int16_t *)&g10 = g_51_l;
    g11 = g_56_l;
    g12 = g_112_l;
    *(char *)&g13 = g_113_l;
    g14 = g_144_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f20 - 0x1f7d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1f20
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f80 - 0x1fc0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g15;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g18); // 0x1fb5
    g15 = v1 / 256 ^ v2;
}

// Address range: 0x1fc0 - 0x1fcd
int64_t _fini(void) {
    // 0x1fc0
    int64_t result; // 0x1fc0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

