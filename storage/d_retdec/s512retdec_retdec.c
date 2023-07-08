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
int32_t set_var(char g_11_l, int16_t g_18_l, int32_t g_31_l, int32_t g_32_l, int32_t g_33_l, int32_t g_34_l, int32_t g_35_l, int32_t g_38_l, int16_t g_42_l, char g_49_l, int32_t g_50_l, int32_t g_87_l, char g_88_l, int32_t g_116_l, int32_t g_117_l, int32_t g_124_l, int32_t g_145_l, int32_t g_157_l, int32_t g_160_l, int32_t g_163_l, int32_t g_168_l, int32_t g_169_l, int32_t g_252_l, char g_260_l, int32_t g_271_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
char g2 = 51; // 0x5020
int32_t g3 = -0x57b4ffff; // 0x5022
int32_t g4 = 0x416da84b; // 0x5024
int32_t g5 = -2; // 0x5028
int32_t g6 = -1; // 0x502c
int32_t g7 = -0x4d8f982b; // 0x5030
int32_t g8 = 0x460deea3; // 0x5034
int32_t g9 = 0x44ffff; // 0x5038
int32_t g10 = -0xffbc; // 0x503a
int32_t g11 = -1; // 0x503c
int32_t g12 = -7; // 0x5040
int32_t g13 = 58; // 0x5044
int32_t g14 = -0x7309ce4b; // 0x5048
int32_t g15 = -0x67d40621; // 0x504c
int32_t g16 = -1; // 0x5050
int32_t g17 = 0x6e93423a; // 0x5054
int32_t g18 = 3; // 0x5058
int32_t g19 = -5; // 0x505c
int32_t g20 = 0x1e1ea803; // 0x5060
int32_t g21 = -1; // 0x5064
int32_t g22 = 0x2324a69d; // 0x5068
int32_t g23 = 1; // 0x506c
int32_t g24 = -1; // 0x5070
char g25 = 0; // 0x5080
int32_t g26 = 0; // 0x5090
int32_t g27 = 0; // 0x5094
int32_t g28 = 0; // 0x5098
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
    if (g25 != 0) {
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
    g25 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s512retdec.c
// Address range: 0x1150 - 0x13e4
// Line range:    264 - 297
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
    transparent_crc((int32_t)g2, "g_11", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_18", v1);
    transparent_crc(g26, "g_31", v1);
    transparent_crc(g4, "g_32", v1);
    transparent_crc(g5, "g_33", v1);
    transparent_crc(g6, "g_34", v1);
    transparent_crc(g7, "g_35", v1);
    transparent_crc(g8, "g_38", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_42", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_49", v1);
    transparent_crc(g11, "g_50", v1);
    transparent_crc(g12, "g_87", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_88", v1);
    transparent_crc(g14, "g_116", v1);
    transparent_crc(g15, "g_117", v1);
    transparent_crc(g16, "g_124", v1);
    transparent_crc(g17, "g_145", v1);
    transparent_crc(g18, "g_157", v1);
    transparent_crc(g19, "g_160", v1);
    transparent_crc(g20, "g_163", v1);
    transparent_crc(g27, "g_168", v1);
    transparent_crc(g21, "g_169", v1);
    transparent_crc(g22, "g_252", v1);
    transparent_crc((int32_t)*(char *)&g28, "g_260", v1);
    transparent_crc(g23, "g_271", v1);
    platform_main_end(-1 - *(int32_t *)0x5070, v1);
    return (int32_t)&g30 ^ (int32_t)&g30;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13f0 - 0x13f6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1400 - 0x1495
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1469
        int32_t v2 = i; // 0x1400
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1436
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1474
        *(int32_t *)(4 * i + (int64_t)&g29) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s512retdec.c
// Address range: 0x14a0 - 0x2bc9
// Line range:    62 - 257
int16_t func_1(void) {
    // 0x14a0
    set_var(51, 1, 0, 0x416da84b, -0xb259, -1, -0x4d8f982b, 0x460deea3, 0, 68, -1, -0x460deea6, 58, -0x7309ce4b, -0x67d40621, -1, 0x6e93423a, 3, -5, 0x1e1ea803, 0, -1, 0x2324a69d, 0, 1);
    return -0x115d;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2bd0 - 0x2c15
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2bd0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2bf4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g24);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2c20 - 0x2c45
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2c20
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s512retdec.c
// Address range: 0x2c50 - 0x2db4
// Line range:    52 - 54
int32_t set_var(char g_11_l, int16_t g_18_l, int32_t g_31_l, int32_t g_32_l, int32_t g_33_l, int32_t g_34_l, int32_t g_35_l, int32_t g_38_l, int16_t g_42_l, char g_49_l, int32_t g_50_l, int32_t g_87_l, char g_88_l, int32_t g_116_l, int32_t g_117_l, int32_t g_124_l, int32_t g_145_l, int32_t g_157_l, int32_t g_160_l, int32_t g_163_l, int32_t g_168_l, int32_t g_169_l, int32_t g_252_l, char g_260_l, int32_t g_271_l) {
    // 0x2c50
    g2 = g_11_l;
    *(int16_t *)&g3 = g_18_l;
    g26 = g_31_l;
    g4 = g_32_l;
    g5 = g_33_l;
    g6 = g_34_l;
    g7 = g_35_l;
    g8 = g_38_l;
    *(int16_t *)&g9 = g_42_l;
    *(char *)&g10 = g_49_l;
    g11 = g_50_l;
    g12 = g_87_l;
    *(char *)&g13 = g_88_l;
    g14 = g_116_l;
    g15 = g_117_l;
    g16 = g_124_l;
    g17 = g_145_l;
    g18 = g_157_l;
    g19 = g_160_l;
    g20 = g_163_l;
    g27 = g_168_l;
    g21 = g_169_l;
    g22 = g_252_l;
    *(char *)&g28 = g_260_l;
    g23 = g_271_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2dc0 - 0x2e1d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2dc0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e20 - 0x2e60
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g24;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g29); // 0x2e55
    g24 = v1 / 256 ^ v2;
}

// Address range: 0x2e60 - 0x2e6d
int64_t _fini(void) {
    // 0x2e60
    int64_t result; // 0x2e60
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

