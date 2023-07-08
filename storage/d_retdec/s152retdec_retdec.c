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
int32_t set_var(int32_t g_2_l, char g_23_l, int32_t g_92_l, int32_t g_154_l, int32_t g_155_l, int32_t g_156_l, int32_t g_159_l, char g_172_l, char g_189_l, char g_204_l, int32_t g_312_l, int32_t g_332_l, char g_341_l, int32_t g_358_l, char g_359_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 1; // 0x5020
int32_t g3 = 1; // 0x5024
int32_t g4 = 1; // 0x5028
int32_t g5 = 0x2287f110; // 0x502c
int32_t g6 = 6; // 0x5030
int32_t g7 = -0x233ae7a3; // 0x5034
int32_t g8 = -0x214612d6; // 0x5038
int32_t g9 = 0x127ff; // 0x503c
int32_t g10 = -0xfffed9; // 0x503d
int32_t g11 = -0xffff; // 0x503e
int32_t g12 = -1; // 0x5040
int32_t g13 = -0x67be3dee; // 0x5044
char g14 = -16; // 0x5048
int32_t g15 = -0x79b56304; // 0x504c
int32_t g16 = 253; // 0x5050
int32_t g17 = -1; // 0x5054
char g18 = 0; // 0x5060
int32_t * g19 = NULL; // 0x5070
int32_t g20;

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
        result = &g20;
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
    return 0x5058;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g18 != 0) {
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
    g18 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s152retdec.c
// Address range: 0x1150 - 0x1312
// Line range:    236 - 259
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
    transparent_crc((int32_t)*(char *)&g3, "g_23", v1);
    transparent_crc(g4, "g_92", v1);
    transparent_crc(g5, "g_154", v1);
    transparent_crc(g6, "g_155", v1);
    transparent_crc(g7, "g_156", v1);
    transparent_crc(g8, "g_159", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_172", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_189", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_204", v1);
    transparent_crc(g12, "g_312", v1);
    transparent_crc(g13, "g_332", v1);
    transparent_crc((int32_t)g14, "g_341", v1);
    transparent_crc(g15, "g_358", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_359", v1);
    platform_main_end(-1 - *(int32_t *)0x5054, v1);
    return (int32_t)&g20 ^ (int32_t)&g20;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1320 - 0x1326
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1320
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1330 - 0x13c5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1399
        int32_t v2 = i; // 0x1330
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1366
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x13a4
        *(int32_t *)(4 * i + (int64_t)&g19) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s152retdec.c
// Address range: 0x13d0 - 0x29fe
// Line range:    52 - 229
char func_1(void) {
    // 0x13d0
    set_var(-0x5d4a87cf, 0, -23, 0x2287f110, 6, -0x233ae7a3, -0x214612d6, -1, 39, 1, -1, -0x67be3dee, -16, -0x79b56304, -3);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a00 - 0x2a45
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2a00
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2a24
        printf("...checksum after hashing %s : %X\n", vname, -1 - g17);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2a50 - 0x2a75
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2a50
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s152retdec.c
// Address range: 0x2a80 - 0x2b46
// Line range:    42 - 44
int32_t set_var(int32_t g_2_l, char g_23_l, int32_t g_92_l, int32_t g_154_l, int32_t g_155_l, int32_t g_156_l, int32_t g_159_l, char g_172_l, char g_189_l, char g_204_l, int32_t g_312_l, int32_t g_332_l, char g_341_l, int32_t g_358_l, char g_359_l) {
    // 0x2a80
    g2 = g_2_l;
    *(char *)&g3 = g_23_l;
    g4 = g_92_l;
    g5 = g_154_l;
    g6 = g_155_l;
    g7 = g_156_l;
    g8 = g_159_l;
    *(char *)&g9 = g_172_l;
    *(char *)&g10 = g_189_l;
    *(char *)&g11 = g_204_l;
    g12 = g_312_l;
    g13 = g_332_l;
    g14 = g_341_l;
    g15 = g_358_l;
    *(char *)&g16 = g_359_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b50 - 0x2bad
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2b50
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2bb0 - 0x2bf0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g17;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g19); // 0x2be5
    g17 = v1 / 256 ^ v2;
}

// Address range: 0x2bf0 - 0x2bfd
int64_t _fini(void) {
    // 0x2bf0
    int64_t result; // 0x2bf0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

