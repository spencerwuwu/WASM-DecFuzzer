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
int32_t set_var(char g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_6_l, int32_t g_7_l, int32_t g_8_l, int32_t g_9_l, int16_t g_16_l, int32_t g_17_l, int32_t g_23_l, int32_t g_54_l, int32_t g_59_l, int16_t g_75_l, int32_t g_76_l, int16_t g_100_l, char g_114_l, int32_t g_139_l, int32_t g_148_l, int32_t g_157_l, int32_t g_178_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
char g2 = 2; // 0x5020
int32_t g3 = 1; // 0x5024
int32_t g4 = -1; // 0x5028
int32_t g5 = -1; // 0x502c
int32_t g6 = -0x162fa459; // 0x5030
int32_t g7 = 0x4b25b3b; // 0x5034
int32_t g8 = 3; // 0x5038
int32_t g9 = 9; // 0x503c
int32_t g10 = 0x35e1; // 0x5040
int32_t g11 = 7; // 0x5044
int32_t g12 = -2; // 0x5048
int32_t g13 = 1; // 0x504c
int32_t g14 = -0x7222852e; // 0x5050
int32_t g15 = 9; // 0x5054
int32_t g16 = -7; // 0x5058
int32_t g17 = 0x1962f; // 0x505c
int32_t g18 = 0x10001; // 0x505e
int32_t g19 = 1; // 0x5060
int32_t g20 = -10; // 0x5064
int32_t g21 = -1; // 0x5068
int64_t g22 = 0; // 0x5070
int32_t g23 = 0; // 0x5080
int32_t g24 = 0; // 0x5084
int32_t * g25 = NULL; // 0x5090
int32_t g26;

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
        result = &g26;
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
    return &g22;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g22 != 0) {
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
    *(char *)&g22 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s461r2.c
// Address range: 0x1150 - 0x138f
// Line range:    191 - 220
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
    transparent_crc((int32_t)g2, "g_2", v1);
    transparent_crc(g3, "g_3", v1);
    transparent_crc(g4, "g_4", v1);
    transparent_crc(g5, "g_5", v1);
    transparent_crc(g6, "g_6", v1);
    transparent_crc(g7, "g_7", v1);
    transparent_crc(g8, "g_8", v1);
    transparent_crc(g9, "g_9", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_16", v1);
    transparent_crc(g11, "g_17", v1);
    transparent_crc(g12, "g_23", v1);
    transparent_crc(g13, "g_54", v1);
    transparent_crc(g14, "g_59", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_75", v1);
    transparent_crc(g16, "g_76", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_100", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_114", v1);
    transparent_crc(g19, "g_139", v1);
    transparent_crc(g23, "g_148", v1);
    transparent_crc(g24, "g_157", v1);
    transparent_crc(g20, "g_178", v1);
    platform_main_end(-1 - *(int32_t *)0x5068, v1);
    return (int32_t)&g26 ^ (int32_t)&g26;
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s461r2.c
// Address range: 0x1440 - 0x21f6
// Line range:    58 - 184
int16_t func_1(void) {
    // 0x1ff1
    set_var(2, 1, 1, -1, -0x162fa459, 0x4b25b3b, 3, -0x77f8720d, 0x35e1, 7, -2, 1, -0x7222852e, 9, -7, -0x69d1, 1, 1, 0, 0, -10);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2200 - 0x2245
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2200
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2224
        printf("...checksum after hashing %s : %X\n", vname, -1 - g21);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2250 - 0x2275
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2250
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s461r2.c
// Address range: 0x2280 - 0x2399
// Line range:    48 - 50
int32_t set_var(char g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_6_l, int32_t g_7_l, int32_t g_8_l, int32_t g_9_l, int16_t g_16_l, int32_t g_17_l, int32_t g_23_l, int32_t g_54_l, int32_t g_59_l, int16_t g_75_l, int32_t g_76_l, int16_t g_100_l, char g_114_l, int32_t g_139_l, int32_t g_148_l, int32_t g_157_l, int32_t g_178_l) {
    // 0x2280
    g2 = g_2_l;
    g3 = g_3_l;
    g4 = g_4_l;
    g5 = g_5_l;
    g6 = g_6_l;
    g7 = g_7_l;
    g8 = g_8_l;
    g9 = g_9_l;
    *(int16_t *)&g10 = g_16_l;
    g11 = g_17_l;
    g12 = g_23_l;
    g13 = g_54_l;
    g14 = g_59_l;
    *(int16_t *)&g15 = g_75_l;
    g16 = g_76_l;
    *(int16_t *)&g17 = g_100_l;
    *(char *)&g18 = g_114_l;
    g19 = g_139_l;
    g23 = g_148_l;
    g24 = g_157_l;
    g20 = g_178_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x23a0 - 0x23fd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x23a0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2400 - 0x2440
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g21;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g25); // 0x2435
    g21 = v1 / 256 ^ v2;
}

// Address range: 0x2440 - 0x244d
int64_t _fini(void) {
    // 0x2440
    int64_t result; // 0x2440
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

