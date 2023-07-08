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
int32_t set_var(int16_t g_7_l, char g_10_l, int32_t g_11_l, int32_t g_12_l, int16_t g_13_l, int32_t g_17_l, char g_19_l, int16_t g_24_l, int32_t g_27_l, int32_t g_32_l, char g_35_l, char g_52_l, int32_t g_58_l, int32_t g_87_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int16_t g2 = 0x10e1; // 0x4020
int32_t g3 = 1; // 0x4024
int32_t g4 = -0x195c8ca5; // 0x4028
int32_t g5 = 0x8047; // 0x402c
int32_t g6 = 7; // 0x4030
char g7 = -54; // 0x4034
int32_t g8 = -0xfffe; // 0x4036
int32_t g9 = -1; // 0x4038
int32_t g10 = -1; // 0x403c
int32_t g11 = 8; // 0x4040
int32_t g12 = 1; // 0x4044
int32_t g13 = -0x1133ea3c; // 0x4048
int32_t g14 = -1; // 0x404c
int64_t g15 = 0; // 0x4050
int32_t g16 = 0; // 0x4060
int32_t g17 = 0; // 0x4061
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
    return &g15;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g15 != 0) {
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
    *(char *)&g15 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s976r2.c
// Address range: 0x1150 - 0x1301
// Line range:    156 - 178
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
    transparent_crc((int32_t)g2, "g_7", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_10", v1);
    transparent_crc(g3, "g_11", v1);
    transparent_crc(g4, "g_12", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_13", v1);
    transparent_crc(g6, "g_17", v1);
    transparent_crc((int32_t)g7, "g_19", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_24", v1);
    transparent_crc(g9, "g_27", v1);
    transparent_crc(g10, "g_32", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_35", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_52", v1);
    transparent_crc(g12, "g_58", v1);
    transparent_crc(g13, "g_87", v1);
    platform_main_end(-1 - *(int32_t *)0x404c, v1);
    return (int32_t)&g19 ^ (int32_t)&g19;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1310 - 0x1316
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1310
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1320 - 0x13b5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1389
        int32_t v2 = i; // 0x1320
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1356
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1394
        *(int32_t *)(4 * i + (int64_t)&g18) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s976r2.c
// Address range: 0x13c0 - 0x19fd
// Line range:    55 - 149
int32_t func_1(void) {
    // 0x1687
    set_var(0x10e1, 1, 0, -0x195c8ca5, -0x7fb9, 0x10e6, -54, 2, 0, -1, 8, -1, 1, -0x1133ea3c);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1a00 - 0x1a45
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1a00
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1a24
        printf("...checksum after hashing %s : %X\n", vname, -1 - g14);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1a50 - 0x1a75
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1a50
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s976r2.c
// Address range: 0x1a80 - 0x1b47
// Line range:    45 - 47
int32_t set_var(int16_t g_7_l, char g_10_l, int32_t g_11_l, int32_t g_12_l, int16_t g_13_l, int32_t g_17_l, char g_19_l, int16_t g_24_l, int32_t g_27_l, int32_t g_32_l, char g_35_l, char g_52_l, int32_t g_58_l, int32_t g_87_l) {
    // 0x1a80
    g2 = g_7_l;
    *(char *)&g16 = g_10_l;
    g3 = g_11_l;
    g4 = g_12_l;
    *(int16_t *)&g5 = g_13_l;
    g6 = g_17_l;
    g7 = g_19_l;
    *(int16_t *)&g8 = g_24_l;
    g9 = g_27_l;
    g10 = g_32_l;
    *(char *)&g11 = g_35_l;
    *(char *)&g17 = g_52_l;
    g12 = g_58_l;
    g13 = g_87_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1b50 - 0x1bad
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1b50
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1bb0 - 0x1bf0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g14;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g18); // 0x1be5
    g14 = v1 / 256 ^ v2;
}

// Address range: 0x1bf0 - 0x1bfd
int64_t _fini(void) {
    // 0x1bf0
    int64_t result; // 0x1bf0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

