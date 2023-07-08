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
int32_t set_var(int16_t g_22_l, int32_t g_35_l, int32_t g_36_l, char g_38_l, int16_t g_63_l, char g_75_l, int16_t g_77_l, int16_t g_78_l, int16_t g_82_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = 0xffff; // 0x4020
int32_t g3 = 9; // 0x4024
int32_t g4 = 1; // 0x4028
int32_t g5 = -0x4822ffd0; // 0x402c
int32_t g6 = 0xb1b7dd; // 0x402e
int32_t g7 = 0x100b1; // 0x4030
int32_t g8 = 0x10001; // 0x4032
int16_t g9 = 1; // 0x4034
int64_t g10; // 0x4036
int32_t g11 = -1; // 0x4038
int64_t g12 = 0; // 0x4040
int32_t * g13 = NULL; // 0x4050
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s567r2.c
// Address range: 0x1150 - 0x1296
// Line range:    93 - 110
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_22", v1);
    transparent_crc(g3, "g_35", v1);
    transparent_crc(g4, "g_36", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_38", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_63", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_75", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_77", v1);
    transparent_crc((int32_t)g9, "g_78", v1);
    transparent_crc((int32_t)*(int16_t *)0x4036, "g_82", v1);
    platform_main_end(-1 - *(int32_t *)0x4038, v1);
    return (int32_t)&g14 ^ (int32_t)&g14;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12a0 - 0x12a6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12b0 - 0x1345
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1319
        int32_t v2 = i; // 0x12b0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x12e6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1324
        *(int32_t *)(4 * i + (int64_t)&g13) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s567r2.c
// Address range: 0x1350 - 0x1704
// Line range:    46 - 85
int32_t func_1(void) {
    // 0x16a0
    set_var(-2, 9, 1, 0, -0x4823, -79, 1, 1, 1);
    return -0x542ee61e;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1710 - 0x1755
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1710
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1734
        printf("...checksum after hashing %s : %X\n", vname, -1 - g11);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1760 - 0x1785
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1760
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s567r2.c
// Address range: 0x1790 - 0x183c
// Line range:    36 - 38
int32_t set_var(int16_t g_22_l, int32_t g_35_l, int32_t g_36_l, char g_38_l, int16_t g_63_l, char g_75_l, int16_t g_77_l, int16_t g_78_l, int16_t g_82_l) {
    // 0x1790
    *(int16_t *)&g2 = g_22_l;
    g3 = g_35_l;
    g4 = g_36_l;
    *(char *)&g5 = g_38_l;
    *(int16_t *)&g6 = g_63_l;
    *(char *)&g7 = g_75_l;
    *(int16_t *)&g8 = g_77_l;
    g9 = g_78_l;
    *(int16_t *)&g10 = g_82_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1840 - 0x189d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1840
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x18a0 - 0x18e0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g11;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g13); // 0x18d5
    g11 = v1 / 256 ^ v2;
}

// Address range: 0x18e0 - 0x18ed
int64_t _fini(void) {
    // 0x18e0
    int64_t result; // 0x18e0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

