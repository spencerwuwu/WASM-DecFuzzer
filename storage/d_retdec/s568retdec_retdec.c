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
int32_t set_var(int32_t g_2_l, int32_t g_4_l, char g_20_l, int32_t g_21_l, int16_t g_40_l, int32_t g_42_l, int32_t g_84_l, int32_t g_144_l, int32_t g_169_l, int32_t g_173_l, int32_t g_203_l, char g_215_l, int32_t g_217_l, int32_t g_218_l, char g_221_l, int32_t g_223_l, int32_t g_224_l, int16_t g_237_l, int16_t g_293_l, int16_t g_350_l, char g_405_l, int32_t g_414_l, char g_415_l, int32_t g_418_l, int32_t g_419_l, char g_439_l, int32_t g_466_l, int16_t g_467_l, char g_468_l, int16_t g_487_l, int32_t g_488_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = -1; // 0x6020
int32_t g3 = -0x3d24ddee; // 0x6024
int32_t g4 = 128; // 0x6028
int32_t g5 = 0x169ff4ca; // 0x602c
int32_t g6 = -0x496ef3cd; // 0x6030
int32_t g7 = -1; // 0x6034
int32_t g8 = -9; // 0x6038
int32_t g9 = 0x4d15affb; // 0x603c
int32_t g10 = -0x1b857083; // 0x6040
int32_t g11 = 0xdaf6fce; // 0x6044
int32_t g12 = 0x482f0b70; // 0x6048
char g13 = -64; // 0x604c
int32_t g14 = 0x2d585d5; // 0x6050
int32_t g15 = 1; // 0x6054
int32_t g16 = 0x8e0a81; // 0x6058
int32_t g17 = -0x43d8ff72; // 0x605a
int32_t g18 = 0x4b16bc27; // 0x605c
int32_t g19 = 232; // 0x6060
int32_t g20 = 0x55626fd7; // 0x6064
int32_t g21 = 1; // 0x6068
int32_t g22 = 9; // 0x606c
int32_t g23 = 8; // 0x6070
int32_t g24 = 0x732a70; // 0x6074
char g25 = 115; // 0x6076
int32_t g26 = 0x952c; // 0x6078
int32_t g27 = -3; // 0x607c
int32_t g28 = -1; // 0x6080
char g29 = 0; // 0x6090
int32_t g30 = 0; // 0x60a0
int32_t g31 = 0; // 0x60a4
int32_t g32 = 0; // 0x60a8
int32_t g33 = 0; // 0x60aa
int32_t g34 = 0; // 0x60ac
int32_t * g35 = NULL; // 0x60b0
int32_t g36;

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
        result = &g36;
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
    return 0x6088;
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
    if (g1 != 0) {
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s568retdec.c
// Address range: 0x1150 - 0x146b
// Line range:    368 - 407
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
    transparent_crc(g3, "g_4", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_20", v1);
    transparent_crc(g5, "g_21", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_40", v1);
    transparent_crc(g6, "g_42", v1);
    transparent_crc(g7, "g_84", v1);
    transparent_crc(g8, "g_144", v1);
    transparent_crc(g9, "g_169", v1);
    transparent_crc(g10, "g_173", v1);
    transparent_crc(g31, "g_203", v1);
    transparent_crc((int32_t)*(char *)&g32, "g_215", v1);
    transparent_crc(g11, "g_217", v1);
    transparent_crc(g12, "g_218", v1);
    transparent_crc((int32_t)g13, "g_221", v1);
    transparent_crc(g14, "g_223", v1);
    transparent_crc(g15, "g_224", v1);
    transparent_crc((int32_t)*(int16_t *)&g33, "g_237", v1);
    transparent_crc((int32_t)*(int16_t *)&g34, "g_293", v1);
    transparent_crc((int32_t)*(int16_t *)&g16, "g_350", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_405", v1);
    transparent_crc(g18, "g_414", v1);
    transparent_crc((int32_t)*(char *)&g19, "g_415", v1);
    transparent_crc(g20, "g_418", v1);
    transparent_crc(g21, "g_419", v1);
    transparent_crc((int32_t)*(char *)&g22, "g_439", v1);
    transparent_crc(g23, "g_466", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_467", v1);
    transparent_crc((int32_t)g25, "g_468", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_487", v1);
    transparent_crc(g27, "g_488", v1);
    platform_main_end(-1 - *(int32_t *)0x6080, v1);
    return (int32_t)&g36 ^ (int32_t)&g36;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1470 - 0x1476
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1470
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1480 - 0x1515
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14e9
        int32_t v2 = i; // 0x1480
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x14b6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14f4
        *(int32_t *)(4 * i + (int64_t)&g35) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s568retdec.c
// Address range: 0x1520 - 0x302e
// Line range:    68 - 361
char func_1(void) {
    // 0x2dff
    set_var(-1, -0x3d24dded, 0, 0xfb456d, 0, 0, 0, -9, 0x4d15affb, -0x1b857083, 0, 0, 0xdaf6fce, 0x482f0b70, -64, 0x2d585d5, 1, 0, 0, 2689, -114, 0x4b16bc27, -24, 0x55626fd7, 1, 9, 8, 0x2a70, 115, -0x6ad4, -3);
    return 39;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3030 - 0x3075
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3030
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3054
        printf("...checksum after hashing %s : %X\n", vname, -1 - g28);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3080 - 0x30a5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3080
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s568retdec.c
// Address range: 0x30b0 - 0x329e
// Line range:    58 - 60
int32_t set_var(int32_t g_2_l, int32_t g_4_l, char g_20_l, int32_t g_21_l, int16_t g_40_l, int32_t g_42_l, int32_t g_84_l, int32_t g_144_l, int32_t g_169_l, int32_t g_173_l, int32_t g_203_l, char g_215_l, int32_t g_217_l, int32_t g_218_l, char g_221_l, int32_t g_223_l, int32_t g_224_l, int16_t g_237_l, int16_t g_293_l, int16_t g_350_l, char g_405_l, int32_t g_414_l, char g_415_l, int32_t g_418_l, int32_t g_419_l, char g_439_l, int32_t g_466_l, int16_t g_467_l, char g_468_l, int16_t g_487_l, int32_t g_488_l) {
    // 0x30b0
    g2 = g_2_l;
    g3 = g_4_l;
    *(char *)&g4 = g_20_l;
    g5 = g_21_l;
    *(int16_t *)&g30 = g_40_l;
    g6 = g_42_l;
    g7 = g_84_l;
    g8 = g_144_l;
    g9 = g_169_l;
    g10 = g_173_l;
    g31 = g_203_l;
    *(char *)&g32 = g_215_l;
    g11 = g_217_l;
    g12 = g_218_l;
    g13 = g_221_l;
    g14 = g_223_l;
    g15 = g_224_l;
    *(int16_t *)&g33 = g_237_l;
    *(int16_t *)&g34 = g_293_l;
    *(int16_t *)&g16 = g_350_l;
    *(char *)&g17 = g_405_l;
    g18 = g_414_l;
    *(char *)&g19 = g_415_l;
    g20 = g_418_l;
    g21 = g_419_l;
    *(char *)&g22 = g_439_l;
    g23 = g_466_l;
    *(int16_t *)&g24 = g_467_l;
    g25 = g_468_l;
    *(int16_t *)&g26 = g_487_l;
    g27 = g_488_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x32a0 - 0x32fd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x32a0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3300 - 0x3340
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g28;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g35); // 0x3335
    g28 = v1 / 256 ^ v2;
}

// Address range: 0x3340 - 0x334d
int64_t _fini(void) {
    // 0x3340
    int64_t result; // 0x3340
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

