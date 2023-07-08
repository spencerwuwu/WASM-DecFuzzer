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
int32_t set_var(int32_t g_6_l, char g_17_l, int16_t g_18_l, int16_t g_43_l, char g_71_l, int16_t g_73_l, char g_74_l, int16_t g_90_l, int32_t g_91_l, int16_t g_105_l, int32_t g_106_l, int16_t g_109_l, char g_110_l, int32_t g_125_l, int16_t g_136_l, int32_t g_147_l, int16_t g_163_l, int16_t g_193_l, int32_t g_198_l, int32_t g_201_l, char g_203_l, int32_t g_204_l, int32_t g_210_l, int32_t g_249_l, char g_252_l, int16_t g_253_l, int32_t g_254_l, int32_t g_256_l, char g_330_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 0x73eb905d; // 0x6020
int32_t g3 = -0x49e4ff02; // 0x6024
int32_t g4 = 0x3b33b61b; // 0x6026
int32_t g5 = 0x753b33; // 0x6028
int32_t g6 = -0xff8b; // 0x602a
int32_t g7 = 0x2cffff; // 0x602c
int32_t g8 = 0x2d75002c; // 0x602e
int32_t g9 = 0x26152d75; // 0x6030
int32_t g10 = 0xfff6; // 0x6034
int32_t g11 = 0x28f66bb0; // 0x6038
int32_t g12 = 0x10674; // 0x603c
int32_t g13 = -0xffff; // 0x603e
int32_t g14 = -1; // 0x6040
int32_t g15 = 0xca97; // 0x6044
int32_t g16 = -0x209697db; // 0x6048
int32_t g17 = -0x5e4bff5e; // 0x604c
int32_t g18 = -0x5e4c; // 0x604e
int32_t g19 = -1; // 0x6050
int32_t g20 = -0x35806f94; // 0x6054
char g21 = -99; // 0x6058
int32_t g22 = 0x2d55d3be; // 0x605c
int32_t g23 = -8; // 0x6060
int32_t g24 = 0x5cad6f74; // 0x6064
char g25 = -76; // 0x6068
int32_t g26 = 0x4e78b; // 0x606a
int32_t g27 = 4; // 0x606c
int32_t g28 = 1; // 0x6070
int32_t g29 = -1; // 0x6074
char g30 = 0; // 0x6080
int32_t g31 = 0; // 0x6090
int32_t g32 = 0; // 0x6094
int32_t * g33 = NULL; // 0x60a0
int16_t g34 = 4; // 0x674
int32_t g35;

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
        result = &g35;
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
    return 0x6078;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g30 != 0) {
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
    g30 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s640retdec.c
// Address range: 0x1150 - 0x1459
// Line range:    275 - 313
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
    transparent_crc((int32_t)*(char *)&g3, "g_17", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_18", v1);
    transparent_crc(3, "g_28", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_43", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_71", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_73", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_74", v1);
    transparent_crc((int32_t)*(int16_t *)&g31, "g_90", v1);
    transparent_crc(g9, "g_91", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_105", v1);
    transparent_crc(g11, "g_106", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_109", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_110", v1);
    transparent_crc(g14, "g_125", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_136", v1);
    transparent_crc(g16, "g_147", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_163", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_193", v1);
    transparent_crc(g19, "g_198", v1);
    transparent_crc(g20, "g_201", v1);
    transparent_crc((int32_t)g21, "g_203", v1);
    transparent_crc(g22, "g_204", v1);
    transparent_crc(g23, "g_210", v1);
    transparent_crc(g24, "g_249", v1);
    transparent_crc((int32_t)g25, "g_252", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_253", v1);
    transparent_crc(g32, "g_254", v1);
    transparent_crc(g27, "g_256", v1);
    transparent_crc((int32_t)*(char *)&g28, "g_330", v1);
    platform_main_end(-1 - *(int32_t *)0x6074, v1);
    return (int32_t)&g35 ^ (int32_t)&g35;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1460 - 0x1466
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1460
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1470 - 0x1505
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14d9
        int32_t v2 = i; // 0x1470
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x14a6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14e4
        *(int32_t *)(4 * i + (int64_t)&g33) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s640retdec.c
// Address range: 0x1510 - 0x328d
// Line range:    67 - 268
int32_t func_1(void) {
    // 0x1510
    set_var(0x73eb905d, -2, -0x49e5, 16, 117, -1, 44, 0, 0x26152d75, 15, 0x28f66bb0, (int16_t)&g34, 1, -1, -0x3551, -0x209697db, 162, -0x5e4c, -1, -0x35806f94, -99, 0x2d55d3be, -8, 0, -76, -0x1875, 0, 4, 1);
    return 29;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3290 - 0x32d5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3290
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x32b4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g29);
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x32e0 - 0x3305
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x32e0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s640retdec.c
// Address range: 0x3310 - 0x3507
// Line range:    57 - 59
int32_t set_var(int32_t g_6_l, char g_17_l, int16_t g_18_l, int16_t g_43_l, char g_71_l, int16_t g_73_l, char g_74_l, int16_t g_90_l, int32_t g_91_l, int16_t g_105_l, int32_t g_106_l, int16_t g_109_l, char g_110_l, int32_t g_125_l, int16_t g_136_l, int32_t g_147_l, int16_t g_163_l, int16_t g_193_l, int32_t g_198_l, int32_t g_201_l, char g_203_l, int32_t g_204_l, int32_t g_210_l, int32_t g_249_l, char g_252_l, int16_t g_253_l, int32_t g_254_l, int32_t g_256_l, char g_330_l) {
    // 0x3310
    g2 = g_6_l;
    *(char *)&g3 = g_17_l;
    *(int16_t *)&g4 = g_18_l;
    *(int16_t *)&g5 = g_43_l;
    *(char *)&g6 = g_71_l;
    *(int16_t *)&g7 = g_73_l;
    *(char *)&g8 = g_74_l;
    *(int16_t *)&g31 = g_90_l;
    g9 = g_91_l;
    *(int16_t *)&g10 = g_105_l;
    g11 = g_106_l;
    *(int16_t *)&g12 = g_109_l;
    *(char *)&g13 = g_110_l;
    g14 = g_125_l;
    *(int16_t *)&g15 = g_136_l;
    g16 = g_147_l;
    *(int16_t *)&g17 = g_163_l;
    *(int16_t *)&g18 = g_193_l;
    g19 = g_198_l;
    g20 = g_201_l;
    g21 = g_203_l;
    g22 = g_204_l;
    g23 = g_210_l;
    g24 = g_249_l;
    g25 = g_252_l;
    *(int16_t *)&g26 = g_253_l;
    g32 = g_254_l;
    g27 = g_256_l;
    *(char *)&g28 = g_330_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3510 - 0x356d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3510
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3570 - 0x35b0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g29;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g33); // 0x35a5
    g29 = v1 / 256 ^ v2;
}

// Address range: 0x35b0 - 0x35bd
int64_t _fini(void) {
    // 0x35b0
    int64_t result; // 0x35b0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

