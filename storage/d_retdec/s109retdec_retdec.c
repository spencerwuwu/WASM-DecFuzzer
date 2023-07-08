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
int32_t set_var(int16_t g_2_l, int32_t g_5_l, int16_t g_19_l, char g_20_l, int16_t g_38_l, int16_t g_46_l, int32_t g_58_l, int16_t g_91_l, int16_t g_93_l, int32_t g_104_l, int32_t g_143_l, int32_t g_146_l, int32_t g_150_l, int32_t g_151_l, int16_t g_152_l, int32_t g_154_l, int16_t g_156_l, int32_t g_163_l, int16_t g_185_l, char g_202_l, int32_t g_210_l, int16_t g_273_l, int16_t g_276_l, int32_t g_324_l, int32_t g_325_l, int32_t g_330_l, int32_t g_361_l, int16_t g_401_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 0x77e8; // 0x6020
int32_t g3 = 0x5f1dbecc; // 0x6024
int32_t g4 = 0x56d400ec; // 0x6028
int16_t g5 = 0x56d4; // 0x602a
int32_t g6 = 0xa132; // 0x602c
int32_t g7 = 8; // 0x6030
int32_t g8 = 0x10001; // 0x6034
int32_t g9 = -0x9ffff; // 0x6036
int32_t g10 = -10; // 0x6038
int32_t g11 = -9; // 0x603c
int32_t g12 = -0x7c5c441; // 0x6040
int32_t g13 = -0x2b6c23cd; // 0x6044
char g14[3] = "\r%"; // 0x6048
int32_t g15 = -0x804ff6; // 0x604c
int16_t g16 = 1; // 0x6050
int32_t g17 = 0x51d59fb4; // 0x6054
int32_t g18 = 0xfe16e1; // 0x6058
int32_t g19 = -0x58d3ff02; // 0x605a
int32_t g20 = 0x3b03a72c; // 0x605c
int32_t g21 = 0xdd1e; // 0x6060
int32_t g22 = 3; // 0x6064
int32_t g23 = -6; // 0x6068
int32_t g24 = 0x754fe3fc; // 0x606c
int32_t g25 = -3; // 0x6070
int32_t g26 = 0xfffb; // 0x6074
int32_t g27 = -1; // 0x6078
int64_t g28 = 0; // 0x6080
int32_t g29 = 0; // 0x6090
int32_t g30 = 0; // 0x6094
int32_t g31 = 0; // 0x6098
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
    return &g28;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g28 != 0) {
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
    *(char *)&g28 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s109retdec.c
// Address range: 0x1150 - 0x1432
// Line range:    286 - 322
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_2", v1);
    transparent_crc(g3, "g_5", v1);
    transparent_crc((int32_t)*(int16_t *)&g29, "g_19", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_20", v1);
    transparent_crc((int32_t)g5, "g_38", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_46", v1);
    transparent_crc(g7, "g_58", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_91", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_93", v1);
    transparent_crc(g10, "g_104", v1);
    transparent_crc(g11, "g_143", v1);
    transparent_crc(g30, "g_146", v1);
    transparent_crc(g12, "g_150", v1);
    transparent_crc(g13, "g_151", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_152", v1);
    transparent_crc(g15, "g_154", v1);
    transparent_crc((int32_t)g16, "g_156", v1);
    transparent_crc(g17, "g_163", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_185", v1);
    transparent_crc((int32_t)*(char *)&g19, "g_202", v1);
    transparent_crc(g20, "g_210", v1);
    transparent_crc((int32_t)*(int16_t *)&g31, "g_273", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_276", v1);
    transparent_crc(g22, "g_324", v1);
    transparent_crc(g23, "g_325", v1);
    transparent_crc(g24, "g_330", v1);
    transparent_crc(g25, "g_361", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_401", v1);
    platform_main_end(-1 - *(int32_t *)0x6078, v1);
    return (int32_t)&g33 ^ (int32_t)&g33;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1440 - 0x1446
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1440
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1450 - 0x14e5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14b9
        int32_t v2 = i; // 0x1450
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1486
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14c4
        *(int32_t *)(4 * i + (int64_t)&g32) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s109retdec.c
// Address range: 0x14f0 - 0x31ed
// Line range:    65 - 279
int32_t func_1(void) {
    // 0x14f0
    set_var(7, 0, 0, -20, 0x56cd, 1, 8, -20, 1, -10, -9, 0, -0x7c5c441, -3, 0x250d, -0x804ff6, 1, 0x51d59fb4, 0x16e1, 10, 0x3b03a72c, 0, -0x22e2, 19, -6, 0x754fe3fc, -3, -4);
    return 0x3b03a72c;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x31f0 - 0x3235
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x31f0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3214
        printf("...checksum after hashing %s : %X\n", vname, -1 - g27);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3240 - 0x3265
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3240
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s109retdec.c
// Address range: 0x3270 - 0x3459
// Line range:    55 - 57
int32_t set_var(int16_t g_2_l, int32_t g_5_l, int16_t g_19_l, char g_20_l, int16_t g_38_l, int16_t g_46_l, int32_t g_58_l, int16_t g_91_l, int16_t g_93_l, int32_t g_104_l, int32_t g_143_l, int32_t g_146_l, int32_t g_150_l, int32_t g_151_l, int16_t g_152_l, int32_t g_154_l, int16_t g_156_l, int32_t g_163_l, int16_t g_185_l, char g_202_l, int32_t g_210_l, int16_t g_273_l, int16_t g_276_l, int32_t g_324_l, int32_t g_325_l, int32_t g_330_l, int32_t g_361_l, int16_t g_401_l) {
    // 0x3270
    *(int16_t *)&g2 = g_2_l;
    g3 = g_5_l;
    *(int16_t *)&g29 = g_19_l;
    *(char *)&g4 = g_20_l;
    g5 = g_38_l;
    *(int16_t *)&g6 = g_46_l;
    g7 = g_58_l;
    *(int16_t *)&g8 = g_91_l;
    *(int16_t *)&g9 = g_93_l;
    g10 = g_104_l;
    g11 = g_143_l;
    g30 = g_146_l;
    g12 = g_150_l;
    g13 = g_151_l;
    *(int16_t *)&g14 = g_152_l;
    g15 = g_154_l;
    g16 = g_156_l;
    g17 = g_163_l;
    *(int16_t *)&g18 = g_185_l;
    *(char *)&g19 = g_202_l;
    g20 = g_210_l;
    *(int16_t *)&g31 = g_273_l;
    *(int16_t *)&g21 = g_276_l;
    g22 = g_324_l;
    g23 = g_325_l;
    g24 = g_330_l;
    g25 = g_361_l;
    *(int16_t *)&g26 = g_401_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3460 - 0x34bd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3460
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x34c0 - 0x3500
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g27;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g32); // 0x34f5
    g27 = v1 / 256 ^ v2;
}

// Address range: 0x3500 - 0x350d
int64_t _fini(void) {
    // 0x3500
    int64_t result; // 0x3500
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

