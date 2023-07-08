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
int32_t set_var(char g_5_l, int32_t g_18_l, int16_t g_66_l, char g_160_l, int32_t g_178_l, int32_t g_179_l, char g_203_l, int32_t g_209_l, int16_t g_261_l, int16_t g_288_l, int16_t g_301_l, int16_t g_302_l, int16_t g_317_l, int16_t g_423_l, int16_t g_424_l, int16_t g_425_l, int32_t g_426_l, int16_t g_442_l, char g_469_l, int32_t g_518_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x6fe0
int32_t g2 = 1; // 0x7020
int32_t g3 = 1; // 0x7024
int32_t g4 = 0xce0002; // 0x7028
int32_t g5 = -0x279eff32; // 0x702a
int32_t g6 = -0x7fe7279f; // 0x702c
int32_t g7 = 0x2fc082c0; // 0x7030
int32_t g8 = 1; // 0x7034
int32_t g9 = -1; // 0x7038
int32_t g10 = 0x377c0008; // 0x703c
int32_t g11 = -0xc884; // 0x703e
int16_t g12 = -1; // 0x7040
int32_t g13 = -0x9e70003; // 0x7042
int16_t g14 = -2536; // 0x7044
int16_t g15 = 1; // 0x7046
int32_t g16 = 0x22eaf47d; // 0x7048
int32_t g17 = 0x9efefa; // 0x704c
int32_t g18 = -0x6ff62; // 0x704e
int32_t g19 = -7; // 0x7050
int32_t g20 = -1; // 0x7054
char g21 = 0; // 0x7060
int32_t g22 = 0; // 0x7070
int32_t g23 = 0; // 0x7072
int32_t * g24 = NULL; // 0x7080
int32_t g25;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x6fd0 != 0) {
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
    return 0x7058;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g21 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x7018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g21 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s309r2.c
// Address range: 0x1150 - 0x138a
// Line range:    377 - 405
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
    transparent_crc((int32_t)*(char *)&g2, "g_5", v1);
    transparent_crc(g3, "g_18", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_66", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_160", v1);
    transparent_crc(g6, "g_178", v1);
    transparent_crc(g7, "g_179", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_203", v1);
    transparent_crc(g9, "g_209", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_261", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_288", v1);
    transparent_crc((int32_t)g12, "g_301", v1);
    transparent_crc((int32_t)*(int16_t *)&g22, "g_302", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_317", v1);
    transparent_crc((int32_t)*(int16_t *)&g23, "g_423", v1);
    transparent_crc((int32_t)g14, "g_424", v1);
    transparent_crc((int32_t)g15, "g_425", v1);
    transparent_crc(g16, "g_426", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_442", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_469", v1);
    transparent_crc(g19, "g_518", v1);
    platform_main_end(-1 - *(int32_t *)0x7054, v1);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s309r2.c
// Address range: 0x1440 - 0x3dcd
// Line range:    57 - 370
int16_t func_1(void) {
    // 0x1440
    set_var(0, 1, 0, 0, 1, -0x582c9191, 1, -1, 8, 0x377c, -1, 0, -3, 0, -2536, 1, 0x22eaf47d, -262, -98, -7);
    return 171;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3dd0 - 0x3e15
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3dd0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3df4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g20);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3e20 - 0x3e45
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3e20
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s309r2.c
// Address range: 0x3e50 - 0x3f72
// Line range:    47 - 49
int32_t set_var(char g_5_l, int32_t g_18_l, int16_t g_66_l, char g_160_l, int32_t g_178_l, int32_t g_179_l, char g_203_l, int32_t g_209_l, int16_t g_261_l, int16_t g_288_l, int16_t g_301_l, int16_t g_302_l, int16_t g_317_l, int16_t g_423_l, int16_t g_424_l, int16_t g_425_l, int32_t g_426_l, int16_t g_442_l, char g_469_l, int32_t g_518_l) {
    // 0x3e50
    *(char *)&g2 = g_5_l;
    g3 = g_18_l;
    *(int16_t *)&g4 = g_66_l;
    *(char *)&g5 = g_160_l;
    g6 = g_178_l;
    g7 = g_179_l;
    *(char *)&g8 = g_203_l;
    g9 = g_209_l;
    *(int16_t *)&g10 = g_261_l;
    *(int16_t *)&g11 = g_288_l;
    g12 = g_301_l;
    *(int16_t *)&g22 = g_302_l;
    *(int16_t *)&g13 = g_317_l;
    *(int16_t *)&g23 = g_423_l;
    g14 = g_424_l;
    g15 = g_425_l;
    g16 = g_426_l;
    *(int16_t *)&g17 = g_442_l;
    *(char *)&g18 = g_469_l;
    g19 = g_518_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3f80 - 0x3fdd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3f80
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3fe0 - 0x4020
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g20;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g24); // 0x4015
    g20 = v1 / 256 ^ v2;
}

// Address range: 0x4020 - 0x402d
int64_t _fini(void) {
    // 0x4020
    int64_t result; // 0x4020
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

