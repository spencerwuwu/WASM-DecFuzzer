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
int32_t set_var(int32_t g_22_l, int16_t g_25_l, int16_t g_26_l, char g_61_l, int16_t g_76_l, int16_t g_94_l, int32_t g_96_l, int32_t g_104_l, int32_t g_105_l, int32_t g_113_l, int32_t g_126_l, int32_t g_129_l, int32_t g_137_l, char g_147_l, int16_t g_155_l, int32_t g_156_l, int32_t g_191_l, char g_192_l, int32_t g_194_l, int16_t g_195_l, char g_196_l, char g_211_l, int16_t g_212_l, int32_t g_220_l, char g_225_l, int16_t g_229_l, int32_t g_230_l, int32_t g_234_l, int32_t g_235_l, char g_238_l, int32_t g_239_l, int32_t g_339_l, char g_397_l, int32_t g_511_l, char g_523_l, char g_626_l, char g_630_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x7fe0
int32_t g2 = -0x222632bc; // 0x8020
int32_t g3 = 0x29a2c1b6; // 0x8024
int32_t g4 = 0x2229a2; // 0x8026
int32_t g5 = 0x2b850022; // 0x8028
int32_t g6 = 0x12b85; // 0x802a
int32_t g7 = 1; // 0x802c
int32_t g8 = 1; // 0x8030
int32_t g9 = 0x3a4b37ca; // 0x8034
int32_t g10 = -0x1b646241; // 0x8038
int32_t g11 = 0x8392a3d; // 0x803c
int32_t g12 = -0x3fc894d; // 0x8040
int32_t g13 = -0x46343dfb; // 0x8044
int32_t g14 = -0x6d3ffde; // 0x8048
int32_t g15 = -0x706d4; // 0x804a
int32_t g16 = -8; // 0x804c
int32_t g17 = 0x4180338e; // 0x8050
char g18 = 59; // 0x8054
int32_t g19 = 1; // 0x8058
int16_t g20 = 1; // 0x805c
int32_t g21 = 0x762280f8; // 0x805e
char g22 = -128; // 0x805f
char g23[3] = "\"v"; // 0x8060
int32_t g24 = -1; // 0x8064
int32_t g25 = -0x8ff7d; // 0x8068
int32_t g26 = 0x24f3fff7; // 0x806a
int32_t g27 = -0x5a53db0d; // 0x806c
int32_t g28 = 1; // 0x8070
int32_t g29 = -9; // 0x8074
char g30 = 1; // 0x8078
int32_t g31 = -0x78b03c32; // 0x807c
int32_t g32 = 4; // 0x8080
int32_t g33 = 212; // 0x8084
int32_t g34 = -1; // 0x8088
int32_t g35 = 0x83ff33; // 0x808c
int64_t g36; // 0x808d
int64_t g37; // 0x808e
int32_t g38 = -1; // 0x8090
char g39 = 0; // 0x80a0
int32_t g40 = 0; // 0x80b0
int32_t * g41 = NULL; // 0x80c0
int32_t g42;

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
        result = &g42;
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
    return 0x8098;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g39 != 0) {
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
    g39 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s220retdec.c
// Address range: 0x1150 - 0x14f7
// Line range:    494 - 539
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
    transparent_crc(g2, "g_22", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_25", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_26", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_61", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_76", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_94", v1);
    transparent_crc(g40, "g_96", v1);
    transparent_crc(g8, "g_104", v1);
    transparent_crc(g9, "g_105", v1);
    transparent_crc(g10, "g_113", v1);
    transparent_crc(g11, "g_126", v1);
    transparent_crc(g12, "g_129", v1);
    transparent_crc(g13, "g_137", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_147", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_155", v1);
    transparent_crc(g16, "g_156", v1);
    transparent_crc(g17, "g_191", v1);
    transparent_crc((int32_t)g18, "g_192", v1);
    transparent_crc(g19, "g_194", v1);
    transparent_crc((int32_t)g20, "g_195", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_196", v1);
    transparent_crc((int32_t)g22, "g_211", v1);
    transparent_crc((int32_t)*(int16_t *)&g23, "g_212", v1);
    transparent_crc(g24, "g_220", v1);
    transparent_crc((int32_t)*(char *)&g25, "g_225", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_229", v1);
    transparent_crc(g27, "g_230", v1);
    transparent_crc(g28, "g_234", v1);
    transparent_crc(g29, "g_235", v1);
    transparent_crc((int32_t)g30, "g_238", v1);
    transparent_crc(g31, "g_239", v1);
    transparent_crc(g32, "g_339", v1);
    transparent_crc((int32_t)*(char *)&g33, "g_397", v1);
    transparent_crc(g34, "g_511", v1);
    transparent_crc((int32_t)*(char *)&g35, "g_523", v1);
    transparent_crc((int32_t)*(char *)0x808d, "g_626", v1);
    transparent_crc((int32_t)*(char *)0x808e, "g_630", v1);
    platform_main_end(-1 - *(int32_t *)0x8090, v1);
    return (int32_t)&g42 ^ (int32_t)&g42;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1500 - 0x1506
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1500
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1510 - 0x15a5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1579
        int32_t v2 = i; // 0x1510
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1546
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1584
        *(int32_t *)(4 * i + (int64_t)&g41) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s220retdec.c
// Address range: 0x15b0 - 0x55ef
// Line range:    74 - 487
int16_t func_1(void) {
    // 0x15b0
    set_var(-0x222632bc, -0x3e4a, 0x29a2, 34, 0x2b85, 1, 0, 1, 0x3a4b37ca, -0x1b646241, 0x8392a3d, -0x3fc894d, -0x46343dfb, 34, -1748, -8, 0x4180338e, 59, 1, 1, -8, -128, 0x7622, -1, -125, -9, -0x5a53db0d, 1, -9, 1, -0x78b03c32, 4, -44, -1, 51, -1, -125);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x55f0 - 0x5635
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x55f0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x5614
        printf("...checksum after hashing %s : %X\n", vname, -1 - g38);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x5640 - 0x5665
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x5640
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s220retdec.c
// Address range: 0x5670 - 0x58f8
// Line range:    64 - 66
int32_t set_var(int32_t g_22_l, int16_t g_25_l, int16_t g_26_l, char g_61_l, int16_t g_76_l, int16_t g_94_l, int32_t g_96_l, int32_t g_104_l, int32_t g_105_l, int32_t g_113_l, int32_t g_126_l, int32_t g_129_l, int32_t g_137_l, char g_147_l, int16_t g_155_l, int32_t g_156_l, int32_t g_191_l, char g_192_l, int32_t g_194_l, int16_t g_195_l, char g_196_l, char g_211_l, int16_t g_212_l, int32_t g_220_l, char g_225_l, int16_t g_229_l, int32_t g_230_l, int32_t g_234_l, int32_t g_235_l, char g_238_l, int32_t g_239_l, int32_t g_339_l, char g_397_l, int32_t g_511_l, char g_523_l, char g_626_l, char g_630_l) {
    // 0x5670
    g2 = g_22_l;
    *(int16_t *)&g3 = g_25_l;
    *(int16_t *)&g4 = g_26_l;
    *(char *)&g5 = g_61_l;
    *(int16_t *)&g6 = g_76_l;
    *(int16_t *)&g7 = g_94_l;
    g40 = g_96_l;
    g8 = g_104_l;
    g9 = g_105_l;
    g10 = g_113_l;
    g11 = g_126_l;
    g12 = g_129_l;
    g13 = g_137_l;
    *(char *)&g14 = g_147_l;
    *(int16_t *)&g15 = g_155_l;
    g16 = g_156_l;
    g17 = g_191_l;
    g18 = g_192_l;
    g19 = g_194_l;
    g20 = g_195_l;
    *(char *)&g21 = g_196_l;
    g22 = g_211_l;
    *(int16_t *)&g23 = g_212_l;
    g24 = g_220_l;
    *(char *)&g25 = g_225_l;
    *(int16_t *)&g26 = g_229_l;
    g27 = g_230_l;
    g28 = g_234_l;
    g29 = g_235_l;
    g30 = g_238_l;
    g31 = g_239_l;
    g32 = g_339_l;
    *(char *)&g33 = g_397_l;
    g34 = g_511_l;
    *(char *)&g35 = g_523_l;
    *(char *)&g36 = g_626_l;
    *(char *)&g37 = g_630_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x5900 - 0x595d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x5900
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x5960 - 0x59a0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g38;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g41); // 0x5995
    g38 = v1 / 256 ^ v2;
}

// Address range: 0x59a0 - 0x59ad
int64_t _fini(void) {
    // 0x59a0
    int64_t result; // 0x59a0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

