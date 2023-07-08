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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_13_l, int16_t g_14_l, int16_t g_23_l, int16_t g_43_l, char g_44_l, int32_t g_46_l, char g_47_l, int32_t g_48_l, char g_49_l, int32_t g_52_l, int32_t g_54_l, int32_t g_55_l, int16_t g_56_l, int16_t g_63_l, int32_t g_66_l, char g_76_l, int32_t g_83_l, int32_t g_84_l, int32_t g_164_l, int16_t g_167_l, int32_t g_168_l, int32_t g_176_l, int32_t g_178_l, int16_t g_180_l, int32_t g_201_l, int32_t g_249_l, int32_t g_253_l, int32_t g_264_l, int32_t g_274_l, int32_t g_275_l, int32_t g_279_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -9; // 0x5020
int32_t g3 = -5; // 0x5024
int32_t g4 = 1; // 0x5028
int32_t g5 = -0x1f75ffa2; // 0x502c
int32_t g6 = -0x1f76; // 0x502e
int32_t g7 = 0x66daffff; // 0x5030
int32_t g8 = 0x466da; // 0x5032
int32_t g9 = 4; // 0x5034
int32_t g10 = -0x154d22d4; // 0x5038
int32_t g11 = 228; // 0x503c
int32_t g12 = 0x5c6a8b5f; // 0x5040
int32_t g13 = 20; // 0x5044
int32_t g14 = 9; // 0x5048
int32_t g15 = 1; // 0x504c
int16_t g16 = -0x5c30; // 0x5050
int32_t g17 = 0x391005a; // 0x5052
int32_t g18 = -0xb3ffc6f; // 0x5054
int32_t g19 = 0x6e04528; // 0x5058
int32_t g20 = 0x6763; // 0x505c
int32_t g21 = -0x56347ac1; // 0x5060
int32_t g22 = 1; // 0x5064
int32_t g23 = -0x381cda2; // 0x5068
int32_t g24 = 0xffff; // 0x506c
int32_t g25 = 1; // 0x5070
int32_t g26 = -0x3470abec; // 0x5074
int32_t g27 = -1; // 0x5078
int32_t g28 = 0x38305e1e; // 0x507c
int32_t g29 = 6; // 0x5080
int32_t g30 = 5; // 0x5084
int32_t g31 = -1; // 0x5088
int64_t g32 = 0; // 0x5090
int32_t g33 = 0; // 0x50a0
int32_t g34 = 0; // 0x50a4
int32_t g35 = 0; // 0x50a8
int32_t g36 = 0; // 0x50ac
int32_t g37 = 0; // 0x50b0
int32_t * g38 = NULL; // 0x50c0
int32_t g39;

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
        result = &g39;
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
    return &g32;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g32 != 0) {
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
    *(char *)&g32 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s492r2.c
// Address range: 0x1150 - 0x14a8
// Line range:    318 - 360
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
    transparent_crc(g4, "g_6", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_13", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_14", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_23", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_43", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_44", v1);
    transparent_crc(g10, "g_46", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_47", v1);
    transparent_crc(g12, "g_48", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_49", v1);
    transparent_crc(g33, "g_52", v1);
    transparent_crc(g14, "g_54", v1);
    transparent_crc(g15, "g_55", v1);
    transparent_crc((int32_t)g16, "g_56", v1);
    transparent_crc((int32_t)*(int16_t *)&g34, "g_63", v1);
    transparent_crc(g35, "g_66", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_76", v1);
    transparent_crc(g36, "g_83", v1);
    transparent_crc(g18, "g_84", v1);
    transparent_crc(g19, "g_164", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_167", v1);
    transparent_crc(g21, "g_168", v1);
    transparent_crc(g22, "g_176", v1);
    transparent_crc(g23, "g_178", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_180", v1);
    transparent_crc(g25, "g_201", v1);
    transparent_crc(g26, "g_249", v1);
    transparent_crc(g27, "g_253", v1);
    transparent_crc(g28, "g_264", v1);
    transparent_crc(g29, "g_274", v1);
    transparent_crc(g30, "g_275", v1);
    transparent_crc(g37, "g_279", v1);
    platform_main_end(-1 - *(int32_t *)0x5088, v1);
    return (int32_t)&g39 ^ (int32_t)&g39;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14b0 - 0x14b6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14c0 - 0x1555
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1529
        int32_t v2 = i; // 0x14c0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x14f6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1534
        *(int32_t *)(4 * i + (int64_t)&g38) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s492r2.c
// Address range: 0x1560 - 0x2922
// Line range:    71 - 311
int16_t func_1(void) {
    // 0x1560
    set_var(-9, 0, -0x381cda2, 94, -0x1f76, -1, 0x66da, 4, -0x154d22d4, -28, 0x5c6a8b5f, 20, 0, 9, 1, -0x5c30, 0, 0, 90, 0, -0xb3ffc6f, 0x6e04528, 0x6763, -0x56347ac1, 1, -0x381cda2, -1, 1, -0x3470abec, -1, 0, 6, 4, 0);
    return 0x6810;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2930 - 0x2975
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2930
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2954
        printf("...checksum after hashing %s : %X\n", vname, -1 - g31);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2980 - 0x29a5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2980
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s492r2.c
// Address range: 0x29b0 - 0x2bfc
// Line range:    61 - 63
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_13_l, int16_t g_14_l, int16_t g_23_l, int16_t g_43_l, char g_44_l, int32_t g_46_l, char g_47_l, int32_t g_48_l, char g_49_l, int32_t g_52_l, int32_t g_54_l, int32_t g_55_l, int16_t g_56_l, int16_t g_63_l, int32_t g_66_l, char g_76_l, int32_t g_83_l, int32_t g_84_l, int32_t g_164_l, int16_t g_167_l, int32_t g_168_l, int32_t g_176_l, int32_t g_178_l, int16_t g_180_l, int32_t g_201_l, int32_t g_249_l, int32_t g_253_l, int32_t g_264_l, int32_t g_274_l, int32_t g_275_l, int32_t g_279_l) {
    // 0x29b0
    g2 = g_2_l;
    g3 = g_3_l;
    g4 = g_6_l;
    *(char *)&g5 = g_13_l;
    *(int16_t *)&g6 = g_14_l;
    *(int16_t *)&g7 = g_23_l;
    *(int16_t *)&g8 = g_43_l;
    *(char *)&g9 = g_44_l;
    g10 = g_46_l;
    *(char *)&g11 = g_47_l;
    g12 = g_48_l;
    *(char *)&g13 = g_49_l;
    g33 = g_52_l;
    g14 = g_54_l;
    g15 = g_55_l;
    g16 = g_56_l;
    *(int16_t *)&g34 = g_63_l;
    g35 = g_66_l;
    *(char *)&g17 = g_76_l;
    g36 = g_83_l;
    g18 = g_84_l;
    g19 = g_164_l;
    *(int16_t *)&g20 = g_167_l;
    g21 = g_168_l;
    g22 = g_176_l;
    g23 = g_178_l;
    *(int16_t *)&g24 = g_180_l;
    g25 = g_201_l;
    g26 = g_249_l;
    g27 = g_253_l;
    g28 = g_264_l;
    g29 = g_274_l;
    g30 = g_275_l;
    g37 = g_279_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2c00 - 0x2c5d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2c00
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2c60 - 0x2ca0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g31;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g38); // 0x2c95
    g31 = v1 / 256 ^ v2;
}

// Address range: 0x2ca0 - 0x2cad
int64_t _fini(void) {
    // 0x2ca0
    int64_t result; // 0x2ca0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

