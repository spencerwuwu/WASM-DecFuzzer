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
int32_t set_var(int32_t g_4_l, char g_5_l, int32_t g_16_l, int32_t g_22_l, int32_t g_58_l, int32_t g_107_l, int16_t g_124_l, int16_t g_133_l, int16_t g_134_l, int16_t g_139_l, int16_t g_147_l, int32_t g_149_l, char g_161_l, int16_t g_169_l, char g_179_l, int32_t g_181_l, int32_t g_226_l, int16_t g_227_l, int32_t g_251_l, int32_t g_260_l, int32_t g_262_l, int32_t g_303_l, int32_t g_304_l, char g_314_l, int16_t g_333_l, int32_t g_351_l, int16_t g_383_l, int32_t g_453_l, int16_t g_474_l, int32_t g_475_l, int16_t g_505_l, char g_532_l, int16_t g_561_l, int32_t g_580_l, int16_t g_603_l, int16_t g_660_l, int32_t g_690_l, int32_t g_692_l, char g_711_l, char g_716_l, char g_717_l, char g_813_l, char g_835_l, int32_t g_839_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x8fe0
int32_t g2 = -0x68900aa2; // 0x9020
int32_t g3 = 97; // 0x9024
int32_t g4 = 0x2bfbd3ae; // 0x9028
int32_t g5 = 1; // 0x902c
int32_t g6 = -1; // 0x9030
int32_t g7 = 0x63d30008; // 0x9034
int32_t g8 = 0x3ef363d3; // 0x9036
int32_t g9 = 0x13ef3; // 0x9038
int32_t g10 = 0x10001; // 0x903a
int32_t g11 = 1; // 0x903c
int32_t g12 = 6; // 0x9040
char g13 = 4; // 0x9044
int16_t g14 = -9; // 0x9046
char g15 = 1; // 0x9048
int32_t g16 = 0x49c8f8d3; // 0x904c
int32_t g17 = -1; // 0x9050
int32_t g18 = 0x8969; // 0x9054
int32_t g19 = -2; // 0x9058
int32_t g20 = 0x16420d86; // 0x905c
int32_t g21 = 1; // 0x9060
int32_t g22 = 6; // 0x9064
int32_t g23 = -1; // 0x9068
int32_t g24 = 130; // 0x906c
int32_t g25 = -0x3082344f; // 0x9070
int32_t g26 = 0xa5c2; // 0x9074
int32_t g27 = 1; // 0x9078
int16_t g28 = 0x19f0; // 0x907c
int32_t g29 = -10; // 0x9080
int32_t g30 = 0xff33fa; // 0x9084
int32_t g31 = -0x7ff01; // 0x9086
int32_t g32 = -8; // 0x9088
int32_t g33 = 0x259c0001; // 0x908c
int32_t g34 = 0x4a38259c; // 0x908e
int32_t g35 = 0x19544a38; // 0x9090
int32_t g36 = 0x3d7a9d88; // 0x9094
int32_t g37 = 0xfb011b; // 0x9098
int32_t g38 = -0x41ff04ff; // 0x9099
int32_t g39 = 0x6bbe00fb; // 0x909a
int32_t g40 = -0x7f3b9442; // 0x909c
int32_t g41 = -1; // 0x90a0
char g42 = 0; // 0x90b0
int32_t g43 = 0; // 0x90c0
int32_t g44 = 0; // 0x90c4
int32_t g45 = 0; // 0x90c6
char g46 = 0; // 0x90c8
int32_t g47 = 0; // 0x90c9
int32_t * g48 = NULL; // 0x90d0
int32_t g49;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x8fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g49;
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
    return 0x90a8;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g42 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x9018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g42 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s342retdec.c
// Address range: 0x1150 - 0x158f
// Line range:    625 - 677
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
    transparent_crc(g2, "g_4", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_5", v1);
    transparent_crc(g4, "g_16", v1);
    transparent_crc(g43, "g_22", v1);
    transparent_crc(g5, "g_58", v1);
    transparent_crc(g6, "g_107", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_124", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_133", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_134", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_139", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_147", v1);
    transparent_crc(g12, "g_149", v1);
    transparent_crc((int32_t)g13, "g_161", v1);
    transparent_crc((int32_t)g14, "g_169", v1);
    transparent_crc((int32_t)g15, "g_179", v1);
    transparent_crc(g16, "g_181", v1);
    transparent_crc(g17, "g_226", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_227", v1);
    transparent_crc(g19, "g_251", v1);
    transparent_crc(g20, "g_260", v1);
    transparent_crc(g21, "g_262", v1);
    transparent_crc(g22, "g_303", v1);
    transparent_crc(g23, "g_304", v1);
    transparent_crc((int32_t)*(char *)&g24, "g_314", v1);
    transparent_crc((int32_t)*(int16_t *)&g44, "g_333", v1);
    transparent_crc(g25, "g_351", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_383", v1);
    transparent_crc(g27, "g_453", v1);
    transparent_crc((int32_t)g28, "g_474", v1);
    transparent_crc(g29, "g_475", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_505", v1);
    transparent_crc((int32_t)*(char *)&g31, "g_532", v1);
    transparent_crc((int32_t)*(int16_t *)&g45, "g_561", v1);
    transparent_crc(g32, "g_580", v1);
    transparent_crc((int32_t)*(int16_t *)&g33, "g_603", v1);
    transparent_crc((int32_t)*(int16_t *)&g34, "g_660", v1);
    transparent_crc(g35, "g_690", v1);
    transparent_crc(g36, "g_692", v1);
    transparent_crc((int32_t)g46, "g_711", v1);
    transparent_crc((int32_t)*(char *)&g47, "g_716", v1);
    transparent_crc((int32_t)*(char *)&g37, "g_717", v1);
    transparent_crc((int32_t)*(char *)&g38, "g_813", v1);
    transparent_crc((int32_t)*(char *)&g39, "g_835", v1);
    transparent_crc(g40, "g_839", v1);
    platform_main_end(-1 - *(int32_t *)0x90a0, v1);
    return (int32_t)&g49 ^ (int32_t)&g49;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1590 - 0x1596
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1590
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15a0 - 0x1635
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1609
        int32_t v2 = i; // 0x15a0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x15d6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1614
        *(int32_t *)(4 * i + (int64_t)&g48) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s342retdec.c
// Address range: 0x1640 - 0x5ce6
// Line range:    81 - 618
char func_1(void) {
    // 0x1640
    set_var(-0x68900aa2, 97, 2277, 2277, 1, -1, 8, 0x63d3, 0x3ef3, 1, 1, 6, 4, -9, 1, 0x49c8f8d3, -1, -0x7697, -2, 0x16420d86, 1, 6, -1, -126, 0, -0x3082344f, -0x5a3e, 1, 0x19f0, -10, 0x33fa, -1, 0, -8, 1, 0x259c, 0x19544a38, 0x3d7a9d88, 0, 0, 27, 1, -5, -0x7f3b9442);
    return -62;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x5cf0 - 0x5d35
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x5cf0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x5d14
        printf("...checksum after hashing %s : %X\n", vname, -1 - g41);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x5d40 - 0x5d65
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x5d40
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s342retdec.c
// Address range: 0x5d70 - 0x6050
// Line range:    71 - 73
int32_t set_var(int32_t g_4_l, char g_5_l, int32_t g_16_l, int32_t g_22_l, int32_t g_58_l, int32_t g_107_l, int16_t g_124_l, int16_t g_133_l, int16_t g_134_l, int16_t g_139_l, int16_t g_147_l, int32_t g_149_l, char g_161_l, int16_t g_169_l, char g_179_l, int32_t g_181_l, int32_t g_226_l, int16_t g_227_l, int32_t g_251_l, int32_t g_260_l, int32_t g_262_l, int32_t g_303_l, int32_t g_304_l, char g_314_l, int16_t g_333_l, int32_t g_351_l, int16_t g_383_l, int32_t g_453_l, int16_t g_474_l, int32_t g_475_l, int16_t g_505_l, char g_532_l, int16_t g_561_l, int32_t g_580_l, int16_t g_603_l, int16_t g_660_l, int32_t g_690_l, int32_t g_692_l, char g_711_l, char g_716_l, char g_717_l, char g_813_l, char g_835_l, int32_t g_839_l) {
    // 0x5d70
    g2 = g_4_l;
    *(char *)&g3 = g_5_l;
    g4 = g_16_l;
    g43 = g_22_l;
    g5 = g_58_l;
    g6 = g_107_l;
    *(int16_t *)&g7 = g_124_l;
    *(int16_t *)&g8 = g_133_l;
    *(int16_t *)&g9 = g_134_l;
    *(int16_t *)&g10 = g_139_l;
    *(int16_t *)&g11 = g_147_l;
    g12 = g_149_l;
    g13 = g_161_l;
    g14 = g_169_l;
    g15 = g_179_l;
    g16 = g_181_l;
    g17 = g_226_l;
    *(int16_t *)&g18 = g_227_l;
    g19 = g_251_l;
    g20 = g_260_l;
    g21 = g_262_l;
    g22 = g_303_l;
    g23 = g_304_l;
    *(char *)&g24 = g_314_l;
    *(int16_t *)&g44 = g_333_l;
    g25 = g_351_l;
    *(int16_t *)&g26 = g_383_l;
    g27 = g_453_l;
    g28 = g_474_l;
    g29 = g_475_l;
    *(int16_t *)&g30 = g_505_l;
    *(char *)&g31 = g_532_l;
    *(int16_t *)&g45 = g_561_l;
    g32 = g_580_l;
    *(int16_t *)&g33 = g_603_l;
    *(int16_t *)&g34 = g_660_l;
    g35 = g_690_l;
    g36 = g_692_l;
    g46 = g_711_l;
    *(char *)&g47 = g_716_l;
    *(char *)&g37 = g_717_l;
    *(char *)&g38 = g_813_l;
    *(char *)&g39 = g_835_l;
    g40 = g_839_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6050 - 0x60ad
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x6050
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x60b0 - 0x60f0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g41;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g48); // 0x60e5
    g41 = v1 / 256 ^ v2;
}

// Address range: 0x60f0 - 0x60fd
int64_t _fini(void) {
    // 0x60f0
    int64_t result; // 0x60f0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

