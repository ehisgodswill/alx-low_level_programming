
unsigned long f1(int arg1) {
    return (unsigned int)(arg1 ^ 59 & 63);
}

unsigned long f2(void * arg1, int arg2) {
    int i;
    int var_1;
    var_1 = 0;
    for (i = 0; i < arg2; i++) {
        var_1 += (int)*(arg1 + i)/*arg1[i]*/;
    }
    return (unsigned int)(var_1 ^ 79 & 63);
}

unsigned long f3(void * arg1, int arg2) {
    int i;
    int var_1;
    var_1 = 1;
    for (i = 0; i < arg2; i++) {
        var_1 *= (int)*(arg1 + i)/*arg1[i]*/;
    }
    return (unsigned int)(var_1 ^ 85 & 63);
}

unsigned long f4(char * arg1, int arg2) {
    int var_0;
    int var_1;
    void * var_2;
    var_0 = (int)*arg1;
    var_1 = var_0;
    var_0 = 0;
    for (var_0; var_0 < arg2; var_0++) {
        var_2 = arg1 + var_0;
        if ((int)*var_2 > var_1) {
            var_1 = (int)*var_2;
        }
    }
    srand(/* x */ var_1 ^ 14);
    return (unsigned int)(rand() & 63);
}

unsigned long f5(void * arg1, int arg2) {
    int i;
    int var_1;
    void * var_2;
    var_1 = 0;
    for (i = 0; i < arg2; i++) {
        var_2 = arg1 + i;
        var_1 += (int)*var_2 * (int)*var_2;
    }
    return (unsigned int)((char)var_1 ^ -17 & 63);
}

unsigned long f6(char arg1) {
    int i;
    int var_1;
    var_1 = 0;
    for (i = 0; (int)arg1 > i; i++) {
        var_1 = rand();
    }
    return (unsigned int)((char)var_1 ^ -27 & 63);
}

long segf() {
    *0UL = 0xffffffff;
    exit(/* __noreturn */ 1);
}

int main(int argc, char ** argv, char ** envp) {
    int var_0;
    unsigned long var_3;
    void * var_1;
    void * var_2;
    if (argc != 3) {
        segf();
    }
    else {
        var_1 = argv + 16L;
        var_3 = strlen(*var_1);
        if (var_3 != 6L) {
            segf();
        }
        else {
            var_2 = argv + 8L;
            argc = strlen(*var_2);
            var_0 = f1(argc);
            if (**var_1 != *(&0x3877445248432d41 + var_0)) {
                segf();
            }
            else {
                var_0 = f2(*var_2, argc);
                if (*(*var_1 + 1L) != *(&0x3877445248432d41 + var_0)) {
                    segf();
                }
                else {
                    var_0 = f3(*var_2, argc);
                    if (*(*var_1 + 2L) != *(&0x3877445248432d41 + var_0)) {
                        segf();
                    }
                    else {
                        var_0 = f4(*var_2, argc);
                        if (*(*var_1 + 3L) != *(&0x3877445248432d41 + var_0)) {
                            segf();
                        }
                        else {
                            argc = f5(*var_2, argc);
                            if (*(*var_1 + 4L) != *(&0x3877445248432d41 + argc)) {
                                segf();
                            }
                            else {
                                argc = f6(**var_2);
                                    puts(/* str */ "Congrats!");
                                if (*(*var_1 + 5L) == *(&0x3877445248432d41 + argc)) {
                                    return 1;
                                }
                                segf();
                            }
                        }
                    }
                }
            }
        }
    }
}