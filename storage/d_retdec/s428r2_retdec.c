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
int32_t set_var(int32_t g_6_l, int32_t g_11_l, char g_12_l, int32_t g_23_l, int32_t g_34_l, int32_t g_36_l, int16_t g_38_l, int32_t g_39_l, int16_t g_62_l, char g_63_l, int32_t g_84_l, int16_t g_85_l, int32_t g_86_l, int32_t g_89_l, char g_90_l, int32_t g_100_l, int16_t g_101_l, int32_t g_144_l, int16_t g_188_l, int32_t g_189_l, int32_t g_190_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -0x5c612f80; // 0x5020
int32_t g3 = -0x49b02582; // 0x5024
int32_t g4 = 101; // 0x5028
int32_t g5 = -5; // 0x502c
int32_t g6 = -1; // 0x5030
int32_t g7 = -1; // 0x5034
int32_t g8 = 0x58e7; // 0x5038
int32_t g9 = -1; // 0x503c
int32_t g10 = 0xacbdc9; // 0x5040
int32_t g11 = -0x7ff54; // 0x5042
int32_t g12 = -8; // 0x5044
int32_t g13 = 1325; // 0x5048
int32_t g14 = -0x39a0ce1; // 0x504c
int32_t g15 = 0x806af73; // 0x5050
int32_t g16 = 255; // 0x5054
int32_t g17 = -0x28b13466; // 0x5058
int32_t g18 = 1; // 0x505c
int32_t g19 = -0x271e61e; // 0x5060
int32_t g20 = 0x3aa0; // 0x5064
int32_t g21 = -4; // 0x5068
int32_t g22 = 6; // 0x506c
int32_t g23 = -1; // 0x5070
char g24 = 0; // 0x5080
int32_t * g25 = NULL; // 0x5090
int16_t g26 = 0x6174; // 0x52d
int32_t g27;

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
        result = &g27;
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
    return 0x5078;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g24 != 0) {
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
    g24 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s428r2.c
// Address range: 0x1150 - 0x1390
// Line range:    211 - 240
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
    transparent_crc(g2, "g_6", v1);
    transparent_crc(g3, "g_11", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_12", v1);
    transparent_crc(g5, "g_23", v1);
    transparent_crc(g6, "g_34", v1);
    transparent_crc(g7, "g_36", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_38", v1);
    transparent_crc(g9, "g_39", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_62", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_63", v1);
    transparent_crc(g12, "g_84", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_85", v1);
    transparent_crc(g14, "g_86", v1);
    transparent_crc(g15, "g_89", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_90", v1);
    transparent_crc(g17, "g_100", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_101", v1);
    transparent_crc(g19, "g_144", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_188", v1);
    transparent_crc(g21, "g_189", v1);
    transparent_crc(g22, "g_190", v1);
    platform_main_end(-1 - *(int32_t *)0x5070, v1);
    return (int32_t)&g27 ^ (int32_t)&g27;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1390 - 0x1396
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1390
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13a0 - 0x1435
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1409
        int32_t v2 = i; // 0x13a0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13d6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1414
        *(int32_t *)(4 * i + (int64_t)&g25) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s428r2.c
// Address range: 0x1440 - 0x2251
// Line range:    58 - 204
char func_1(void) {
    // 0x1440
    set_var(0, -0x49b02582, -62, -5, -1, -1, -1, -1, 0, -2, -8, (int16_t)&g26, -0x39a0ce1, 0x806af73, -1, -0x28b13466, 1, -0x271e61e, 0x3aa0, -4, 6);
    return 63;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2260 - 0x22a5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2260
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2284
        printf("...checksum after hashing %s : %X\n", vname, -1 - g23);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x22b0 - 0x22d5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x22b0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s428r2.c
// Address range: 0x22e0 - 0x23fd
// Line range:    48 - 50
int32_t set_var(int32_t g_6_l, int32_t g_11_l, char g_12_l, int32_t g_23_l, int32_t g_34_l, int32_t g_36_l, int16_t g_38_l, int32_t g_39_l, int16_t g_62_l, char g_63_l, int32_t g_84_l, int16_t g_85_l, int32_t g_86_l, int32_t g_89_l, char g_90_l, int32_t g_100_l, int16_t g_101_l, int32_t g_144_l, int16_t g_188_l, int32_t g_189_l, int32_t g_190_l) {
    // 0x22e0
    g2 = g_6_l;
    g3 = g_11_l;
    *(char *)&g4 = g_12_l;
    g5 = g_23_l;
    g6 = g_34_l;
    g7 = g_36_l;
    *(int16_t *)&g8 = g_38_l;
    g9 = g_39_l;
    *(int16_t *)&g10 = g_62_l;
    *(char *)&g11 = g_63_l;
    g12 = g_84_l;
    *(int16_t *)&g13 = g_85_l;
    g14 = g_86_l;
    g15 = g_89_l;
    *(char *)&g16 = g_90_l;
    g17 = g_100_l;
    *(int16_t *)&g18 = g_101_l;
    g19 = g_144_l;
    *(int16_t *)&g20 = g_188_l;
    g21 = g_189_l;
    g22 = g_190_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2400 - 0x245d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2400
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2460 - 0x24a0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g23;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g25); // 0x2495
    g23 = v1 / 256 ^ v2;
}

// Address range: 0x24a0 - 0x24ad
int64_t _fini(void) {
    // 0x24a0
    int64_t result; // 0x24a0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

