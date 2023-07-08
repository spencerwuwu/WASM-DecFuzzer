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
int32_t set_var(int32_t g_3_l, int32_t g_47_l, int32_t g_48_l, int32_t g_50_l, char g_51_l, int32_t g_72_l, int16_t g_73_l, int16_t g_97_l, int32_t g_109_l, int32_t g_130_l, int32_t g_142_l, int32_t g_159_l, char g_160_l, int32_t g_198_l, int32_t g_200_l, int32_t g_224_l, int32_t g_226_l, int16_t g_236_l, int32_t g_240_l, char g_269_l, int16_t g_295_l, int16_t g_299_l, int32_t g_304_l, int32_t g_306_l, char g_307_l, int32_t g_308_l, char g_311_l, int32_t g_351_l, int16_t g_369_l, int32_t g_386_l, int32_t g_389_l, int16_t g_392_l, int32_t g_395_l, char g_413_l, int32_t g_416_l, int16_t g_417_l, int32_t g_418_l, char g_419_l, char g_434_l, int32_t g_514_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x6fe0
int32_t g2 = 1; // 0x7020
int32_t g3 = -5; // 0x7024
int32_t g4 = 120; // 0x7028
int32_t g5 = 0x4141eda7; // 0x702c
int32_t g6 = 0x10004; // 0x7030
int32_t g7 = -0xffff; // 0x7032
int32_t g8 = -1; // 0x7034
int32_t g9 = 1; // 0x7038
int32_t g10 = 0x4fa1a2bb; // 0x703c
int32_t g11 = -1; // 0x7040
int32_t g12 = 83; // 0x7044
int32_t g13 = 0x516bf4f6; // 0x7048
int32_t g14 = -1; // 0x704c
int32_t g15 = 1; // 0x7050
int32_t g16 = 0x6804; // 0x7054
int32_t g17 = -1; // 0x7058
char g18 = 2; // 0x705c
int32_t g19 = -0x37f5ffff; // 0x705e
int16_t g20 = -0x37f6; // 0x7060
int32_t g21 = -0x727930fd; // 0x7064
int32_t g22 = 0xa2b921b; // 0x7068
int32_t g23 = 3; // 0x706c
int32_t g24 = -4; // 0x7070
char g25 = -16; // 0x7074
int32_t g26 = -1; // 0x7078
int32_t g27 = 0x5f07; // 0x707c
int32_t g28 = -9; // 0x7080
int16_t g29 = -1; // 0x7084
int32_t g30 = 5; // 0x7088
int32_t g31 = -3; // 0x708c
int16_t g32 = -450; // 0x7090
int32_t g33 = -0x3de265d5; // 0x7094
char g34 = 71; // 0x7098
int32_t g35 = 0x1000001; // 0x7099
int32_t g36 = 1; // 0x709c
int32_t g37 = -1; // 0x70a0
char g38 = 0; // 0x70b0
int32_t g39 = 0; // 0x70c0
int32_t g40 = 0; // 0x70c4
int32_t g41 = 0; // 0x70c8
int32_t g42 = 0; // 0x70cc
char g43 = 0; // 0x70d0
int32_t * g44 = NULL; // 0x70e0
int32_t g45;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x6fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g45;
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
    return 0x70a8;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g38 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x7018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g38 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s669retdec.c
// Address range: 0x1150 - 0x1549
// Line range:    424 - 473
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
    transparent_crc(g2, "g_3", v1);
    transparent_crc(g39, "g_47", v1);
    transparent_crc(g40, "g_48", v1);
    transparent_crc(g3, "g_50", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_51", v1);
    transparent_crc(g5, "g_72", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_73", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_97", v1);
    transparent_crc(g8, "g_109", v1);
    transparent_crc(g9, "g_130", v1);
    transparent_crc(g10, "g_142", v1);
    transparent_crc(g11, "g_159", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_160", v1);
    transparent_crc(g41, "g_198", v1);
    transparent_crc(g13, "g_200", v1);
    transparent_crc(g14, "g_224", v1);
    transparent_crc(g15, "g_226", v1);
    transparent_crc((int32_t)*(int16_t *)&g16, "g_236", v1);
    transparent_crc(g17, "g_240", v1);
    transparent_crc(0, "g_264", v1);
    transparent_crc((int32_t)g18, "g_269", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_295", v1);
    transparent_crc((int32_t)g20, "g_299", v1);
    transparent_crc(g21, "g_304", v1);
    transparent_crc(g22, "g_306", v1);
    transparent_crc((int32_t)*(char *)&g23, "g_307", v1);
    transparent_crc(g24, "g_308", v1);
    transparent_crc((int32_t)g25, "g_311", v1);
    transparent_crc(g26, "g_351", v1);
    transparent_crc((int32_t)*(int16_t *)&g27, "g_369", v1);
    transparent_crc(g28, "g_386", v1);
    transparent_crc(g42, "g_389", v1);
    transparent_crc((int32_t)g29, "g_392", v1);
    transparent_crc(g30, "g_395", v1);
    transparent_crc((int32_t)g43, "g_413", v1);
    transparent_crc(g31, "g_416", v1);
    transparent_crc((int32_t)g32, "g_417", v1);
    transparent_crc(g33, "g_418", v1);
    transparent_crc((int32_t)g34, "g_419", v1);
    transparent_crc((int32_t)*(char *)&g35, "g_434", v1);
    transparent_crc(g36, "g_514", v1);
    platform_main_end(-1 - *(int32_t *)0x70a0, v1);
    return (int32_t)&g45 ^ (int32_t)&g45;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1550 - 0x1556
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1550
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1560 - 0x15f5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15c9
        int32_t v2 = i; // 0x1560
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1596
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x15d4
        *(int32_t *)(4 * i + (int64_t)&g44) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s669retdec.c
// Address range: 0x1600 - 0x4a4c
// Line range:    78 - 417
int32_t func_1(void) {
    // 0x46be
    set_var(1, 0, 0, -5, 120, 0x4141eda7, 4, 1, 0, 1, 0x4fa1a2bb, 0, 83, 0, 0x516bf4f6, -1, 1, 0x6804, -1, 2, 1, -0x37f6, -0x727930fd, 0xa2b921b, 3, -4, -16, -1, 0x5f07, -9, 0, -1, 0, 0, -3, -450, -0x3de265d5, 71, 1, 1);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4a50 - 0x4a95
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4a50
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x4a74
        printf("...checksum after hashing %s : %X\n", vname, -1 - g37);
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x4aa0 - 0x4ac5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4aa0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s669retdec.c
// Address range: 0x4ad0 - 0x4d6e
// Line range:    68 - 70
int32_t set_var(int32_t g_3_l, int32_t g_47_l, int32_t g_48_l, int32_t g_50_l, char g_51_l, int32_t g_72_l, int16_t g_73_l, int16_t g_97_l, int32_t g_109_l, int32_t g_130_l, int32_t g_142_l, int32_t g_159_l, char g_160_l, int32_t g_198_l, int32_t g_200_l, int32_t g_224_l, int32_t g_226_l, int16_t g_236_l, int32_t g_240_l, char g_269_l, int16_t g_295_l, int16_t g_299_l, int32_t g_304_l, int32_t g_306_l, char g_307_l, int32_t g_308_l, char g_311_l, int32_t g_351_l, int16_t g_369_l, int32_t g_386_l, int32_t g_389_l, int16_t g_392_l, int32_t g_395_l, char g_413_l, int32_t g_416_l, int16_t g_417_l, int32_t g_418_l, char g_419_l, char g_434_l, int32_t g_514_l) {
    // 0x4ad0
    g2 = g_3_l;
    g39 = g_47_l;
    g40 = g_48_l;
    g3 = g_50_l;
    *(char *)&g4 = g_51_l;
    g5 = g_72_l;
    *(int16_t *)&g6 = g_73_l;
    *(int16_t *)&g7 = g_97_l;
    g8 = g_109_l;
    g9 = g_130_l;
    g10 = g_142_l;
    g11 = g_159_l;
    *(char *)&g12 = g_160_l;
    g41 = g_198_l;
    g13 = g_200_l;
    g14 = g_224_l;
    g15 = g_226_l;
    *(int16_t *)&g16 = g_236_l;
    g17 = g_240_l;
    g18 = g_269_l;
    *(int16_t *)&g19 = g_295_l;
    g20 = g_299_l;
    g21 = g_304_l;
    g22 = g_306_l;
    *(char *)&g23 = g_307_l;
    g24 = g_308_l;
    g25 = g_311_l;
    g26 = g_351_l;
    *(int16_t *)&g27 = g_369_l;
    g28 = g_386_l;
    g42 = g_389_l;
    g29 = g_392_l;
    g30 = g_395_l;
    g43 = g_413_l;
    g31 = g_416_l;
    g32 = g_417_l;
    g33 = g_418_l;
    g34 = g_419_l;
    *(char *)&g35 = g_434_l;
    g36 = g_514_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4d70 - 0x4dcd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x4d70
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4dd0 - 0x4e10
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g37;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g44); // 0x4e05
    g37 = v1 / 256 ^ v2;
}

// Address range: 0x4e10 - 0x4e1d
int64_t _fini(void) {
    // 0x4e10
    int64_t result; // 0x4e10
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

