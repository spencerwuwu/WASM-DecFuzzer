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
int32_t set_var(int32_t g_2_l, int16_t g_13_l, int32_t g_15_l, char g_18_l, int32_t g_19_l, char g_73_l, char g_74_l, int32_t g_75_l, int16_t g_88_l, int32_t g_134_l, char g_135_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = 1; // 0x4020
int32_t g3 = 0x8425; // 0x4024
int32_t g4 = 7; // 0x4028
int32_t g5 = 182; // 0x402c
int32_t g6 = -0x2c2b87db; // 0x4030
char g7 = -10; // 0x4034
int32_t g8 = 0x97f0dfd; // 0x4035
int32_t g9 = 0x97f0d; // 0x4036
int32_t g10 = 9; // 0x4038
int32_t g11 = 8; // 0x403c
int32_t g12 = -1; // 0x4040
char g13 = 0; // 0x4050
int32_t g14 = 0; // 0x4060
int32_t * g15 = NULL; // 0x4070
int32_t g16;

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
        result = &g16;
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
    return 0x4048;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g13 != 0) {
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
    g13 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s947r2.c
// Address range: 0x1150 - 0x12be
// Line range:    150 - 169
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
    transparent_crc(g2, "g_2", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_13", v1);
    transparent_crc(g4, "g_15", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_18", v1);
    transparent_crc(g6, "g_19", v1);
    transparent_crc((int32_t)g7, "g_73", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_74", v1);
    transparent_crc(g14, "g_75", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_88", v1);
    transparent_crc(g10, "g_134", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_135", v1);
    platform_main_end(-1 - *(int32_t *)0x4040, v1);
    return (int32_t)&g16 ^ (int32_t)&g16;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12c0 - 0x12c6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12c0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12d0 - 0x1365
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1339
        int32_t v2 = i; // 0x12d0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1306
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1344
        *(int32_t *)(4 * i + (int64_t)&g15) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s947r2.c
// Address range: 0x1370 - 0x1c89
// Line range:    52 - 143
char func_1(void) {
    // 0x1370
    set_var(1, -0x7bdb, 0x2ec3, -73, 0x2ec3, -10, -3, 0, 0x7f0d, 9, 8);
    return -61;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1c90 - 0x1cd5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1c90
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1cb4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g12);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1ce0 - 0x1d05
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1ce0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s947r2.c
// Address range: 0x1d10 - 0x1dab
// Line range:    42 - 44
int32_t set_var(int32_t g_2_l, int16_t g_13_l, int32_t g_15_l, char g_18_l, int32_t g_19_l, char g_73_l, char g_74_l, int32_t g_75_l, int16_t g_88_l, int32_t g_134_l, char g_135_l) {
    // 0x1d10
    g2 = g_2_l;
    *(int16_t *)&g3 = g_13_l;
    g4 = g_15_l;
    *(char *)&g5 = g_18_l;
    g6 = g_19_l;
    g7 = g_73_l;
    *(char *)&g8 = g_74_l;
    g14 = g_75_l;
    *(int16_t *)&g9 = g_88_l;
    g10 = g_134_l;
    *(char *)&g11 = g_135_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1db0 - 0x1e0d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1db0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1e10 - 0x1e50
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g12;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g15); // 0x1e45
    g12 = v1 / 256 ^ v2;
}

// Address range: 0x1e50 - 0x1e5d
int64_t _fini(void) {
    // 0x1e50
    int64_t result; // 0x1e50
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

