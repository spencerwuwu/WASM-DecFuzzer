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
int32_t set_var(char g_19_l, int16_t g_30_l, char g_31_l, int32_t g_32_l, char g_33_l, int32_t g_38_l, int32_t g_46_l, char g_111_l, int32_t g_151_l, int32_t g_157_l, char g_178_l, int16_t g_196_l, int32_t g_198_l, char g_221_l, int32_t g_258_l, int16_t g_259_l, int32_t g_260_l, int32_t g_266_l, char g_272_l, int16_t g_294_l, int32_t g_296_l, int16_t g_314_l, int32_t g_315_l, int32_t g_325_l, int16_t g_340_l, char g_361_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0; // 0x32aa
int64_t g2 = 0; // 0x4fe0
int32_t g3 = -0x2f0bffc6; // 0x5020
int32_t g4 = 0x9d0f4; // 0x5022
int32_t g5 = 9; // 0x5024
int32_t g6 = 0x5132d7af; // 0x5028
int32_t g7 = 202; // 0x502c
int32_t g8 = 5; // 0x5030
int32_t g9 = -0x7216fa1; // 0x5034
int32_t g10 = 255; // 0x5038
int32_t g11 = -0x623126e2; // 0x503c
int32_t g12 = 0x32aa; // 0x5040
int32_t g13 = 8; // 0x5044
char g14 = -1; // 0x5048
int32_t g15 = -0x178d2d3e; // 0x504a
int32_t g16 = -0x38c5178e; // 0x504c
int32_t g17 = -10; // 0x5050
int32_t g18 = -0x5a2ff01; // 0x5054
int32_t g19 = -0x505a3; // 0x5056
int32_t g20 = -6; // 0x5058
int32_t g21 = 1; // 0x505c
int32_t g22 = 0x1939d09d; // 0x5060
int32_t g23 = -1; // 0x5064
int32_t g24 = 0xfc4d; // 0x5068
int32_t g25 = -1; // 0x506c
int64_t g26 = 0; // 0x5070
int32_t g27 = 0; // 0x5080
int32_t g28 = 0; // 0x5084
int32_t g29 = 0; // 0x5088
char g30 = 0; // 0x508c
int32_t * g31 = NULL; // 0x5090
int32_t g32;

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
        result = &g32;
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
    return &g26;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g26 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g2 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x5018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g26 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s844r2.c
// Address range: 0x1150 - 0x1431
// Line range:    298 - 334
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
    transparent_crc(*(int32_t *)0x30d8, "g_10", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_19", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_30", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_31", v1);
    transparent_crc(g6, "g_32", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_33", v1);
    transparent_crc(g8, "g_38", v1);
    transparent_crc(g9, "g_46", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_111", v1);
    transparent_crc(g27, "g_151", v1);
    transparent_crc(g11, "g_157", v1);
    transparent_crc((int32_t)*(char *)&g28, "g_178", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_196", v1);
    transparent_crc(g13, "g_198", v1);
    transparent_crc((int32_t)g14, "g_221", v1);
    transparent_crc((int32_t)*(int16_t *)0x30dc, "g_233", v1);
    transparent_crc(g29, "g_258", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_259", v1);
    transparent_crc(g16, "g_260", v1);
    transparent_crc(g17, "g_266", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_272", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_294", v1);
    transparent_crc(g20, "g_296", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_314", v1);
    transparent_crc(g22, "g_315", v1);
    transparent_crc(g23, "g_325", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_340", v1);
    transparent_crc((int32_t)g30, "g_361", v1);
    platform_main_end(-1 - *(int32_t *)0x506c, v1);
    return (int32_t)&g32 ^ (int32_t)&g32;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1440 - 0x1446
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1440
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1450 - 0x14e5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14b9
        int32_t v2 = i; // 0x1450
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1486
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14c4
        *(int32_t *)(4 * i + (int64_t)&g31) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s844r2.c
// Address range: 0x14f0 - 0x2c24
// Line range:    65 - 291
char func_1(void) {
    // 0x14f0
    set_var(1, 0, 58, 0, -11, -1, 0, 1, 0, -0x623126e2, 0, (int16_t)&g1, 8, -1, 0, -0x2d3e, -0x38c5178e, -10, -1, -1443, -6, 1, 0x1939d09d, -1, -947, 0);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2c30 - 0x2c75
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2c30
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2c54
        printf("...checksum after hashing %s : %X\n", vname, -1 - g25);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2c80 - 0x2ca5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2c80
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s844r2.c
// Address range: 0x2cb0 - 0x2e3f
// Line range:    55 - 57
int32_t set_var(char g_19_l, int16_t g_30_l, char g_31_l, int32_t g_32_l, char g_33_l, int32_t g_38_l, int32_t g_46_l, char g_111_l, int32_t g_151_l, int32_t g_157_l, char g_178_l, int16_t g_196_l, int32_t g_198_l, char g_221_l, int32_t g_258_l, int16_t g_259_l, int32_t g_260_l, int32_t g_266_l, char g_272_l, int16_t g_294_l, int32_t g_296_l, int16_t g_314_l, int32_t g_315_l, int32_t g_325_l, int16_t g_340_l, char g_361_l) {
    // 0x2cb0
    *(char *)&g3 = g_19_l;
    *(int16_t *)&g4 = g_30_l;
    *(char *)&g5 = g_31_l;
    g6 = g_32_l;
    *(char *)&g7 = g_33_l;
    g8 = g_38_l;
    g9 = g_46_l;
    *(char *)&g10 = g_111_l;
    g27 = g_151_l;
    g11 = g_157_l;
    *(char *)&g28 = g_178_l;
    *(int16_t *)&g12 = g_196_l;
    g13 = g_198_l;
    g14 = g_221_l;
    g29 = g_258_l;
    *(int16_t *)&g15 = g_259_l;
    g16 = g_260_l;
    g17 = g_266_l;
    *(char *)&g18 = g_272_l;
    *(int16_t *)&g19 = g_294_l;
    g20 = g_296_l;
    *(int16_t *)&g21 = g_314_l;
    g22 = g_315_l;
    g23 = g_325_l;
    *(int16_t *)&g24 = g_340_l;
    g30 = g_361_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e40 - 0x2e9d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2e40
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ea0 - 0x2ee0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g25;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g31); // 0x2ed5
    g25 = v1 / 256 ^ v2;
}

// Address range: 0x2ee0 - 0x2eed
int64_t _fini(void) {
    // 0x2ee0
    int64_t result; // 0x2ee0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

