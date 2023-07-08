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
int32_t set_var(int32_t g_24_l, int16_t g_25_l, int32_t g_27_l, char g_54_l, int32_t g_55_l, int16_t g_71_l, int16_t g_78_l, int32_t g_80_l, int32_t g_133_l, int32_t g_188_l, int32_t g_204_l, char g_205_l, char g_206_l, int32_t g_216_l, char g_246_l, char g_265_l, int16_t g_266_l, int16_t g_283_l, int32_t g_285_l, char g_286_l, char g_337_l, int32_t g_371_l, int16_t g_424_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x6fe0
int32_t g2 = 0xe834ab4; // 0x7020
int32_t g3 = 0xf793; // 0x7024
int32_t g4 = 8; // 0x7028
int32_t g5 = 248; // 0x702c
int32_t g6 = -0x765114e4; // 0x7030
int32_t g7 = -0xc5d2; // 0x7034
int32_t g8 = -1; // 0x7036
int32_t g9 = -1; // 0x7038
int32_t g10 = 0x133e8a83; // 0x703c
int32_t g11 = 0x27ce1fa2; // 0x7040
int32_t g12 = 2; // 0x7044
int32_t g13 = 0xc3ec; // 0x7048
int32_t g14 = 0x80000c3; // 0x7049
int32_t g15 = -0x790610f8; // 0x704c
int32_t g16 = -0xd10ff1b; // 0x7050
int32_t g17 = -0x10f70d11; // 0x7052
int32_t g18 = 0xef08; // 0x7054
int32_t g19 = -0x8009322; // 0x7058
char g20 = 108; // 0x705c
int32_t g21 = -0x49ffff36; // 0x705d
int32_t g22 = 0x7cba8ab6; // 0x7060
int32_t g23 = 0xaf00; // 0x7064
int32_t g24 = -1; // 0x7068
int64_t g25 = 0; // 0x7070
char g26 = 0; // 0x7080
int32_t * g27 = NULL; // 0x7090
int32_t g28;

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
        result = &g28;
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
    return &g25;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g25 != 0) {
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
    *(char *)&g25 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s293r2.c
// Address range: 0x1150 - 0x13c3
// Line range:    381 - 412
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
    transparent_crc(g2, "g_24", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_25", v1);
    transparent_crc(g4, "g_27", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_54", v1);
    transparent_crc(g6, "g_55", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_71", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_78", v1);
    transparent_crc(g9, "g_80", v1);
    transparent_crc(g10, "g_133", v1);
    transparent_crc(g11, "g_188", v1);
    transparent_crc(g12, "g_204", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_205", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_206", v1);
    transparent_crc(g15, "g_216", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_246", v1);
    transparent_crc((int32_t)g26, "g_265", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_266", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_283", v1);
    transparent_crc(g19, "g_285", v1);
    transparent_crc((int32_t)g20, "g_286", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_337", v1);
    transparent_crc(g22, "g_371", v1);
    transparent_crc((int32_t)*(int16_t *)&g23, "g_424", v1);
    platform_main_end(-1 - *(int32_t *)0x7068, v1);
    return (int32_t)&g28 ^ (int32_t)&g28;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13d0 - 0x13d6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13e0 - 0x1475
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1449
        int32_t v2 = i; // 0x13e0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1416
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1454
        *(int32_t *)(4 * i + (int64_t)&g27) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s293r2.c
// Address range: 0x1480 - 0x3de8
// Line range:    60 - 374
char func_1(void) {
    // 0x1480
    set_var(0xe834ab4, -2157, -28, 0, -0x765114e3, 0x3a2e, -1, -19, 0x133e8a83, 0x27ce1fa2, -19, -19, -61, -0x790610f8, -27, 0, -0x1052, -0x10f8, -0x8009322, 108, -54, 0x7cba8ab6, -0x5100);
    return -76;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3df0 - 0x3e35
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3df0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3e14
        printf("...checksum after hashing %s : %X\n", vname, -1 - g24);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3e40 - 0x3e65
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3e40
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s293r2.c
// Address range: 0x3e70 - 0x3fc6
// Line range:    50 - 52
int32_t set_var(int32_t g_24_l, int16_t g_25_l, int32_t g_27_l, char g_54_l, int32_t g_55_l, int16_t g_71_l, int16_t g_78_l, int32_t g_80_l, int32_t g_133_l, int32_t g_188_l, int32_t g_204_l, char g_205_l, char g_206_l, int32_t g_216_l, char g_246_l, char g_265_l, int16_t g_266_l, int16_t g_283_l, int32_t g_285_l, char g_286_l, char g_337_l, int32_t g_371_l, int16_t g_424_l) {
    // 0x3e70
    g2 = g_24_l;
    *(int16_t *)&g3 = g_25_l;
    g4 = g_27_l;
    *(char *)&g5 = g_54_l;
    g6 = g_55_l;
    *(int16_t *)&g7 = g_71_l;
    *(int16_t *)&g8 = g_78_l;
    g9 = g_80_l;
    g10 = g_133_l;
    g11 = g_188_l;
    g12 = g_204_l;
    *(char *)&g13 = g_205_l;
    *(char *)&g14 = g_206_l;
    g15 = g_216_l;
    *(char *)&g16 = g_246_l;
    g26 = g_265_l;
    *(int16_t *)&g17 = g_266_l;
    *(int16_t *)&g18 = g_283_l;
    g19 = g_285_l;
    g20 = g_286_l;
    *(char *)&g21 = g_337_l;
    g22 = g_371_l;
    *(int16_t *)&g23 = g_424_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3fd0 - 0x402d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3fd0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4030 - 0x4070
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g24;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g27); // 0x4065
    g24 = v1 / 256 ^ v2;
}

// Address range: 0x4070 - 0x407d
int64_t _fini(void) {
    // 0x4070
    int64_t result; // 0x4070
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

