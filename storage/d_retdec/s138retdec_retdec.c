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
int32_t set_var(int32_t g_2_l, int16_t g_11_l, int16_t g_16_l, int32_t g_26_l, char g_28_l, int16_t g_30_l, int16_t g_33_l, int32_t g_44_l, int16_t g_48_l, int32_t g_62_l, int16_t g_63_l, char g_88_l, char g_112_l, char g_113_l, int32_t g_148_l, char g_150_l, int32_t g_242_l, char g_265_l, int32_t g_283_l, int16_t g_284_l, char g_290_l, int16_t g_299_l, char g_363_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -0xaabf281; // 0x5020
int32_t g3 = 0x6b9c568b; // 0x5024
int32_t g4 = -0xd1f9464; // 0x5026
int32_t g5 = -0x60760d20; // 0x5028
int32_t g6 = 0x3e700067; // 0x502c
int32_t g7 = -0xa85c190; // 0x502e
int32_t g8 = 0x3f57a; // 0x5030
int32_t g9 = -0x2314fffd; // 0x5032
int32_t g10 = 0x6996dceb; // 0x5034
int32_t g11 = 0x1fbfff8; // 0x5038
int32_t g12 = 0xf801fb; // 0x503a
char g13 = 1; // 0x503b
int32_t g14 = 248; // 0x503c
int32_t g15 = -0x7613ce5f; // 0x5040
char g16 = -7; // 0x5044
int32_t g17 = 0x4616ce41; // 0x5048
int32_t g18 = 204; // 0x504c
int32_t g19 = 1; // 0x5050
int32_t g20 = 0x96bb26; // 0x5054
char g21 = -106; // 0x5056
int16_t g22 = -0x4a23; // 0x5058
int64_t g23; // 0x505a
int32_t g24 = -1; // 0x505c
int64_t g25 = 0; // 0x5060
int32_t g26 = 0; // 0x5070
int32_t * g27 = NULL; // 0x5080
int32_t g28;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x4fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g28;
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
    return &g25;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g25 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x5018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g25 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s138retdec.c
// Address range: 0x1150 - 0x13df
// Line range:    290 - 322
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
    transparent_crc((int32_t)*(int16_t *)&g3, "g_11", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_16", v1);
    transparent_crc(g5, "g_26", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_28", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_30", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_33", v1);
    transparent_crc(g26, "g_44", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_48", v1);
    transparent_crc(g10, "g_62", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_63", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_88", v1);
    transparent_crc((int32_t)g13, "g_112", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_113", v1);
    transparent_crc(g15, "g_148", v1);
    transparent_crc((int32_t)g16, "g_150", v1);
    transparent_crc(g17, "g_242", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_265", v1);
    transparent_crc(g19, "g_283", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_284", v1);
    transparent_crc((int32_t)g21, "g_290", v1);
    transparent_crc((int32_t)g22, "g_299", v1);
    transparent_crc(-91, "g_342", v1);
    transparent_crc((int32_t)*(char *)0x505a, "g_363", v1);
    platform_main_end(-1 - *(int32_t *)0x505c, v1);
    return (int32_t)&g28 ^ (int32_t)&g28;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x13e0 - 0x13e6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13e0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13f0 - 0x1485
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1459
        int32_t v2 = i; // 0x13f0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1426
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1464
        *(int32_t *)(4 * i + (int64_t)&g27) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s138retdec.c
// Address range: 0x1490 - 0x2b7b
// Line range:    61 - 283
char func_1(void) {
    // 0x1490
    set_var(-16, -1, 0, -0x60760d20, 103, 0x3e70, -2694, 0, 3, 0x6996dceb, -8, -5, 1, -8, -13, -7, 0x4616ce41, -52, 1, -0x44da, -106, -0x4a23, 18);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b80 - 0x2bc5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2b80
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2ba4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g24);
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x2bd0 - 0x2bf5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2bd0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s138retdec.c
// Address range: 0x2c00 - 0x2d7e
// Line range:    51 - 53
int32_t set_var(int32_t g_2_l, int16_t g_11_l, int16_t g_16_l, int32_t g_26_l, char g_28_l, int16_t g_30_l, int16_t g_33_l, int32_t g_44_l, int16_t g_48_l, int32_t g_62_l, int16_t g_63_l, char g_88_l, char g_112_l, char g_113_l, int32_t g_148_l, char g_150_l, int32_t g_242_l, char g_265_l, int32_t g_283_l, int16_t g_284_l, char g_290_l, int16_t g_299_l, char g_363_l) {
    // 0x2c00
    g2 = g_2_l;
    *(int16_t *)&g3 = g_11_l;
    *(int16_t *)&g4 = g_16_l;
    g5 = g_26_l;
    *(char *)&g6 = g_28_l;
    *(int16_t *)&g7 = g_30_l;
    *(int16_t *)&g8 = g_33_l;
    g26 = g_44_l;
    *(int16_t *)&g9 = g_48_l;
    g10 = g_62_l;
    *(int16_t *)&g11 = g_63_l;
    *(char *)&g12 = g_88_l;
    g13 = g_112_l;
    *(char *)&g14 = g_113_l;
    g15 = g_148_l;
    g16 = g_150_l;
    g17 = g_242_l;
    *(char *)&g18 = g_265_l;
    g19 = g_283_l;
    *(int16_t *)&g20 = g_284_l;
    g21 = g_290_l;
    g22 = g_299_l;
    *(char *)&g23 = g_363_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2d80 - 0x2ddd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2d80
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2de0 - 0x2e20
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g24;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g27); // 0x2e15
    g24 = v1 / 256 ^ v2;
}

// Address range: 0x2e20 - 0x2e2d
int64_t _fini(void) {
    // 0x2e20
    int64_t result; // 0x2e20
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

