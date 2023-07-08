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
int32_t set_var(int32_t g_11_l, char g_12_l, int32_t g_13_l, int32_t g_31_l, int16_t g_32_l, int16_t g_36_l, int32_t g_47_l, int32_t g_48_l, int32_t g_49_l, int32_t g_138_l, int32_t g_147_l, int16_t g_154_l, int32_t g_167_l, int32_t g_185_l, int32_t g_232_l, int32_t g_254_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 1; // 0x5020
int32_t g3 = 255; // 0x5024
int32_t g4 = 0x1362395e; // 0x5028
int32_t g5 = 0x5ee35d5d; // 0x502c
int32_t g6 = -0x1e01fffe; // 0x5030
int32_t g7 = -0x1e02; // 0x5032
int32_t g8 = -1; // 0x5034
int32_t g9 = 8; // 0x5038
int32_t g10 = 0xda53d1e; // 0x503c
int32_t g11 = 4; // 0x5040
int32_t g12 = -8; // 0x5044
int32_t g13 = 0x26b4; // 0x5048
int32_t g14 = 0x70a8b0a8; // 0x504c
int32_t g15 = 1; // 0x5050
int32_t g16 = 2; // 0x5054
int32_t g17 = 1; // 0x5058
int32_t g18 = -1; // 0x505c
int64_t g19 = 0; // 0x5060
int32_t * g20 = NULL; // 0x5070
int32_t g21;

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
        result = &g21;
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s712r2.c
// Address range: 0x1150 - 0x1323
// Line range:    217 - 241
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
    transparent_crc(g2, "g_11", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_12", v1);
    transparent_crc(g4, "g_13", v1);
    transparent_crc(g5, "g_31", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_32", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_36", v1);
    transparent_crc(g8, "g_47", v1);
    transparent_crc(g9, "g_48", v1);
    transparent_crc(g10, "g_49", v1);
    transparent_crc(g11, "g_138", v1);
    transparent_crc(g12, "g_147", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_154", v1);
    transparent_crc(g14, "g_167", v1);
    transparent_crc(g15, "g_185", v1);
    transparent_crc(g16, "g_232", v1);
    transparent_crc(g17, "g_254", v1);
    platform_main_end(-1 - *(int32_t *)0x505c, v1);
    return (int32_t)&g21 ^ (int32_t)&g21;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1330 - 0x1336
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1330
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1340 - 0x13d5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x13a9
        int32_t v2 = i; // 0x1340
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1376
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x13b4
        *(int32_t *)(4 * i + (int64_t)&g20) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s712r2.c
// Address range: 0x13e0 - 0x27b3
// Line range:    53 - 210
char func_1(void) {
    // 0x233c
    set_var(1, -1, -0x33e25469, 0, 0, 11, -0x30aa8d3f, 8, 0xda53d1d, 4, -8, 0x26b4, 0x70a8b0a8, 1, 1, 1);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x27c0 - 0x2805
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x27c0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x27e4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g18);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2810 - 0x2835
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2810
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s712r2.c
// Address range: 0x2840 - 0x2943
// Line range:    43 - 45
int32_t set_var(int32_t g_11_l, char g_12_l, int32_t g_13_l, int32_t g_31_l, int16_t g_32_l, int16_t g_36_l, int32_t g_47_l, int32_t g_48_l, int32_t g_49_l, int32_t g_138_l, int32_t g_147_l, int16_t g_154_l, int32_t g_167_l, int32_t g_185_l, int32_t g_232_l, int32_t g_254_l) {
    // 0x2840
    g2 = g_11_l;
    *(char *)&g3 = g_12_l;
    g4 = g_13_l;
    g5 = g_31_l;
    *(int16_t *)&g6 = g_32_l;
    *(int16_t *)&g7 = g_36_l;
    g8 = g_47_l;
    g9 = g_48_l;
    g10 = g_49_l;
    g11 = g_138_l;
    g12 = g_147_l;
    *(int16_t *)&g13 = g_154_l;
    g14 = g_167_l;
    g15 = g_185_l;
    g16 = g_232_l;
    g17 = g_254_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2950 - 0x29ad
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2950
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x29b0 - 0x29f0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g18;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g20); // 0x29e5
    g18 = v1 / 256 ^ v2;
}

// Address range: 0x29f0 - 0x29fd
int64_t _fini(void) {
    // 0x29f0
    int64_t result; // 0x29f0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

