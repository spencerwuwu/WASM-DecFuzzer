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
int32_t set_var(int32_t g_2_l, char g_8_l, int32_t g_9_l, int16_t g_10_l, int32_t g_27_l, char g_34_l, int32_t g_35_l, int32_t g_47_l, int32_t g_71_l, int16_t g_75_l, int32_t g_98_l, char g_111_l, int32_t g_120_l, int32_t g_121_l, int32_t g_123_l, int32_t g_124_l, int32_t g_125_l, int32_t g_136_l, int32_t g_156_l, int32_t g_162_l, int16_t g_174_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -1; // 0x5020
int32_t g3 = 2; // 0x5024
int32_t g4 = -0x67a56a8a; // 0x5028
int16_t g5 = 5; // 0x502c
int32_t g6 = -0x6b334f70; // 0x5030
int32_t g7 = 131; // 0x5034
int32_t g8 = 1; // 0x5038
int32_t g9 = -0x4c41425d; // 0x503c
int32_t g10 = 0xcfb7; // 0x5040
int32_t g11 = -1; // 0x5044
int32_t g12 = 192; // 0x5048
int32_t g13 = 1; // 0x504c
int32_t g14 = 0x4f296794; // 0x5050
int32_t g15 = -2; // 0x5054
int32_t g16 = -1; // 0x5058
int32_t g17 = -6; // 0x505c
int32_t g18 = 1; // 0x5060
int32_t g19 = -2; // 0x5064
int32_t g20 = 0xa24d; // 0x5068
int32_t g21 = -1; // 0x506c
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s89r2.c
// Address range: 0x1150 - 0x1391
// Line range:    224 - 253
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
    transparent_crc((int32_t)*(char *)&g3, "g_8", v1);
    transparent_crc(g4, "g_9", v1);
    transparent_crc((int32_t)g5, "g_10", v1);
    transparent_crc(g6, "g_27", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_34", v1);
    transparent_crc(g8, "g_35", v1);
    transparent_crc(g9, "g_47", v1);
    transparent_crc(g23, "g_71", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_75", v1);
    transparent_crc(g11, "g_98", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_111", v1);
    transparent_crc(g13, "g_120", v1);
    transparent_crc(g14, "g_121", v1);
    transparent_crc(g15, "g_123", v1);
    transparent_crc(g16, "g_124", v1);
    transparent_crc(g17, "g_125", v1);
    transparent_crc(g18, "g_136", v1);
    transparent_crc(g19, "g_156", v1);
    transparent_crc(g24, "g_162", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_174", v1);
    platform_main_end(-1 - *(int32_t *)0x506c, v1);
    return (int32_t)&g26 ^ (int32_t)&g26;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13a0 - 0x13a6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13b0 - 0x1445
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1419
        int32_t v2 = i; // 0x13b0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13e6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1424
        *(int32_t *)(4 * i + (int64_t)&g25) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s89r2.c
// Address range: 0x1450 - 0x2755
// Line range:    58 - 217
char func_1(void) {
    // 0x1450
    set_var(0, 0, -0x67a56a8a, 5, -0x6b334f70, 0, 1, -0x4c41425d, 0, -0x3049, -1, -64, 1, 0x4f296794, -2, -1, -6, 1, -2, 0, -0x5db3);
    return 2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2760 - 0x27a5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2760
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2784
        printf("...checksum after hashing %s : %X\n", vname, -1 - g21);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x27b0 - 0x27d5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x27b0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s89r2.c
// Address range: 0x27e0 - 0x2907
// Line range:    48 - 50
int32_t set_var(int32_t g_2_l, char g_8_l, int32_t g_9_l, int16_t g_10_l, int32_t g_27_l, char g_34_l, int32_t g_35_l, int32_t g_47_l, int32_t g_71_l, int16_t g_75_l, int32_t g_98_l, char g_111_l, int32_t g_120_l, int32_t g_121_l, int32_t g_123_l, int32_t g_124_l, int32_t g_125_l, int32_t g_136_l, int32_t g_156_l, int32_t g_162_l, int16_t g_174_l) {
    // 0x27e0
    g2 = g_2_l;
    *(char *)&g3 = g_8_l;
    g4 = g_9_l;
    g5 = g_10_l;
    g6 = g_27_l;
    *(char *)&g7 = g_34_l;
    g8 = g_35_l;
    g9 = g_47_l;
    g23 = g_71_l;
    *(int16_t *)&g10 = g_75_l;
    g11 = g_98_l;
    *(char *)&g12 = g_111_l;
    g13 = g_120_l;
    g14 = g_121_l;
    g15 = g_123_l;
    g16 = g_124_l;
    g17 = g_125_l;
    g18 = g_136_l;
    g19 = g_156_l;
    g24 = g_162_l;
    *(int16_t *)&g20 = g_174_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2910 - 0x296d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2910
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2970 - 0x29b0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g21;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g25); // 0x29a5
    g21 = v1 / 256 ^ v2;
}

// Address range: 0x29b0 - 0x29bd
int64_t _fini(void) {
    // 0x29b0
    int64_t result; // 0x29b0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

