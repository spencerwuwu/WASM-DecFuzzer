//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, char g_20_l, int16_t g_21_l, char g_25_l, char g_49_l, char g_58_l, int32_t g_65_l, int32_t g_78_l, int32_t g_79_l, int32_t g_80_l, int32_t g_82_l, char g_135_l, int32_t g_162_l, int16_t g_163_l, int32_t g_164_l, int32_t g_165_l, int32_t g_166_l, int32_t g_204_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -0x6f25eeae; // 0x5020
int32_t g3 = 7; // 0x5024
int32_t g4 = -0x3609ffff; // 0x5028
int32_t g5 = -0x913360a; // 0x502a
int32_t g6 = 0x6f6ecc9; // 0x502b
int32_t g7 = -0x1df90914; // 0x502c
int32_t g8 = -1; // 0x5030
int32_t g9 = -0x42fce971; // 0x5034
int32_t g10 = -6; // 0x5038
int32_t g11 = -10; // 0x503c
int32_t g12 = 59; // 0x5040
int32_t g13 = 1; // 0x5044
int32_t g14 = 0xffff; // 0x5048
int32_t g15 = -0x60236122; // 0x504c
int32_t g16 = -0x745ce89d; // 0x5050
int32_t g17 = -0x49caa2d9; // 0x5054
int32_t g18 = 0x2f9622ff; // 0x5058
int32_t g19 = -1; // 0x505c
int64_t g20 = 0; // 0x5060
int32_t g21 = 0; // 0x5070
int32_t g22 = 0; // 0x5074
int32_t g23 = 0; // 0x5075
int32_t * g24 = NULL; // 0x5080
int32_t g25;

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
        result = &g25;
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
    return &g20;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g20 != 0) {
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
    *(char *)&g20 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s302retdec.c
// Address range: 0x1150 - 0x137a
// Line range:    197 - 225
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
    transparent_crc(g21, "g_2", v1);
    transparent_crc(g2, "g_3", v1);
    transparent_crc(g3, "g_4", v1);
    transparent_crc((int32_t)*(char *)&g22, "g_20", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_21", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_25", v1);
    transparent_crc((int32_t)*(char *)&g23, "g_49", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_58", v1);
    transparent_crc(g7, "g_65", v1);
    transparent_crc(g8, "g_78", v1);
    transparent_crc(g9, "g_79", v1);
    transparent_crc(g10, "g_80", v1);
    transparent_crc(g11, "g_82", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_135", v1);
    transparent_crc(g13, "g_162", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_163", v1);
    transparent_crc(g15, "g_164", v1);
    transparent_crc(g16, "g_165", v1);
    transparent_crc(g17, "g_166", v1);
    transparent_crc(g18, "g_204", v1);
    platform_main_end(-1 - *(int32_t *)0x505c, v1);
    return (int32_t)&g25 ^ (int32_t)&g25;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1380 - 0x1386
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1380
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1390 - 0x1425
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x13f9
        int32_t v2 = i; // 0x1390
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13c6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1404
        *(int32_t *)(4 * i + (int64_t)&g24) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s302retdec.c
// Address range: 0x1430 - 0x204e
// Line range:    57 - 190
char func_1(void) {
    int32_t v1 = -12; // 0x1dfc
    bool v2 = false; // 0x1430
    int32_t v3 = -0x42fce971; // 0x1df3
    int32_t v4 = -0x1df90914;
    char v5 = 0; // 0x164a
    int32_t v6 = 0;
    char v7 = 0; // 0x183f
    v5++;
    v4 += 27;
    char v8 = 0; // 0x17d4
    char v9 = 0; // 0x17d4
    char v10; // 0x1430
    int32_t v11; // 0x1430
    char v12; // 0x1430
    while (v2) {
        // 0x183b
        v12 = v7;
        v7 = v12 + 6;
        v11 = v4;
        v10 = v5;
        v8 = v12;
        v9 = v7;
        if (v7 > 19) {
            // break -> 0x184f
            break;
        }
        v5 = v10 + 1;
        v4 = v11 + 27;
        v8 = 0;
        v9 = 0;
    }
    int32_t v13 = v6 - 1; // 0x160d
    while (v6 >= -8) {
        // 0x1621
        v6 = v13;
        v7 = 0;
        v5++;
        v4 += 27;
        v8 = 0;
        v9 = 0;
        while (v2) {
            // 0x183b
            v12 = v7;
            v7 = v12 + 6;
            v11 = v4;
            v10 = v5;
            v8 = v12;
            v9 = v7;
            if (v7 > 19) {
                // break -> 0x184f
                break;
            }
            v5 = v10 + 1;
            v4 = v11 + 27;
            v8 = 0;
            v9 = 0;
        }
        // 0x184f
        v13 = v6 - 1;
    }
    // 0x1863
    v3 ^= (int32_t)(v5 & -5);
    v1++;
    v2 = true;
    while (v1 != 17) {
        // 0x14f2
        v6 = 0;
        v7 = 0;
        v5++;
        v4 += 27;
        v8 = 0;
        v9 = 0;
        while (v2) {
            // 0x183b
            v12 = v7;
            v7 = v12 + 6;
            v11 = v4;
            v10 = v5;
            v8 = v12;
            v9 = v7;
            if (v7 > 19) {
                // break -> 0x184f
                break;
            }
            v5 = v10 + 1;
            v4 = v11 + 27;
            v8 = 0;
            v9 = 0;
        }
        // 0x184f
        v13 = v6 - 1;
        while (v6 >= -8) {
            // 0x1621
            v6 = v13;
            v7 = 0;
            v5++;
            v4 += 27;
            v8 = 0;
            v9 = 0;
            while (v2) {
                // 0x183b
                v12 = v7;
                v7 = v12 + 6;
                v11 = v4;
                v10 = v5;
                v8 = v12;
                v9 = v7;
                if (v7 > 19) {
                    // break -> 0x184f
                    break;
                }
                v5 = v10 + 1;
                v4 = v11 + 27;
                v8 = 0;
                v9 = 0;
            }
            // 0x184f
            v13 = v6 - 1;
        }
        // 0x1863
        v3 ^= (int32_t)(v5 & -5);
        v1++;
        v2 = true;
    }
    char v14 = -24 - v8; // 0x1723
    int32_t v15 = v14; // 0x1e1a
    set_var(0, 1, 0x699a, 2 * (char)((0xffbc - v15 & v15) < 0), 0x331d, v9, v5, v14, v4, -1, v3, -6, -10, 59, 1, -1, 0, -0x745ce89d, -0x49caa2d9, 0x2f9622ff);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2050 - 0x2095
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2050
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2074
        printf("...checksum after hashing %s : %X\n", vname, -1 - g19);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x20a0 - 0x20c5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x20a0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s302retdec.c
// Address range: 0x20d0 - 0x2202
// Line range:    47 - 49
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, char g_20_l, int16_t g_21_l, char g_25_l, char g_49_l, char g_58_l, int32_t g_65_l, int32_t g_78_l, int32_t g_79_l, int32_t g_80_l, int32_t g_82_l, char g_135_l, int32_t g_162_l, int16_t g_163_l, int32_t g_164_l, int32_t g_165_l, int32_t g_166_l, int32_t g_204_l) {
    // 0x20d0
    g21 = g_2_l;
    g2 = g_3_l;
    g3 = g_4_l;
    *(char *)&g22 = g_20_l;
    *(int16_t *)&g4 = g_21_l;
    *(char *)&g5 = g_25_l;
    *(char *)&g23 = g_49_l;
    *(char *)&g6 = g_58_l;
    g7 = g_65_l;
    g8 = g_78_l;
    g9 = g_79_l;
    g10 = g_80_l;
    g11 = g_82_l;
    *(char *)&g12 = g_135_l;
    g13 = g_162_l;
    *(int16_t *)&g14 = g_163_l;
    g15 = g_164_l;
    g16 = g_165_l;
    g17 = g_166_l;
    g18 = g_204_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2210 - 0x226d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2210
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2270 - 0x22b0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g19;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g24); // 0x22a5
    g19 = v1 / 256 ^ v2;
}

// Address range: 0x22b0 - 0x22bd
int64_t _fini(void) {
    // 0x22b0
    int64_t result; // 0x22b0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

