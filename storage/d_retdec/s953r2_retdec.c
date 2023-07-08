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
int32_t set_var(int16_t g_4_l, int32_t g_20_l, char g_24_l, int32_t g_31_l, int32_t g_52_l, int32_t g_53_l, char g_63_l, int16_t g_75_l, int32_t g_76_l, int32_t g_87_l, char g_107_l, int32_t g_119_l, int32_t g_123_l, int32_t g_126_l, char g_128_l, int32_t g_163_l, char g_170_l, int16_t g_172_l, int32_t g_192_l, int16_t g_198_l, char g_208_l, int32_t g_284_l, int32_t g_290_l, int32_t g_311_l, char g_312_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0xffff; // 0x5020
int32_t g3 = 6; // 0x5024
char g4 = 8; // 0x5028
int32_t g5 = -0x43959782; // 0x502c
int32_t g6 = -1; // 0x5030
int32_t g7 = -2; // 0x5034
int32_t g8 = 0xfff6; // 0x5038
int32_t g9 = -0x4480b89d; // 0x503c
int32_t g10 = 1; // 0x5040
int32_t g11 = 4; // 0x5044
int32_t g12 = -6; // 0x5048
int32_t g13 = 0x24ddd4cc; // 0x504c
char g14 = -119; // 0x5050
int32_t g15 = -2; // 0x5054
int32_t g16 = 0x10038; // 0x5058
int16_t g17 = 1; // 0x505a
int32_t g18 = 5; // 0x505c
int32_t g19 = 0xfefff8; // 0x5060
char g20 = -2; // 0x5062
int32_t g21 = 6; // 0x5064
int32_t g22 = -0x631a015d; // 0x5068
int32_t g23 = 5; // 0x506c
int32_t g24 = 9; // 0x5070
int32_t g25 = -1; // 0x5074
char g26 = 0; // 0x5080
int32_t g27 = 0; // 0x5090
int32_t g28 = 0; // 0x5094
int32_t * g29 = NULL; // 0x50a0
int32_t g30;

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
        result = &g30;
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
    return 0x5078;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g26 != 0) {
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
    g26 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s953r2.c
// Address range: 0x1150 - 0x1405
// Line range:    252 - 286
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_4", v1);
    transparent_crc(g3, "g_20", v1);
    transparent_crc((int32_t)g4, "g_24", v1);
    transparent_crc(g5, "g_31", v1);
    transparent_crc(g6, "g_52", v1);
    transparent_crc(g7, "g_53", v1);
    transparent_crc((int32_t)*(char *)&g27, "g_63", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_75", v1);
    transparent_crc(g9, "g_76", v1);
    transparent_crc(g10, "g_87", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_107", v1);
    transparent_crc(g12, "g_119", v1);
    transparent_crc(g28, "g_123", v1);
    transparent_crc(g13, "g_126", v1);
    transparent_crc((int32_t)g14, "g_128", v1);
    transparent_crc(*(int32_t *)0x30c8, "g_148", v1);
    transparent_crc(g15, "g_163", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_170", v1);
    transparent_crc((int32_t)g17, "g_172", v1);
    transparent_crc(g18, "g_192", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_198", v1);
    transparent_crc((int32_t)g20, "g_208", v1);
    transparent_crc(g21, "g_284", v1);
    transparent_crc(g22, "g_290", v1);
    transparent_crc(g23, "g_311", v1);
    transparent_crc((int32_t)*(char *)&g24, "g_312", v1);
    platform_main_end(-1 - *(int32_t *)0x5074, v1);
    return (int32_t)&g30 ^ (int32_t)&g30;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1410 - 0x1416
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1410
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1420 - 0x14b5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1489
        int32_t v2 = i; // 0x1420
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1456
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1494
        *(int32_t *)(4 * i + (int64_t)&g29) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s953r2.c
// Address range: 0x14c0 - 0x2c90
// Line range:    67 - 245
int16_t func_1(void) {
    // 0x14c0
    set_var(-1, 6, 8, -0x43959782, -1, -2, 0, -10, -0x4480b89d, 1, 4, -6, 0, 4, -119, -2, 56, 1, 5, -8, -2, 6, -0x631a015d, 5, -4);
    return -2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2c90 - 0x2cd5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2c90
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2cb4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g25);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2ce0 - 0x2d05
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2ce0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s953r2.c
// Address range: 0x2d10 - 0x2e7b
// Line range:    57 - 59
int32_t set_var(int16_t g_4_l, int32_t g_20_l, char g_24_l, int32_t g_31_l, int32_t g_52_l, int32_t g_53_l, char g_63_l, int16_t g_75_l, int32_t g_76_l, int32_t g_87_l, char g_107_l, int32_t g_119_l, int32_t g_123_l, int32_t g_126_l, char g_128_l, int32_t g_163_l, char g_170_l, int16_t g_172_l, int32_t g_192_l, int16_t g_198_l, char g_208_l, int32_t g_284_l, int32_t g_290_l, int32_t g_311_l, char g_312_l) {
    // 0x2d10
    *(int16_t *)&g2 = g_4_l;
    g3 = g_20_l;
    g4 = g_24_l;
    g5 = g_31_l;
    g6 = g_52_l;
    g7 = g_53_l;
    *(char *)&g27 = g_63_l;
    *(int16_t *)&g8 = g_75_l;
    g9 = g_76_l;
    g10 = g_87_l;
    *(char *)&g11 = g_107_l;
    g12 = g_119_l;
    g28 = g_123_l;
    g13 = g_126_l;
    g14 = g_128_l;
    g15 = g_163_l;
    *(char *)&g16 = g_170_l;
    g17 = g_172_l;
    g18 = g_192_l;
    *(int16_t *)&g19 = g_198_l;
    g20 = g_208_l;
    g21 = g_284_l;
    g22 = g_290_l;
    g23 = g_311_l;
    *(char *)&g24 = g_312_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e80 - 0x2edd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2e80
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ee0 - 0x2f20
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g25;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g29); // 0x2f15
    g25 = v1 / 256 ^ v2;
}

// Address range: 0x2f20 - 0x2f2d
int64_t _fini(void) {
    // 0x2f20
    int64_t result; // 0x2f20
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

