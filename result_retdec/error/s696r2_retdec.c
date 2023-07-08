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
int32_t func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_10_l, int32_t g_12_l, int32_t g_30_l, int16_t g_33_l, int32_t g_34_l, int32_t g_47_l, int16_t g_48_l, int16_t g_49_l, int16_t g_61_l, int16_t g_63_l, int32_t g_68_l, char g_71_l, char g_72_l, char g_73_l, int32_t g_91_l, int16_t g_92_l, char g_97_l, int32_t g_111_l, int32_t g_113_l, int32_t g_158_l, int32_t g_183_l, int16_t g_184_l, int32_t g_189_l, int32_t g_190_l, int32_t g_191_l, int32_t g_196_l, int32_t g_248_l, int16_t g_297_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = -10; // 0x6020
int32_t g3 = 0x6df7e441; // 0x6024
int32_t g4 = 0x587697ab; // 0x6028
int32_t g5 = 0xbf7d; // 0x602c
int32_t g6 = 0x45925f8a; // 0x6030
int32_t g7 = -0x2bf09601; // 0x6034
int32_t g8 = -0x8e543; // 0x6038
int32_t g9 = -0x6e260009; // 0x603a
int16_t g10 = -0x6e27; // 0x603c
int32_t g11 = 0x232cfffe; // 0x603e
int32_t g12 = 0x1b61232c; // 0x6040
int32_t g13 = 0x9fe01; // 0x6044
int32_t g14 = -0x4fff602; // 0x6045
int32_t g15 = -0x4fff7; // 0x6046
int32_t g16 = -5; // 0x6048
int32_t g17 = 213; // 0x604c
int32_t g18 = -0x5e11b13e; // 0x6050
int32_t g19 = 1; // 0x6054
int32_t g20 = 0x766aa345; // 0x6058
int32_t g21 = 0x5464; // 0x605c
int32_t g22 = 3; // 0x6060
int32_t g23 = -7; // 0x6064
int32_t g24 = 8; // 0x6068
int32_t g25 = 1; // 0x606c
int32_t g26 = 0x16560234; // 0x6070
int16_t g27 = -0x29a1; // 0x6074
int32_t g28 = -1; // 0x6078
int64_t g29 = 0; // 0x6080
int32_t g30 = 0; // 0x6090
int32_t g31 = 0; // 0x6094
int32_t * g32 = NULL; // 0x60a0
int32_t g33 = 0; // 0x60d9
int32_t g34;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x5fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g34;
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
    return &g29;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g29 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x6018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g29 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s696r2.c
// Address range: 0x1150 - 0x142d
// Line range:    276 - 312
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
    transparent_crc(g3, "g_12", v1);
    transparent_crc(g4, "g_30", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_33", v1);
    transparent_crc(g6, "g_34", v1);
    transparent_crc(g7, "g_47", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_48", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_49", v1);
    transparent_crc((int32_t)g10, "g_61", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_63", v1);
    transparent_crc(g12, "g_68", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_71", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_72", v1);
    transparent_crc((int32_t)*(char *)&g15, "g_73", v1);
    transparent_crc(g16, "g_91", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_92", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_97", v1);
    transparent_crc(g31, "g_111", v1);
    transparent_crc(g18, "g_113", v1);
    transparent_crc(g19, "g_158", v1);
    transparent_crc(g20, "g_183", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_184", v1);
    transparent_crc(g22, "g_189", v1);
    transparent_crc(g23, "g_190", v1);
    transparent_crc(g24, "g_191", v1);
    transparent_crc(g25, "g_196", v1);
    transparent_crc(g26, "g_248", v1);
    transparent_crc((int32_t)g27, "g_297", v1);
    platform_main_end(-1 - *(int32_t *)0x6078, v1);
    return (int32_t)&g34 ^ (int32_t)&g34;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1430 - 0x1436
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1430
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1440 - 0x14d5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14a9
        int32_t v2 = i; // 0x1440
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1476
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14b4
        *(int32_t *)(4 * i + (int64_t)&g32) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s696r2.c
// Address range: 0x14e0 - 0x2d49
// Line range:    65 - 269
int32_t func_1(void) {
    // 0x14e0
    set_var(-10, 1, 0xfff9, (int16_t)(bool)(-(int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) >= 4 ^ (((int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4) & (-4 - (int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4)) < 0), 26, 0x5ead4a2b, (int16_t)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff6) - 1 & ((int16_t)(((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ true) ^ -9) & (int16_t)(bool)(-(int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) >= 4 ^ (((int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4) & (-4 - (int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4)) < 0), (int16_t)(((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ true) ^ -9, -0x6e27, 745, 0x1b61232b, 1, -2, (char)(bool)((int32_t)(bool)(-(int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) >= 4 ^ (((int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4) & (-4 - (int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4)) < 0) != (int32_t)((int16_t)(((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ true) ^ -9)), (int32_t)(bool)(-(int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) >= 4 ^ (((int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4) & (-4 - (int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4)) < 0), (int16_t)(bool)((int32_t)(bool)((int32_t)(bool)(-(int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) >= 4 ^ (((int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4) & (-4 - (int32_t)(bool)((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ -4)) < 0) != (int32_t)((int16_t)(((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) == 0x5eac4a34 | (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) < 0x5eac4a34 ^ ((int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0) + 0xfff7 & 0x5eac4a33 - (int32_t)(bool)(-(int32_t)&g33 >= -1 ^ (1 - (int32_t)&g33 & (int32_t)&g33) < 0)) < 0) ^ true) ^ -9)) != -0x72e1905a), -43, 0, -0x5e11b13e, 1, 0x766aa345, 0x5464, 3, -7, 8, 1, 0x16560234, -0x29a1);
    return 157;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2d50 - 0x2d95
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2d50
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2d74
        printf("...checksum after hashing %s : %X\n", vname, -1 - g28);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2da0 - 0x2dc5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2da0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s696r2.c
// Address range: 0x2dd0 - 0x2f75
// Line range:    55 - 57
int32_t set_var(int32_t g_10_l, int32_t g_12_l, int32_t g_30_l, int16_t g_33_l, int32_t g_34_l, int32_t g_47_l, int16_t g_48_l, int16_t g_49_l, int16_t g_61_l, int16_t g_63_l, int32_t g_68_l, char g_71_l, char g_72_l, char g_73_l, int32_t g_91_l, int16_t g_92_l, char g_97_l, int32_t g_111_l, int32_t g_113_l, int32_t g_158_l, int32_t g_183_l, int16_t g_184_l, int32_t g_189_l, int32_t g_190_l, int32_t g_191_l, int32_t g_196_l, int32_t g_248_l, int16_t g_297_l) {
    // 0x2dd0
    g2 = g_10_l;
    g3 = g_12_l;
    g4 = g_30_l;
    *(int16_t *)&g5 = g_33_l;
    g6 = g_34_l;
    g7 = g_47_l;
    *(int16_t *)&g8 = g_48_l;
    *(int16_t *)&g9 = g_49_l;
    g10 = g_61_l;
    *(int16_t *)&g11 = g_63_l;
    g12 = g_68_l;
    *(char *)&g13 = g_71_l;
    *(char *)&g14 = g_72_l;
    *(char *)&g15 = g_73_l;
    g16 = g_91_l;
    *(int16_t *)&g30 = g_92_l;
    *(char *)&g17 = g_97_l;
    g31 = g_111_l;
    g18 = g_113_l;
    g19 = g_158_l;
    g20 = g_183_l;
    *(int16_t *)&g21 = g_184_l;
    g22 = g_189_l;
    g23 = g_190_l;
    g24 = g_191_l;
    g25 = g_196_l;
    g26 = g_248_l;
    g27 = g_297_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2f80 - 0x2fdd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2f80
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fe0 - 0x3020
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g28;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g32); // 0x3015
    g28 = v1 / 256 ^ v2;
}

// Address range: 0x3020 - 0x302d
int64_t _fini(void) {
    // 0x3020
    int64_t result; // 0x3020
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

