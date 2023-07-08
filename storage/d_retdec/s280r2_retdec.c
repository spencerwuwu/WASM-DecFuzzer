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
int32_t set_var(char g_13_l, char g_14_l, char g_15_l, char g_20_l, int32_t g_34_l, int16_t g_69_l, int32_t g_70_l, int16_t g_75_l, char g_77_l, int16_t g_96_l, int32_t g_101_l, int32_t g_124_l, char g_143_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, char g_209_l, char g_220_l, int32_t g_230_l, int32_t g_231_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
char g2 = 120; // 0x5020
int32_t g3 = 0x280f9ff; // 0x5021
int32_t g4 = 0x280f9; // 0x5022
int32_t g5 = 640; // 0x5023
int32_t g6 = 2; // 0x5024
int32_t g7 = 1; // 0x5028
int32_t g8 = 0x22ad6179; // 0x502c
int16_t g9 = 1; // 0x5030
char g10 = -1; // 0x5032
int16_t g11 = -1; // 0x5034
int32_t g12 = -1; // 0x5038
int32_t g13 = -0x605fd185; // 0x503c
int32_t g14 = 247; // 0x5040
int32_t g15 = -3; // 0x5044
int16_t g16 = -0x4926; // 0x5048
int32_t g17 = -0x667f3cf9; // 0x504a
int32_t g18 = -0x35667f3d; // 0x504b
int32_t g19 = -0x77356680; // 0x504c
int32_t g20 = 0x40c7b233; // 0x5050
int32_t g21 = -1; // 0x5054
char g22 = 0; // 0x5060
int32_t g23 = 0; // 0x5070
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
    return 0x5058;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g22 != 0) {
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
    g22 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s280r2.c
// Address range: 0x1150 - 0x138c
// Line range:    236 - 264
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
    transparent_crc((int32_t)g2, "g_13", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_14", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_15", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_20", v1);
    transparent_crc(g6, "g_34", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_69", v1);
    transparent_crc(g8, "g_70", v1);
    transparent_crc((int32_t)g9, "g_75", v1);
    transparent_crc((int32_t)g10, "g_77", v1);
    transparent_crc((int32_t)g11, "g_96", v1);
    transparent_crc(g12, "g_101", v1);
    transparent_crc(g13, "g_124", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_143", v1);
    transparent_crc(g15, "g_179", v1);
    transparent_crc(g23, "g_180", v1);
    transparent_crc((int32_t)g16, "g_181", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_209", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_220", v1);
    transparent_crc(g19, "g_230", v1);
    transparent_crc(g20, "g_231", v1);
    platform_main_end(-1 - *(int32_t *)0x5054, v1);
    return (int32_t)&g25 ^ (int32_t)&g25;
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
        *(int32_t *)(4 * i + (int64_t)&g24) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s280r2.c
// Address range: 0x1440 - 0x2404
// Line range:    57 - 228
char func_1(void) {
    // 0x1440
    set_var(120, -1, 0, 0, 0, 1, 0, 1, -1, -1, -1, -0x605fd185, -9, -3, 0, -0x4934, 7, 89, -0x77356680, 0x40c7b233);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2410 - 0x2455
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2410
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2434
        printf("...checksum after hashing %s : %X\n", vname, -1 - g21);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2460 - 0x2485
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2460
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s280r2.c
// Address range: 0x2490 - 0x25a9
// Line range:    47 - 49
int32_t set_var(char g_13_l, char g_14_l, char g_15_l, char g_20_l, int32_t g_34_l, int16_t g_69_l, int32_t g_70_l, int16_t g_75_l, char g_77_l, int16_t g_96_l, int32_t g_101_l, int32_t g_124_l, char g_143_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, char g_209_l, char g_220_l, int32_t g_230_l, int32_t g_231_l) {
    // 0x2490
    g2 = g_13_l;
    *(char *)&g3 = g_14_l;
    *(char *)&g4 = g_15_l;
    *(char *)&g5 = g_20_l;
    g6 = g_34_l;
    *(int16_t *)&g7 = g_69_l;
    g8 = g_70_l;
    g9 = g_75_l;
    g10 = g_77_l;
    g11 = g_96_l;
    g12 = g_101_l;
    g13 = g_124_l;
    *(char *)&g14 = g_143_l;
    g15 = g_179_l;
    g23 = g_180_l;
    g16 = g_181_l;
    *(char *)&g17 = g_209_l;
    *(char *)&g18 = g_220_l;
    g19 = g_230_l;
    g20 = g_231_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x25b0 - 0x260d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x25b0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2610 - 0x2650
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g21;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g24); // 0x2645
    g21 = v1 / 256 ^ v2;
}

// Address range: 0x2650 - 0x265d
int64_t _fini(void) {
    // 0x2650
    int64_t result; // 0x2650
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

