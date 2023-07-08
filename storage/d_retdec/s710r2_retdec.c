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
int16_t func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int16_t g_11_l, char g_18_l, int16_t g_20_l, int32_t g_21_l, int32_t g_41_l, int32_t g_52_l, int32_t g_77_l, int16_t g_79_l, int32_t g_80_l, int32_t g_85_l, int32_t g_86_l, int32_t g_100_l, int16_t g_131_l, int32_t g_132_l, int16_t g_140_l, int32_t g_141_l, int32_t g_143_l, char g_144_l, char g_146_l, int32_t g_147_l, int16_t g_150_l, int16_t g_153_l, int32_t g_174_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0x1a0006; // 0x5020
int32_t g3 = 0x45d7001a; // 0x5022
int32_t g4 = 0x45d7; // 0x5024
int32_t g5 = -0x504140f6; // 0x5028
int32_t g6 = -0x5b5103af; // 0x502c
int32_t g7 = 2; // 0x5030
int32_t g8 = 0x70b1de00; // 0x5034
int32_t g9 = 0xfffe; // 0x5038
int32_t g10 = 0x681e8b00; // 0x503c
int32_t g11 = 6; // 0x5040
int32_t g12 = -0x26697370; // 0x5044
int32_t g13 = 0x393687ea; // 0x5048
int32_t g14 = 0xffff; // 0x504c
int32_t g15 = 0x50add41a; // 0x5050
int16_t g16 = 1; // 0x5054
int32_t g17 = -1; // 0x5058
int32_t g18 = -10; // 0x505c
int32_t g19 = 107; // 0x5060
int32_t g20 = 2; // 0x5064
int32_t g21 = 0x467c6f64; // 0x5068
int16_t g22 = 0x467c; // 0x506a
int32_t g23 = -0x103f5106; // 0x506c
int32_t g24 = -1; // 0x5070
char g25 = 0; // 0x5080
int32_t g26 = 0; // 0x5090
int32_t * g27 = NULL; // 0x50a0
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
    if (g25 != 0) {
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
    g25 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s710r2.c
// Address range: 0x1150 - 0x13c2
// Line range:    187 - 218
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_11", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_18", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_20", v1);
    transparent_crc(g5, "g_21", v1);
    transparent_crc(g6, "g_41", v1);
    transparent_crc(g7, "g_52", v1);
    transparent_crc(g8, "g_77", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_79", v1);
    transparent_crc(g10, "g_80", v1);
    transparent_crc(g11, "g_85", v1);
    transparent_crc(g12, "g_86", v1);
    transparent_crc(g13, "g_100", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_131", v1);
    transparent_crc(g15, "g_132", v1);
    transparent_crc((int32_t)g16, "g_140", v1);
    transparent_crc(g17, "g_141", v1);
    transparent_crc(g18, "g_143", v1);
    transparent_crc((int32_t)*(char *)&g26, "g_144", v1);
    transparent_crc((int32_t)*(char *)&g19, "g_146", v1);
    transparent_crc(g20, "g_147", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_150", v1);
    transparent_crc((int32_t)g22, "g_153", v1);
    transparent_crc(g23, "g_174", v1);
    platform_main_end(-1 - *(int32_t *)0x5070, v1);
    return (int32_t)&g28 ^ (int32_t)&g28;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13d0 - 0x13d6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13e0 - 0x1475
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1449
        int32_t v2 = i; // 0x13e0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1416
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1454
        *(int32_t *)(4 * i + (int64_t)&g27) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s710r2.c
// Address range: 0x1480 - 0x2000
// Line range:    60 - 179
int16_t func_1(void) {
    // 0x1e06
    set_var(0, 1, 0, 0, -0x5b5103af, 2, 0x70b1de00, -2, 0x681e8b00, 6, 4, 0x393687ea, -1, 0x50add41a, 1, -10, -10, 115, 107, 2, 0x6f64, 0x467c, -0x103f5106);
    return 2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2000 - 0x2045
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2000
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2024
        printf("...checksum after hashing %s : %X\n", vname, -1 - g24);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2050 - 0x2075
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2050
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s710r2.c
// Address range: 0x2080 - 0x21d0
// Line range:    50 - 52
int32_t set_var(int16_t g_11_l, char g_18_l, int16_t g_20_l, int32_t g_21_l, int32_t g_41_l, int32_t g_52_l, int32_t g_77_l, int16_t g_79_l, int32_t g_80_l, int32_t g_85_l, int32_t g_86_l, int32_t g_100_l, int16_t g_131_l, int32_t g_132_l, int16_t g_140_l, int32_t g_141_l, int32_t g_143_l, char g_144_l, char g_146_l, int32_t g_147_l, int16_t g_150_l, int16_t g_153_l, int32_t g_174_l) {
    // 0x2080
    *(int16_t *)&g2 = g_11_l;
    *(char *)&g3 = g_18_l;
    *(int16_t *)&g4 = g_20_l;
    g5 = g_21_l;
    g6 = g_41_l;
    g7 = g_52_l;
    g8 = g_77_l;
    *(int16_t *)&g9 = g_79_l;
    g10 = g_80_l;
    g11 = g_85_l;
    g12 = g_86_l;
    g13 = g_100_l;
    *(int16_t *)&g14 = g_131_l;
    g15 = g_132_l;
    g16 = g_140_l;
    g17 = g_141_l;
    g18 = g_143_l;
    *(char *)&g26 = g_144_l;
    *(char *)&g19 = g_146_l;
    g20 = g_147_l;
    *(int16_t *)&g21 = g_150_l;
    g22 = g_153_l;
    g23 = g_174_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x21d0 - 0x222d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x21d0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2230 - 0x2270
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g24;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g27); // 0x2265
    g24 = v1 / 256 ^ v2;
}

// Address range: 0x2270 - 0x227d
int64_t _fini(void) {
    // 0x2270
    int64_t result; // 0x2270
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

