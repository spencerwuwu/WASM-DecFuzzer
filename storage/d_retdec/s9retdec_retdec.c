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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, int32_t g_22_l, int32_t g_26_l, int32_t g_43_l, int16_t g_45_l, int32_t g_49_l, int16_t g_53_l, int32_t g_56_l, int32_t g_67_l, int32_t g_73_l, int32_t g_86_l, int32_t g_106_l, int32_t g_116_l, int16_t g_117_l, int16_t g_120_l, int32_t g_163_l, int32_t g_209_l, int16_t g_230_l, int16_t g_236_l, int32_t g_240_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0x799ac789; // 0x5020
int32_t g3 = 4; // 0x5024
int32_t g4 = 0x4a71a6e4; // 0x5028
int32_t g5 = -0x77b7a43; // 0x502c
int32_t g6 = 0x141c; // 0x5030
int32_t g7 = 1; // 0x5034
int32_t g8 = 0xffff; // 0x5038
int32_t g9 = -0x7dd3c1b0; // 0x503c
int32_t g10 = -3; // 0x5040
int32_t g11 = -1; // 0x5044
int32_t g12 = -4; // 0x5048
int32_t g13 = 0x5eb11369; // 0x504c
int32_t g14 = -10; // 0x5050
int32_t g15 = 0x1fffb; // 0x5054
int16_t g16 = 1; // 0x5056
int32_t g17 = -0x22ed9859; // 0x5058
int32_t g18 = -0x3e6a0a51; // 0x505c
int32_t g19 = -0x22e93e6b; // 0x505e
int32_t g20 = -0x63ca22ea; // 0x5060
int32_t g21 = -1; // 0x5064
char g22 = 0; // 0x5070
int32_t g23 = 0; // 0x5080
int32_t g24 = 0; // 0x5084
int32_t g25 = 0; // 0x5088
int32_t * g26 = NULL; // 0x5090
int32_t g27;

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
        result = &g27;
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
    return 0x5068;
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s9retdec.c
// Address range: 0x1150 - 0x13a6
// Line range:    214 - 244
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
    transparent_crc(g23, "g_2", v1);
    transparent_crc(g2, "g_3", v1);
    transparent_crc(g3, "g_6", v1);
    transparent_crc(g4, "g_22", v1);
    transparent_crc(g24, "g_26", v1);
    transparent_crc(g5, "g_43", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_45", v1);
    transparent_crc(g7, "g_49", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_53", v1);
    transparent_crc(g9, "g_56", v1);
    transparent_crc(g10, "g_67", v1);
    transparent_crc(g11, "g_73", v1);
    transparent_crc(g12, "g_86", v1);
    transparent_crc(g13, "g_106", v1);
    transparent_crc(g14, "g_116", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_117", v1);
    transparent_crc((int32_t)g16, "g_120", v1);
    transparent_crc(g17, "g_163", v1);
    transparent_crc(g25, "g_209", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_230", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_236", v1);
    transparent_crc(g20, "g_240", v1);
    platform_main_end(-1 - *(int32_t *)0x5064, v1);
    return (int32_t)&g27 ^ (int32_t)&g27;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13b0 - 0x13b6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13c0 - 0x1455
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1429
        int32_t v2 = i; // 0x13c0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13f6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1434
        *(int32_t *)(4 * i + (int64_t)&g26) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s9retdec.c
// Address range: 0x1460 - 0x29a9
// Line range:    59 - 207
int32_t func_1(void) {
    // 0x1460
    set_var(0, 0, 4, 0x4a71a6e4, -0x76d9a831, 4, -0x57b9, 1, -1, -0x7dd3c1b0, -3, -1, -4, 0x5eb11369, -10, -5, 1, -0x22ed9859, 0, -2641, -0x3e6b, -0x63ca22ea);
    return -0x10562e65;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x29b0 - 0x29f5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x29b0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x29d4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g21);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2a00 - 0x2a25
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2a00
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s9retdec.c
// Address range: 0x2a30 - 0x2b60
// Line range:    49 - 51
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, int32_t g_22_l, int32_t g_26_l, int32_t g_43_l, int16_t g_45_l, int32_t g_49_l, int16_t g_53_l, int32_t g_56_l, int32_t g_67_l, int32_t g_73_l, int32_t g_86_l, int32_t g_106_l, int32_t g_116_l, int16_t g_117_l, int16_t g_120_l, int32_t g_163_l, int32_t g_209_l, int16_t g_230_l, int16_t g_236_l, int32_t g_240_l) {
    // 0x2a30
    g23 = g_2_l;
    g2 = g_3_l;
    g3 = g_6_l;
    g4 = g_22_l;
    g24 = g_26_l;
    g5 = g_43_l;
    *(int16_t *)&g6 = g_45_l;
    g7 = g_49_l;
    *(int16_t *)&g8 = g_53_l;
    g9 = g_56_l;
    g10 = g_67_l;
    g11 = g_73_l;
    g12 = g_86_l;
    g13 = g_106_l;
    g14 = g_116_l;
    *(int16_t *)&g15 = g_117_l;
    g16 = g_120_l;
    g17 = g_163_l;
    g25 = g_209_l;
    *(int16_t *)&g18 = g_230_l;
    *(int16_t *)&g19 = g_236_l;
    g20 = g_240_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b60 - 0x2bbd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2b60
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2bc0 - 0x2c00
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g21;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g26); // 0x2bf5
    g21 = v1 / 256 ^ v2;
}

// Address range: 0x2c00 - 0x2c0d
int64_t _fini(void) {
    // 0x2c00
    int64_t result; // 0x2c00
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

