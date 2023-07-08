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
int32_t set_var(char g_5_l, int16_t g_24_l, int16_t g_28_l, int16_t g_30_l, int32_t g_47_l, char g_68_l, int16_t g_71_l, int32_t g_73_l, char g_110_l, int32_t g_121_l, int32_t g_135_l, int32_t g_136_l, int32_t g_149_l, char g_185_l, char g_195_l, int32_t g_198_l, int16_t g_199_l, int32_t g_218_l, int32_t g_219_l, int32_t g_233_l, char g_267_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0x495700c3; // 0x5020
int32_t g3 = 0x94957; // 0x5022
int32_t g4 = 0x40009; // 0x5024
int32_t g5 = -0x66dbfffc; // 0x5026
int32_t g6 = -0x2fae66dc; // 0x5028
int32_t g7 = -0xff0f; // 0x502c
int32_t g8 = -0x55170001; // 0x502e
int32_t g9 = 0x38b1aae8; // 0x5030
int32_t g10 = 1; // 0x5034
int32_t g11 = -1; // 0x5038
int32_t g12 = 0x77fa4877; // 0x503c
int32_t g13 = -1; // 0x5040
int32_t g14 = 0x19e39778; // 0x5044
int32_t g15 = 255; // 0x5048
int32_t g16 = 0x6f85e4ff; // 0x504c
int16_t g17 = 3; // 0x5050
int32_t g18 = 0xfea248f; // 0x5054
int32_t g19 = -1; // 0x5058
int32_t g20 = -0x184fefe6; // 0x505c
int32_t g21 = 38; // 0x5060
int32_t g22 = -1; // 0x5064
char g23 = 0; // 0x5070
int32_t g24 = 0; // 0x5080
int32_t * g25 = NULL; // 0x5090
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
    if (g23 != 0) {
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
    g23 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s842retdec.c
// Address range: 0x1150 - 0x1396
// Line range:    244 - 273
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
    transparent_crc((int32_t)*(char *)&g2, "g_5", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_24", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_28", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_30", v1);
    transparent_crc(g6, "g_47", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_68", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_71", v1);
    transparent_crc(g9, "g_73", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_110", v1);
    transparent_crc(g11, "g_121", v1);
    transparent_crc(g12, "g_135", v1);
    transparent_crc(g13, "g_136", v1);
    transparent_crc(g14, "g_149", v1);
    transparent_crc((int32_t)*(char *)&g24, "g_185", v1);
    transparent_crc((int32_t)*(char *)&g15, "g_195", v1);
    transparent_crc(g16, "g_198", v1);
    transparent_crc((int32_t)g17, "g_199", v1);
    transparent_crc(g18, "g_218", v1);
    transparent_crc(g19, "g_219", v1);
    transparent_crc(g20, "g_233", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_267", v1);
    platform_main_end(-1 - *(int32_t *)0x5064, v1);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s842retdec.c
// Address range: 0x1450 - 0x29bb
// Line range:    58 - 237
char func_1(void) {
    // 0x1450
    set_var(84, -0x6799, 0, -12, -0x2fae66dc, -15, -1, 0x38b1aae8, 1, 84, 0x77fa4877, -1, 0x19e39778, 0, -1, 0x6f85e4ff, 3, 0xfea248f, -1, -0x184fefe6, 38);
    return 84;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x29c0 - 0x2a05
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x29c0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x29e4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g22);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2a10 - 0x2a35
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2a10
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s842retdec.c
// Address range: 0x2a40 - 0x2b6d
// Line range:    48 - 50
int32_t set_var(char g_5_l, int16_t g_24_l, int16_t g_28_l, int16_t g_30_l, int32_t g_47_l, char g_68_l, int16_t g_71_l, int32_t g_73_l, char g_110_l, int32_t g_121_l, int32_t g_135_l, int32_t g_136_l, int32_t g_149_l, char g_185_l, char g_195_l, int32_t g_198_l, int16_t g_199_l, int32_t g_218_l, int32_t g_219_l, int32_t g_233_l, char g_267_l) {
    // 0x2a40
    *(char *)&g2 = g_5_l;
    *(int16_t *)&g3 = g_24_l;
    *(int16_t *)&g4 = g_28_l;
    *(int16_t *)&g5 = g_30_l;
    g6 = g_47_l;
    *(char *)&g7 = g_68_l;
    *(int16_t *)&g8 = g_71_l;
    g9 = g_73_l;
    *(char *)&g10 = g_110_l;
    g11 = g_121_l;
    g12 = g_135_l;
    g13 = g_136_l;
    g14 = g_149_l;
    *(char *)&g24 = g_185_l;
    *(char *)&g15 = g_195_l;
    g16 = g_198_l;
    g17 = g_199_l;
    g18 = g_218_l;
    g19 = g_219_l;
    g20 = g_233_l;
    *(char *)&g21 = g_267_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b70 - 0x2bcd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2b70
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2bd0 - 0x2c10
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g22;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g25); // 0x2c05
    g22 = v1 / 256 ^ v2;
}

// Address range: 0x2c10 - 0x2c1d
int64_t _fini(void) {
    // 0x2c10
    int64_t result; // 0x2c10
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

