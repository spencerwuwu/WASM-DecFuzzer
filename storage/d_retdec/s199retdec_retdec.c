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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_7_l, int32_t g_28_l, int32_t g_30_l, char g_42_l, int16_t g_68_l, int32_t g_78_l, char g_83_l, char g_84_l, char g_101_l, int32_t g_108_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = -0x4539b598; // 0x4020
int32_t g3 = -0x579f4b1; // 0x4024
char g4 = -10; // 0x4028
int32_t g5 = -1; // 0x402c
int32_t g6 = 3; // 0x4030
int32_t g7 = 0x4f7900b0; // 0x4034
int32_t g8 = -0xb087; // 0x4036
int32_t g9 = -1; // 0x4038
int32_t g10 = 0x8903e5; // 0x403c
int32_t g11 = -0x79ff76fd; // 0x403d
char g12 = -119; // 0x403e
int32_t g13 = -0x698fc47a; // 0x4040
int32_t g14 = -1; // 0x4044
char g15 = 0; // 0x4050
int32_t g16 = 0; // 0x4060
int32_t * g17 = NULL; // 0x4070
int32_t g18;

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
        result = &g18;
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
    if (g15 != 0) {
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
    g15 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s199retdec.c
// Address range: 0x1150 - 0x12ea
// Line range:    157 - 178
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
    transparent_crc(g3, "g_3", v1);
    transparent_crc(g16, "g_6", v1);
    transparent_crc((int32_t)g4, "g_7", v1);
    transparent_crc(g5, "g_28", v1);
    transparent_crc(g6, "g_30", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_42", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_68", v1);
    transparent_crc(g9, "g_78", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_83", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_84", v1);
    transparent_crc((int32_t)g12, "g_101", v1);
    transparent_crc(g13, "g_108", v1);
    platform_main_end(-1 - *(int32_t *)0x4044, v1);
    return (int32_t)&g18 ^ (int32_t)&g18;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12f0 - 0x12f6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1300 - 0x1395
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1369
        int32_t v2 = i; // 0x1300
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1336
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1374
        *(int32_t *)(4 * i + (int64_t)&g17) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s199retdec.c
// Address range: 0x13a0 - 0x1c45
// Line range:    50 - 150
int32_t func_1(void) {
    // 0x13a0
    set_var(-0x4539b598, 0, 0, -10, -1, 3, -80, 0x4f79, -1, -27, 3, -119, -0x698fc47a);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1c50 - 0x1c95
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1c50
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1c74
        printf("...checksum after hashing %s : %X\n", vname, -1 - g14);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1ca0 - 0x1cc5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1ca0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s199retdec.c
// Address range: 0x1cd0 - 0x1d7b
// Line range:    40 - 42
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_7_l, int32_t g_28_l, int32_t g_30_l, char g_42_l, int16_t g_68_l, int32_t g_78_l, char g_83_l, char g_84_l, char g_101_l, int32_t g_108_l) {
    // 0x1cd0
    g2 = g_2_l;
    g3 = g_3_l;
    g16 = g_6_l;
    g4 = g_7_l;
    g5 = g_28_l;
    g6 = g_30_l;
    *(char *)&g7 = g_42_l;
    *(int16_t *)&g8 = g_68_l;
    g9 = g_78_l;
    *(char *)&g10 = g_83_l;
    *(char *)&g11 = g_84_l;
    g12 = g_101_l;
    g13 = g_108_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1d80 - 0x1ddd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1d80
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1de0 - 0x1e20
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g14;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g17); // 0x1e15
    g14 = v1 / 256 ^ v2;
}

// Address range: 0x1e20 - 0x1e2d
int64_t _fini(void) {
    // 0x1e20
    int64_t result; // 0x1e20
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

