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
int32_t set_var(int32_t g_7_l, int16_t g_17_l, int16_t g_23_l, int16_t g_25_l, char g_38_l, char g_53_l, int16_t g_60_l, int32_t g_90_l, int32_t g_108_l, char g_111_l, int32_t g_140_l, int32_t g_141_l, int32_t g_143_l, int32_t g_147_l, int32_t g_152_l, char g_155_l, char g_231_l, int16_t g_253_l, int16_t g_297_l, int32_t g_303_l, int32_t g_322_l, int16_t g_335_l, char g_375_l, int32_t g_464_l, int32_t g_465_l, char g_467_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 256; // 0x413f
int64_t g2 = 0; // 0x5fe0
int32_t g3 = -0x2492fc8c; // 0x6020
int16_t g4 = 0x59bb; // 0x6024
int16_t g5 = 0x413f; // 0x6026
int16_t g6 = 1; // 0x6028
int32_t g7 = 0x10001; // 0x602a
int32_t g8 = 1; // 0x602c
int32_t g9 = -1; // 0x6030
int32_t g10 = 0x7def5a7f; // 0x6034
char g11 = 9; // 0x6038
int32_t g12 = 0x3ad813d1; // 0x603c
int32_t g13 = 1; // 0x6040
int32_t g14 = -0x5ab8e3bc; // 0x6044
int32_t g15 = -1; // 0x6048
int32_t g16 = -0x511d2796; // 0x604c
int32_t g17 = 0x5745e503; // 0x6050
int32_t g18 = -0x24a8ba1b; // 0x6051
int32_t g19 = 0x4bdb5745; // 0x6052
int16_t g20 = 0x4bdb; // 0x6054
int32_t g21 = -0x7769a89c; // 0x6058
int32_t g22 = 3; // 0x605c
int32_t g23 = 0x1c918; // 0x6060
int32_t g24 = -0x3b15ffff; // 0x6062
int32_t g25 = 0x4322c4ea; // 0x6064
int32_t g26 = 1; // 0x6068
int32_t g27 = 146; // 0x606c
int32_t g28 = -1; // 0x6070
char g29 = 0; // 0x6080
int32_t g30 = 0; // 0x6090
int32_t * g31 = NULL; // 0x60a0
int32_t g32;

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
        result = &g32;
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
    if (g29 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g2 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x6018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g29 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s803retdec.c
// Address range: 0x1150 - 0x1435
// Line range:    408 - 444
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
    transparent_crc(g3, "g_7", v1);
    transparent_crc(-0x57325d52, "g_9", v1);
    transparent_crc((int32_t)g4, "g_17", v1);
    transparent_crc((int32_t)g5, "g_23", v1);
    transparent_crc((int32_t)g6, "g_25", v1);
    transparent_crc(5, "g_36", v1);
    transparent_crc((int32_t)*(char *)&g30, "g_38", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_53", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_60", v1);
    transparent_crc(g9, "g_90", v1);
    transparent_crc(g10, "g_108", v1);
    transparent_crc((int32_t)g11, "g_111", v1);
    transparent_crc(g12, "g_140", v1);
    transparent_crc(g13, "g_141", v1);
    transparent_crc(g14, "g_143", v1);
    transparent_crc(g15, "g_147", v1);
    transparent_crc(g16, "g_152", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_155", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_231", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_253", v1);
    transparent_crc((int32_t)g20, "g_297", v1);
    transparent_crc(g21, "g_303", v1);
    transparent_crc(g22, "g_322", v1);
    transparent_crc((int32_t)*(int16_t *)&g23, "g_335", v1);
    transparent_crc((int32_t)*(char *)&g24, "g_375", v1);
    transparent_crc(g25, "g_464", v1);
    transparent_crc(g26, "g_465", v1);
    transparent_crc((int32_t)*(char *)&g27, "g_467", v1);
    platform_main_end(-1 - *(int32_t *)0x6070, v1);
    return (int32_t)&g32 ^ (int32_t)&g32;
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
        *(int32_t *)(4 * i + (int64_t)&g31) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s803retdec.c
// Address range: 0x14f0 - 0x31ca
// Line range:    65 - 401
int32_t func_1(void) {
    // 0x31b5
    set_var(-0x2492fc8c, 0x59bb, (int16_t)&g1, 1, 0, 1, 1, -1, 0x7def5a7f, 9, 0x3ad813d1, 1, -0x5ab8e3bc, -1, -0x511d2796, 3, -27, 0x5745, 0x4bdb, -0x7769a89c, 3, -0x36e8, 1, 0x4322c4ea, 1, -110);
    return 3;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x31d0 - 0x3215
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x31d0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x31f4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g28);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3220 - 0x3245
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3220
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s803retdec.c
// Address range: 0x3250 - 0x3403
// Line range:    55 - 57
int32_t set_var(int32_t g_7_l, int16_t g_17_l, int16_t g_23_l, int16_t g_25_l, char g_38_l, char g_53_l, int16_t g_60_l, int32_t g_90_l, int32_t g_108_l, char g_111_l, int32_t g_140_l, int32_t g_141_l, int32_t g_143_l, int32_t g_147_l, int32_t g_152_l, char g_155_l, char g_231_l, int16_t g_253_l, int16_t g_297_l, int32_t g_303_l, int32_t g_322_l, int16_t g_335_l, char g_375_l, int32_t g_464_l, int32_t g_465_l, char g_467_l) {
    // 0x3250
    g3 = g_7_l;
    g4 = g_17_l;
    g5 = g_23_l;
    g6 = g_25_l;
    *(char *)&g30 = g_38_l;
    *(char *)&g7 = g_53_l;
    *(int16_t *)&g8 = g_60_l;
    g9 = g_90_l;
    g10 = g_108_l;
    g11 = g_111_l;
    g12 = g_140_l;
    g13 = g_141_l;
    g14 = g_143_l;
    g15 = g_147_l;
    g16 = g_152_l;
    *(char *)&g17 = g_155_l;
    *(char *)&g18 = g_231_l;
    *(int16_t *)&g19 = g_253_l;
    g20 = g_297_l;
    g21 = g_303_l;
    g22 = g_322_l;
    *(int16_t *)&g23 = g_335_l;
    *(char *)&g24 = g_375_l;
    g25 = g_464_l;
    g26 = g_465_l;
    *(char *)&g27 = g_467_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3410 - 0x346d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3410
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3470 - 0x34b0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g28;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g31); // 0x34a5
    g28 = v1 / 256 ^ v2;
}

// Address range: 0x34b0 - 0x34bd
int64_t _fini(void) {
    // 0x34b0
    int64_t result; // 0x34b0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

