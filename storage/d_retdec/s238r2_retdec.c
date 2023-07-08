//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
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
int32_t set_var(int16_t g_3_l, int32_t g_26_l, int32_t g_38_l, char g_39_l, int16_t g_41_l, int32_t g_42_l, char g_87_l, int32_t g_94_l, int16_t g_119_l, char g_121_l, char g_138_l, char g_148_l, int32_t g_155_l, int32_t g_166_l, int32_t g_189_l, char g_191_l, int16_t g_249_l, int32_t g_252_l, char g_298_l, int32_t g_349_l, int16_t g_353_l, int32_t g_449_l, int32_t g_506_l, int16_t g_507_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 0xfff8; // 0x6020
int32_t g3 = 0x4e7ccce1; // 0x6024
int32_t g4 = 0x32c2; // 0x6028
int32_t g5 = 0x6219ff40; // 0x602c
int32_t g6 = -0x2c5e7054; // 0x6030
int32_t g7 = -0x1fffe; // 0x6034
int32_t g8 = -0x74aa0002; // 0x6036
int32_t g9 = -0x1274aa01; // 0x6037
int32_t g10 = 0x70ed8b55; // 0x6038
int32_t g11 = 0x5d564161; // 0x603c
int32_t g12 = -0x2ff09; // 0x6040
int16_t g13 = -3; // 0x6042
int32_t g14 = -1; // 0x6044
int32_t g15 = 107; // 0x6048
int32_t g16 = -0x45e08f3f; // 0x604c
int32_t g17 = 7; // 0x6050
int32_t g18 = 1; // 0x6054
int32_t g19 = -0x71e98243; // 0x6058
int16_t g20 = -10; // 0x605c
int32_t g21 = -1; // 0x6060
char g22 = 0; // 0x6070
int32_t g23 = 0; // 0x6080
int32_t g24 = 0; // 0x6084
int32_t g25 = 0; // 0x6085
char g26 = 0; // 0x6086
int32_t g27 = 0; // 0x6088
int32_t * g28 = NULL; // 0x6090
int32_t g29;

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
        result = &g29;
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
    return 0x6068;
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
        __cxa_finalize((int64_t *)*(int64_t *)0x6018);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s238r2.c
// Address range: 0x1150 - 0x13f0
// Line range:    381 - 414
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_3", v1);
    transparent_crc(g3, "g_26", v1);
    transparent_crc(g23, "g_38", v1);
    transparent_crc((int32_t)*(char *)&g24, "g_39", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_41", v1);
    transparent_crc(g5, "g_42", v1);
    transparent_crc((int32_t)*(char *)&g25, "g_87", v1);
    transparent_crc(g6, "g_94", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_119", v1);
    transparent_crc((int32_t)g26, "g_121", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_138", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_148", v1);
    transparent_crc(g10, "g_155", v1);
    transparent_crc(g11, "g_166", v1);
    transparent_crc(g27, "g_189", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_191", v1);
    transparent_crc((int32_t)g13, "g_249", v1);
    transparent_crc(g14, "g_252", v1);
    transparent_crc(-4, "g_270", v1);
    transparent_crc((int32_t)*(char *)&g15, "g_298", v1);
    transparent_crc(g16, "g_349", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_353", v1);
    transparent_crc(g18, "g_449", v1);
    transparent_crc(g19, "g_506", v1);
    transparent_crc((int32_t)g20, "g_507", v1);
    platform_main_end(-1 - *(int32_t *)0x6060, v1);
    return (int32_t)&g29 ^ (int32_t)&g29;
}

// From module:   /usr/include/bits/csmith.h
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
        *(int32_t *)(4 * i + (int64_t)&g28) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s238r2.c
// Address range: 0x14a0 - 0x3b86
// Line range:    62 - 374
int32_t func_1(void) {
    while (true) {
        // continue -> 0x15a3
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3b90 - 0x3bd5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3b90
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3bb4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g21);
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x3be0 - 0x3c05
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3be0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s238r2.c
// Address range: 0x3c10 - 0x3d79
// Line range:    52 - 54
int32_t set_var(int16_t g_3_l, int32_t g_26_l, int32_t g_38_l, char g_39_l, int16_t g_41_l, int32_t g_42_l, char g_87_l, int32_t g_94_l, int16_t g_119_l, char g_121_l, char g_138_l, char g_148_l, int32_t g_155_l, int32_t g_166_l, int32_t g_189_l, char g_191_l, int16_t g_249_l, int32_t g_252_l, char g_298_l, int32_t g_349_l, int16_t g_353_l, int32_t g_449_l, int32_t g_506_l, int16_t g_507_l) {
    // 0x3c10
    *(int16_t *)&g2 = g_3_l;
    g3 = g_26_l;
    g23 = g_38_l;
    *(char *)&g24 = g_39_l;
    *(int16_t *)&g4 = g_41_l;
    g5 = g_42_l;
    *(char *)&g25 = g_87_l;
    g6 = g_94_l;
    *(int16_t *)&g7 = g_119_l;
    g26 = g_121_l;
    *(char *)&g8 = g_138_l;
    *(char *)&g9 = g_148_l;
    g10 = g_155_l;
    g11 = g_166_l;
    g27 = g_189_l;
    *(char *)&g12 = g_191_l;
    g13 = g_249_l;
    g14 = g_252_l;
    *(char *)&g15 = g_298_l;
    g16 = g_349_l;
    *(int16_t *)&g17 = g_353_l;
    g18 = g_449_l;
    g19 = g_506_l;
    g20 = g_507_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3d80 - 0x3ddd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3d80
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3de0 - 0x3e20
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g21;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g28); // 0x3e15
    g21 = v1 / 256 ^ v2;
}

// Address range: 0x3e20 - 0x3e2d
int64_t _fini(void) {
    // 0x3e20
    int64_t result; // 0x3e20
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

