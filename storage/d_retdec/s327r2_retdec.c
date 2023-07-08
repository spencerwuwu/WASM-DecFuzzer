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
int32_t set_var(int16_t g_5_l, int32_t g_16_l, int32_t g_21_l, char g_22_l, int32_t g_24_l, int32_t g_91_l, int16_t g_105_l, char g_119_l, char g_122_l, char g_131_l, char g_132_l, char g_165_l, int32_t g_224_l, int32_t g_226_l, int32_t g_228_l, char g_229_l, int32_t g_230_l, int32_t g_231_l, int32_t g_232_l, int16_t g_233_l, int16_t g_234_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0x768c; // 0x5020
int32_t g3 = 0x6b5b3847; // 0x5024
int32_t g4 = 9; // 0x5028
int32_t g5 = 35; // 0x502c
int32_t g6 = 0x1a094951; // 0x5030
int32_t g7 = -0x478a6272; // 0x5034
int32_t g8 = 0x18895; // 0x5038
int32_t g9 = 0x6000188; // 0x5039
int32_t g10 = 0x60001; // 0x503a
int32_t g11 = 6; // 0x503c
int32_t g12 = -0x11033822; // 0x5040
int32_t g13 = 61; // 0x5044
int32_t g14 = -0xcc83dee; // 0x5048
int32_t g15 = 0x3eec5992; // 0x504c
int32_t g16 = -1; // 0x5050
int16_t g17 = -0x7c92; // 0x5054
int32_t g18 = -1; // 0x5058
int64_t g19 = 0; // 0x5060
int32_t g20 = 0; // 0x5070
int32_t g21 = 0; // 0x5072
int32_t g22 = 0; // 0x5073
int32_t g23 = 0; // 0x5074
int32_t g24 = 0; // 0x5078
int32_t * g25 = NULL; // 0x5080
int32_t g26;

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
        result = &g26;
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
    return &g19;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g19 != 0) {
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
    *(char *)&g19 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s327r2.c
// Address range: 0x1150 - 0x1396
// Line range:    245 - 274
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_5", v1);
    transparent_crc(g3, "g_16", v1);
    transparent_crc(g4, "g_21", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_22", v1);
    transparent_crc(g6, "g_24", v1);
    transparent_crc(g7, "g_91", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_105", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_119", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_122", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_131", v1);
    transparent_crc((int32_t)*(char *)&g22, "g_132", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_165", v1);
    transparent_crc(g23, "g_224", v1);
    transparent_crc(g11, "g_226", v1);
    transparent_crc(g12, "g_228", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_229", v1);
    transparent_crc(g14, "g_230", v1);
    transparent_crc(g15, "g_231", v1);
    transparent_crc(g16, "g_232", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_233", v1);
    transparent_crc((int32_t)g17, "g_234", v1);
    platform_main_end(-1 - *(int32_t *)0x5058, v1);
    return (int32_t)&g26 ^ (int32_t)&g26;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13a0 - 0x13a6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13b0 - 0x1445
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1419
        int32_t v2 = i; // 0x13b0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13e6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1424
        *(int32_t *)(4 * i + (int64_t)&g25) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s327r2.c
// Address range: 0x1450 - 0x2911
// Line range:    58 - 238
int32_t func_1(void) {
    // 0x1450
    set_var(0x768c, 0x6b5b3847, 9, 35, 0x1a094951, -0x478a6272, 0, -107, 0, -120, 0, 1, 0, 6, -0x11033822, 61, -0xcc83dee, 0x3eec5992, -1, 0, -0x7c92);
    return 0x6b5b3847;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2920 - 0x2965
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2920
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2944
        printf("...checksum after hashing %s : %X\n", vname, -1 - g18);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2970 - 0x2995
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2970
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s327r2.c
// Address range: 0x29a0 - 0x2ac3
// Line range:    48 - 50
int32_t set_var(int16_t g_5_l, int32_t g_16_l, int32_t g_21_l, char g_22_l, int32_t g_24_l, int32_t g_91_l, int16_t g_105_l, char g_119_l, char g_122_l, char g_131_l, char g_132_l, char g_165_l, int32_t g_224_l, int32_t g_226_l, int32_t g_228_l, char g_229_l, int32_t g_230_l, int32_t g_231_l, int32_t g_232_l, int16_t g_233_l, int16_t g_234_l) {
    // 0x29a0
    *(int16_t *)&g2 = g_5_l;
    g3 = g_16_l;
    g4 = g_21_l;
    *(char *)&g5 = g_22_l;
    g6 = g_24_l;
    g7 = g_91_l;
    *(int16_t *)&g20 = g_105_l;
    *(char *)&g8 = g_119_l;
    *(char *)&g21 = g_122_l;
    *(char *)&g9 = g_131_l;
    *(char *)&g22 = g_132_l;
    *(char *)&g10 = g_165_l;
    g23 = g_224_l;
    g11 = g_226_l;
    g12 = g_228_l;
    *(char *)&g13 = g_229_l;
    g14 = g_230_l;
    g15 = g_231_l;
    g16 = g_232_l;
    *(int16_t *)&g24 = g_233_l;
    g17 = g_234_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ad0 - 0x2b2d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2ad0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b30 - 0x2b70
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g18;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g25); // 0x2b65
    g18 = v1 / 256 ^ v2;
}

// Address range: 0x2b70 - 0x2b7d
int64_t _fini(void) {
    // 0x2b70
    int64_t result; // 0x2b70
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

