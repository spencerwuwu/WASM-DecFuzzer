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
int32_t set_var(int32_t g_10_l, char g_13_l, int32_t g_24_l, int32_t g_32_l, int32_t g_44_l, int32_t g_45_l, int32_t g_56_l, int32_t g_59_l, int32_t g_60_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = -5; // 0x4020
int32_t g3 = 5; // 0x4024
int32_t g4 = 0x422d5fba; // 0x4028
int32_t g5 = -1; // 0x402c
int32_t g6 = 0x3bc6c2db; // 0x4030
int32_t g7 = 0x5c2c102d; // 0x4034
int32_t g8 = 3; // 0x4038
int32_t g9 = 0x2c2642a2; // 0x403c
int32_t g10 = -0xd777be1; // 0x4040
int32_t g11 = -1; // 0x4044
char g12 = 0; // 0x4050
int32_t * g13 = NULL; // 0x4060
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
    if (g12 != 0) {
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
    g12 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s543r2.c
// Address range: 0x1150 - 0x128d
// Line range:    86 - 103
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
    transparent_crc(g2, "g_10", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_13", v1);
    transparent_crc(g4, "g_24", v1);
    transparent_crc(g5, "g_32", v1);
    transparent_crc(g6, "g_44", v1);
    transparent_crc(g7, "g_45", v1);
    transparent_crc(g8, "g_56", v1);
    transparent_crc(g9, "g_59", v1);
    transparent_crc(g10, "g_60", v1);
    platform_main_end(-1 - *(int32_t *)0x4044, v1);
    return (int32_t)&g14 ^ (int32_t)&g14;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1290 - 0x1296
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1290
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12a0 - 0x1335
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1309
        int32_t v2 = i; // 0x12a0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x12d6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1314
        *(int32_t *)(4 * i + (int64_t)&g13) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s543r2.c
// Address range: 0x1340 - 0x1638
// Line range:    46 - 78
char func_1(void) {
    // 0x157a
    set_var(-5, 5, 0x422d5fba, -1, 1, 0x5c2c102d, 3, -0xd777be2, -0xd777be2);
    return 24;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1640 - 0x1685
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1640
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1664
        printf("...checksum after hashing %s : %X\n", vname, -1 - g11);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1690 - 0x16b5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1690
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s543r2.c
// Address range: 0x16c0 - 0x1739
// Line range:    36 - 38
int32_t set_var(int32_t g_10_l, char g_13_l, int32_t g_24_l, int32_t g_32_l, int32_t g_44_l, int32_t g_45_l, int32_t g_56_l, int32_t g_59_l, int32_t g_60_l) {
    // 0x16c0
    g2 = g_10_l;
    *(char *)&g3 = g_13_l;
    g4 = g_24_l;
    g5 = g_32_l;
    g6 = g_44_l;
    g7 = g_45_l;
    g8 = g_56_l;
    g9 = g_59_l;
    g10 = g_60_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1740 - 0x179d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1740
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x17a0 - 0x17e0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g11;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g13); // 0x17d5
    g11 = v1 / 256 ^ v2;
}

// Address range: 0x17e0 - 0x17ed
int64_t _fini(void) {
    // 0x17e0
    int64_t result; // 0x17e0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

