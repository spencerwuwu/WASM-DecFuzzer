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
int32_t set_var(int32_t g_4_l, int32_t g_7_l, int32_t g_14_l, int32_t g_16_l, int32_t g_52_l, int16_t g_73_l, int32_t g_99_l, int32_t g_106_l, int32_t g_118_l, char g_135_l, int32_t g_151_l, int32_t g_157_l, char g_177_l, int32_t g_198_l, int32_t g_201_l, int32_t g_206_l, char g_234_l, int16_t g_235_l, int32_t g_267_l, int32_t g_268_l, char g_305_l, int16_t g_318_l, int32_t g_320_l, int32_t g_328_l, int16_t g_333_l, int32_t g_347_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 1; // 0x6020
int32_t g3 = -0x3aa74540; // 0x6024
int32_t g4 = -0x57ce14dd; // 0x6028
int32_t g5 = 0x45c1d102; // 0x602c
int32_t g6 = 3; // 0x6030
int32_t g7 = -0x3e89a2be; // 0x6034
int32_t g8 = -0x61bebb29; // 0x6038
int32_t g9 = -9; // 0x603c
int32_t g10 = 7; // 0x6040
int32_t g11 = 0x1ea64901; // 0x6044
int32_t g12 = 255; // 0x6048
int32_t g13 = -3; // 0x604c
int32_t g14 = -0x7499ffd; // 0x6050
int32_t g15 = 0x1d8f0004; // 0x6054
int16_t g16 = 0x1d8f; // 0x6056
int32_t g17 = -0x5c1242ab; // 0x6058
int32_t g18 = -0x1eeca7e9; // 0x605c
int32_t g19 = 195; // 0x6060
int32_t g20 = -2; // 0x6064
int32_t g21 = -4; // 0x6068
int32_t g22 = 0xd930; // 0x606c
int32_t g23 = 5; // 0x6070
int32_t g24 = -1; // 0x6074
char g25 = 0; // 0x6080
int32_t g26 = 0; // 0x6090
int32_t g27 = 0; // 0x6094
int32_t g28 = 0; // 0x6098
int16_t g29 = 0; // 0x609c
int32_t * g30 = NULL; // 0x60a0
int32_t g31;

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
        result = &g31;
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
    if (g25 != 0) {
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
    g25 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s618r2.c
// Address range: 0x1150 - 0x13ff
// Line range:    299 - 333
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
    transparent_crc(g2, "g_4", v1);
    transparent_crc(g3, "g_7", v1);
    transparent_crc(g4, "g_14", v1);
    transparent_crc(g5, "g_16", v1);
    transparent_crc(g6, "g_52", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_73", v1);
    transparent_crc(g7, "g_99", v1);
    transparent_crc(g8, "g_106", v1);
    transparent_crc(g9, "g_118", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_135", v1);
    transparent_crc(g27, "g_151", v1);
    transparent_crc(g11, "g_157", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_177", v1);
    transparent_crc(g13, "g_198", v1);
    transparent_crc(g28, "g_201", v1);
    transparent_crc(g14, "g_206", v1);
    transparent_crc((int32_t)*(char *)&g15, "g_234", v1);
    transparent_crc((int32_t)g16, "g_235", v1);
    transparent_crc(g17, "g_267", v1);
    transparent_crc(g18, "g_268", v1);
    transparent_crc((int32_t)*(char *)&g19, "g_305", v1);
    transparent_crc((int32_t)g29, "g_318", v1);
    transparent_crc(g20, "g_320", v1);
    transparent_crc(g21, "g_328", v1);
    transparent_crc((int32_t)*(int16_t *)&g22, "g_333", v1);
    transparent_crc(g23, "g_347", v1);
    platform_main_end(-1 - *(int32_t *)0x6074, v1);
    return (int32_t)&g31 ^ (int32_t)&g31;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1400 - 0x1406
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1400
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1410 - 0x14a5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1479
        int32_t v2 = i; // 0x1410
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1446
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1484
        *(int32_t *)(4 * i + (int64_t)&g30) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s618r2.c
// Address range: 0x14b0 - 0x31d4
// Line range:    63 - 292
int16_t func_1(void) {
    // 0x14b0
    set_var(2, -0x3aa74541, -0x57ce14dd, 0x45c1d102, 3, 0, -0x3e89a2be, -0x61bebb29, -9, 7, 0, 0x1ea64901, -1, -3, 0, -0x7499ffd, 4, 0x1d8f, -0x5c1242ab, -0x1eeca7e9, -61, 0, -2, -4, -0x26d0, 5);
    return 0x7ba2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x31e0 - 0x3225
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x31e0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3204
        printf("...checksum after hashing %s : %X\n", vname, -1 - g24);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3230 - 0x3255
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3230
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s618r2.c
// Address range: 0x3260 - 0x33e9
// Line range:    53 - 55
int32_t set_var(int32_t g_4_l, int32_t g_7_l, int32_t g_14_l, int32_t g_16_l, int32_t g_52_l, int16_t g_73_l, int32_t g_99_l, int32_t g_106_l, int32_t g_118_l, char g_135_l, int32_t g_151_l, int32_t g_157_l, char g_177_l, int32_t g_198_l, int32_t g_201_l, int32_t g_206_l, char g_234_l, int16_t g_235_l, int32_t g_267_l, int32_t g_268_l, char g_305_l, int16_t g_318_l, int32_t g_320_l, int32_t g_328_l, int16_t g_333_l, int32_t g_347_l) {
    // 0x3260
    g2 = g_4_l;
    g3 = g_7_l;
    g4 = g_14_l;
    g5 = g_16_l;
    g6 = g_52_l;
    *(int16_t *)&g26 = g_73_l;
    g7 = g_99_l;
    g8 = g_106_l;
    g9 = g_118_l;
    *(char *)&g10 = g_135_l;
    g27 = g_151_l;
    g11 = g_157_l;
    *(char *)&g12 = g_177_l;
    g13 = g_198_l;
    g28 = g_201_l;
    g14 = g_206_l;
    *(char *)&g15 = g_234_l;
    g16 = g_235_l;
    g17 = g_267_l;
    g18 = g_268_l;
    *(char *)&g19 = g_305_l;
    g29 = g_318_l;
    g20 = g_320_l;
    g21 = g_328_l;
    *(int16_t *)&g22 = g_333_l;
    g23 = g_347_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x33f0 - 0x344d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x33f0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3450 - 0x3490
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g24;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g30); // 0x3485
    g24 = v1 / 256 ^ v2;
}

// Address range: 0x3490 - 0x349d
int64_t _fini(void) {
    // 0x3490
    int64_t result; // 0x3490
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

