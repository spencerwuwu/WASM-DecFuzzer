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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_6_l, int32_t g_7_l, int32_t g_8_l, int32_t g_11_l, int32_t g_12_l, int32_t g_13_l, char g_38_l, char g_39_l, int16_t g_40_l, int16_t g_50_l, int32_t g_58_l, int32_t g_72_l, int32_t g_77_l, int16_t g_78_l, int32_t g_89_l, int32_t g_104_l, int32_t g_105_l, int16_t g_135_l, int16_t g_213_l, int16_t g_233_l, int32_t g_273_l, char g_274_l, int32_t g_288_l, char g_354_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = -0xaabf281; // 0x6020
int32_t g3 = 1; // 0x6024
int32_t g4 = -0x1827579; // 0x6028
int32_t g5 = -6; // 0x602c
int32_t g6 = 0x5ba7723; // 0x6030
int32_t g7 = 0x25b3b9da; // 0x6034
int32_t g8 = 9; // 0x6038
int32_t g9 = 0x1ea66e58; // 0x603c
int32_t g10 = 0xbd2ab60; // 0x6040
int32_t g11 = 5; // 0x6044
int32_t g12 = 0x5ab4; // 0x6048
int32_t g13 = -0x6dffffa6; // 0x6049
int32_t g14 = 0x2d17f492; // 0x604c
int32_t g15 = -0x443139c1; // 0x6050
int32_t g16 = -5; // 0x6054
int32_t g17 = 0xd0e7; // 0x6058
int32_t g18 = 0x3d1d1ce1; // 0x605c
int32_t g19 = -1; // 0x6060
int32_t g20 = -5; // 0x6064
int32_t g21 = 0x1c399edb; // 0x6068
int32_t g22 = -0x685fe3c7; // 0x606a
int32_t g23 = 0x7aea97a0; // 0x606c
int32_t g24 = 0x1f8d7ba3; // 0x6070
char g25 = 18; // 0x6074
int32_t g26 = -1; // 0x6078
int64_t g27 = 0; // 0x6080
int32_t g28 = 0; // 0x6090
int32_t g29 = 0; // 0x6092
int32_t g30 = 0; // 0x6094
int32_t g31 = 0; // 0x6096
int32_t * g32 = NULL; // 0x60a0
int32_t g33;

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
        result = &g33;
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
    return &g27;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g27 != 0) {
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
    *(char *)&g27 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s13r2.c
// Address range: 0x1150 - 0x1427
// Line range:    331 - 367
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
    transparent_crc(g4, "g_4", v1);
    transparent_crc(g5, "g_5", v1);
    transparent_crc(g6, "g_6", v1);
    transparent_crc(g7, "g_7", v1);
    transparent_crc(g8, "g_8", v1);
    transparent_crc(g9, "g_11", v1);
    transparent_crc(g10, "g_12", v1);
    transparent_crc(g11, "g_13", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_38", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_39", v1);
    transparent_crc((int32_t)*(int16_t *)&g28, "g_40", v1);
    transparent_crc((int32_t)*(int16_t *)&g29, "g_50", v1);
    transparent_crc(g14, "g_58", v1);
    transparent_crc(g15, "g_72", v1);
    transparent_crc(g16, "g_77", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_78", v1);
    transparent_crc(g18, "g_89", v1);
    transparent_crc(g19, "g_104", v1);
    transparent_crc(g20, "g_105", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_135", v1);
    transparent_crc((int32_t)*(int16_t *)&g22, "g_213", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_233", v1);
    transparent_crc(g23, "g_273", v1);
    transparent_crc((int32_t)*(char *)&g31, "g_274", v1);
    transparent_crc(g24, "g_288", v1);
    transparent_crc((int32_t)g25, "g_354", v1);
    platform_main_end(-1 - *(int32_t *)0x6078, v1);
    return (int32_t)&g33 ^ (int32_t)&g33;
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s13r2.c
// Address range: 0x14e0 - 0x3573
// Line range:    65 - 324
char func_1(void) {
    // 0x3394
    set_var(-0xaabf281, 1, -0x1827579, -6, 0x5ba7723, 0x25b3b9da, 0, 0x1ea66e58, 0xbd2ab60, 5, -76, 90, 0, 0, 0x2d17f492, -0x443139c1, -5, -0x2f19, 0x3d1d1ce1, -1, -5, -0x6125, 0x1c39, 0, 0x7aea97a0, 0, 0x1f8d7ba3, 18);
    return -6;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3580 - 0x35c5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3580
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x35a4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g26);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x35d0 - 0x35f5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x35d0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s13r2.c
// Address range: 0x3600 - 0x379c
// Line range:    55 - 57
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_6_l, int32_t g_7_l, int32_t g_8_l, int32_t g_11_l, int32_t g_12_l, int32_t g_13_l, char g_38_l, char g_39_l, int16_t g_40_l, int16_t g_50_l, int32_t g_58_l, int32_t g_72_l, int32_t g_77_l, int16_t g_78_l, int32_t g_89_l, int32_t g_104_l, int32_t g_105_l, int16_t g_135_l, int16_t g_213_l, int16_t g_233_l, int32_t g_273_l, char g_274_l, int32_t g_288_l, char g_354_l) {
    // 0x3600
    g2 = g_2_l;
    g3 = g_3_l;
    g4 = g_4_l;
    g5 = g_5_l;
    g6 = g_6_l;
    g7 = g_7_l;
    g8 = g_8_l;
    g9 = g_11_l;
    g10 = g_12_l;
    g11 = g_13_l;
    *(char *)&g12 = g_38_l;
    *(char *)&g13 = g_39_l;
    *(int16_t *)&g28 = g_40_l;
    *(int16_t *)&g29 = g_50_l;
    g14 = g_58_l;
    g15 = g_72_l;
    g16 = g_77_l;
    *(int16_t *)&g17 = g_78_l;
    g18 = g_89_l;
    g19 = g_104_l;
    g20 = g_105_l;
    *(int16_t *)&g21 = g_135_l;
    *(int16_t *)&g22 = g_213_l;
    *(int16_t *)&g30 = g_233_l;
    g23 = g_273_l;
    *(char *)&g31 = g_274_l;
    g24 = g_288_l;
    g25 = g_354_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x37a0 - 0x37fd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x37a0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3800 - 0x3840
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g26;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g32); // 0x3835
    g26 = v1 / 256 ^ v2;
}

// Address range: 0x3840 - 0x384d
int64_t _fini(void) {
    // 0x3840
    int64_t result; // 0x3840
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

