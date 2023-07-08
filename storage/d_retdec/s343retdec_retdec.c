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
int32_t set_var(int32_t g_6_l, int32_t g_12_l, int32_t g_29_l, int32_t g_44_l, char g_47_l, char g_60_l, int16_t g_63_l, int32_t g_65_l, int16_t g_75_l, char g_76_l, int32_t g_110_l, int32_t g_113_l, int32_t g_140_l, int16_t g_221_l, int16_t g_222_l, char g_253_l, int32_t g_260_l, int32_t g_279_l, int32_t g_280_l, int32_t g_281_l, int32_t g_294_l, char g_295_l, int32_t g_296_l, int32_t g_297_l, int16_t g_298_l, int16_t g_304_l, int32_t g_616_l, int32_t g_650_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x7fe0
int32_t g2 = 9; // 0x8020
int32_t g3 = 0x585ed065; // 0x8024
int32_t g4 = 1; // 0x8028
int32_t g5 = -0x78edd5de; // 0x802c
int32_t g6 = 0x2caa00f8; // 0x8030
int32_t g7 = -0x9d356; // 0x8032
int32_t g8 = -10; // 0x8034
int32_t g9 = 0x8d6de4; // 0x8038
int32_t g10 = 0x1008d; // 0x803a
int32_t g11 = 1; // 0x803c
int32_t g12 = -1; // 0x8040
int32_t g13 = 0x21b44b64; // 0x8044
int32_t g14 = 0x76f7ffff; // 0x8048
int32_t g15 = 0xff76f7; // 0x804a
int32_t g16 = 255; // 0x804c
int32_t g17 = -2; // 0x8050
int32_t g18 = 1; // 0x8054
int32_t g19 = -0x63205660; // 0x8058
int32_t g20 = -1; // 0x805c
int32_t g21 = -4; // 0x8060
char g22 = -89; // 0x8064
int32_t g23 = -9; // 0x8068
int32_t g24 = -0x6919bd7e; // 0x806c
int16_t g25 = -0x6ea6; // 0x8070
int32_t g26 = -0x2a2d77b8; // 0x8072
int32_t g27 = 0x71ead5d2; // 0x8074
int32_t g28 = -9; // 0x8078
int32_t g29 = -1; // 0x807c
int64_t g30 = 0; // 0x8080
int32_t g31 = 0; // 0x8090
int32_t * g32 = NULL; // 0x80a0
int32_t g33;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x7fd0 != 0) {
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
    return &g30;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g30 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x8018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g30 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s343retdec.c
// Address range: 0x1150 - 0x1444
// Line range:    441 - 478
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
    transparent_crc(g3, "g_12", v1);
    transparent_crc(g4, "g_29", v1);
    transparent_crc(g5, "g_44", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_47", v1);
    transparent_crc((int32_t)*(char *)&g31, "g_60", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_63", v1);
    transparent_crc(g8, "g_65", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_75", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_76", v1);
    transparent_crc(g11, "g_110", v1);
    transparent_crc(g12, "g_113", v1);
    transparent_crc(g13, "g_140", v1);
    transparent_crc((int32_t)*(int16_t *)0x60da, "g_190", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_221", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_222", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_253", v1);
    transparent_crc(g17, "g_260", v1);
    transparent_crc(g18, "g_279", v1);
    transparent_crc(g19, "g_280", v1);
    transparent_crc(g20, "g_281", v1);
    transparent_crc(g21, "g_294", v1);
    transparent_crc((int32_t)g22, "g_295", v1);
    transparent_crc(g23, "g_296", v1);
    transparent_crc(g24, "g_297", v1);
    transparent_crc((int32_t)g25, "g_298", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_304", v1);
    transparent_crc(g27, "g_616", v1);
    transparent_crc(g28, "g_650", v1);
    platform_main_end(-1 - *(int32_t *)0x807c, v1);
    return (int32_t)&g33 ^ (int32_t)&g33;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1450 - 0x1456
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1450
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1460 - 0x14f5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14c9
        int32_t v2 = i; // 0x1460
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1496
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14d4
        *(int32_t *)(4 * i + (int64_t)&g32) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s343retdec.c
// Address range: 0x1500 - 0x4dfd
// Line range:    66 - 434
int32_t func_1(void) {
    // 0x1500
    set_var(9, 0, 1, 0, -8, 0, 0, -10, 0x6de4, 0, 0, -1, -0x21b5743f, -1, 1, -1, -2, 0, -0x63205660, -1, -4, -89, -9, -0x6919bd7e, -0x6ea6, -0x77b8, 0x71ead5d2, -9);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4e00 - 0x4e45
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4e00
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x4e24
        printf("...checksum after hashing %s : %X\n", vname, -1 - g29);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x4e50 - 0x4e75
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4e50
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s343retdec.c
// Address range: 0x4e80 - 0x5056
// Line range:    56 - 58
int32_t set_var(int32_t g_6_l, int32_t g_12_l, int32_t g_29_l, int32_t g_44_l, char g_47_l, char g_60_l, int16_t g_63_l, int32_t g_65_l, int16_t g_75_l, char g_76_l, int32_t g_110_l, int32_t g_113_l, int32_t g_140_l, int16_t g_221_l, int16_t g_222_l, char g_253_l, int32_t g_260_l, int32_t g_279_l, int32_t g_280_l, int32_t g_281_l, int32_t g_294_l, char g_295_l, int32_t g_296_l, int32_t g_297_l, int16_t g_298_l, int16_t g_304_l, int32_t g_616_l, int32_t g_650_l) {
    // 0x4e80
    g2 = g_6_l;
    g3 = g_12_l;
    g4 = g_29_l;
    g5 = g_44_l;
    *(char *)&g6 = g_47_l;
    *(char *)&g31 = g_60_l;
    *(int16_t *)&g7 = g_63_l;
    g8 = g_65_l;
    *(int16_t *)&g9 = g_75_l;
    *(char *)&g10 = g_76_l;
    g11 = g_110_l;
    g12 = g_113_l;
    g13 = g_140_l;
    *(int16_t *)&g14 = g_221_l;
    *(int16_t *)&g15 = g_222_l;
    *(char *)&g16 = g_253_l;
    g17 = g_260_l;
    g18 = g_279_l;
    g19 = g_280_l;
    g20 = g_281_l;
    g21 = g_294_l;
    g22 = g_295_l;
    g23 = g_296_l;
    g24 = g_297_l;
    g25 = g_298_l;
    *(int16_t *)&g26 = g_304_l;
    g27 = g_616_l;
    g28 = g_650_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x5060 - 0x50bd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x5060
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x50c0 - 0x5100
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g29;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g32); // 0x50f5
    g29 = v1 / 256 ^ v2;
}

// Address range: 0x5100 - 0x510d
int64_t _fini(void) {
    // 0x5100
    int64_t result; // 0x5100
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

