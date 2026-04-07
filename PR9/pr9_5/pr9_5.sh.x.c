#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f pr9_5.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[5]))
	"\300\207\106\347\272\120\325\073\342\202\344\362\337\345\162\344"
	"\245\207\105\321\065\370\225\060\011\236\075\303\057"
#define      chk2_z	19
#define      chk2	((&data[33]))
	"\227\234\311\275\214\032\344\063\313\133\112\054\102\231\020\261"
	"\251\217\331\211\115\332\030\235\316"
#define      xecc_z	15
#define      xecc	((&data[55]))
	"\250\056\332\244\074\263\136\020\121\302\345\241\335\272\040\152"
	"\023\263\355"
#define      rlax_z	1
#define      rlax	((&data[73]))
	"\232"
#define      lsto_z	1
#define      lsto	((&data[74]))
	"\253"
#define      chk1_z	22
#define      chk1	((&data[77]))
	"\341\302\106\267\316\136\243\305\060\012\316\173\261\262\162\225"
	"\311\174\107\171\177\374\233\313"
#define      pswd_z	256
#define      pswd	((&data[138]))
	"\055\227\137\271\057\373\202\354\230\120\116\352\050\366\375\334"
	"\343\255\041\270\043\065\015\175\262\043\136\165\041\373\372\116"
	"\223\131\007\302\125\211\256\362\046\362\005\002\266\176\113\170"
	"\246\071\264\236\021\031\302\075\373\274\150\226\100\366\012\123"
	"\064\256\333\173\020\206\156\067\171\163\071\057\362\205\250\230"
	"\276\135\066\317\166\371\015\162\265\166\010\365\154\023\111\241"
	"\302\045\035\323\254\213\012\045\377\104\125\361\311\376\212\210"
	"\133\301\130\322\272\145\104\157\333\115\145\110\141\257\351\044"
	"\325\007\367\201\222\002\247\221\106\375\203\017\374\015\227\130"
	"\317\357\052\211\125\157\371\060\275\137\171\036\017\143\102\344"
	"\152\072\146\374\074\016\216\202\014\021\222\010\037\052\141\356"
	"\031\214\170\157\373\162\240\271\321\031\330\340\174\033\305\346"
	"\125\054\343\221\073\161\024\107\203\246\120\243\320\262\222\352"
	"\076\012\132\072\174\372\363\116\023\314\057\220\347\365\166\074"
	"\041\132\316\135\314\342\244\117\211\365\363\132\247\205\105\346"
	"\220\237\040\014\231\024\133\254\340\212\075\307\177\263\004\241"
	"\015\322\376\332\265\243\052\076\230\035\230\100\243\335\046\063"
	"\174\107\100\026\134\233\303\075\045\000\005\245\264\011\106\302"
	"\333\104\234\221\347\306\317\356\332\374\330\003\363\326\337\327"
	"\203\001\220\246\067\235\043\351\301\202\136\342\175\131\060\020"
	"\263\067\322\010\300\201\367\233"
#define      msg2_z	19
#define      msg2	((&data[431]))
	"\161\246\176\111\161\157\323\165\355\100\070\044\016\330\353\355"
	"\222\345\275\303\160\117\230\051\177\331"
#define      text_z	1347
#define      text	((&data[693]))
	"\363\240\067\166\377\031\363\130\112\004\014\201\327\025\102\130"
	"\014\335\326\334\174\107\202\372\221\254\171\152\174\060\341\160"
	"\320\030\346\320\062\331\050\175\336\064\376\265\111\101\015\126"
	"\037\344\062\233\054\265\225\275\142\017\047\336\100\010\116\021"
	"\041\064\341\124\016\012\321\354\077\320\241\210\021\257\337\060"
	"\223\022\313\277\307\141\175\052\161\244\010\262\255\127\303\316"
	"\213\245\042\232\257\364\206\356\304\050\167\325\330\126\005\153"
	"\151\321\053\061\063\250\133\244\115\143\127\372\272\032\311\106"
	"\277\354\340\157\340\146\136\244\217\325\172\147\054\200\323\225"
	"\122\376\306\205\247\041\052\364\205\201\357\100\234\270\206\134"
	"\244\146\313\205\315\051\052\134\377\244\303\054\044\227\302\166"
	"\225\211\374\075\253\046\062\060\247\041\160\103\332\366\237\177"
	"\135\153\004\052\224\056\207\224\322\113\300\367\342\203\156\170"
	"\014\152\265\267\220\347\347\070\011\130\174\343\117\033\142\254"
	"\207\147\326\034\225\136\260\150\251\161\140\213\364\316\003\001"
	"\276\174\235\263\064\176\030\322\064\200\055\025\200\361\034\321"
	"\136\036\074\066\110\064\177\117\144\122\130\107\146\120\010\255"
	"\020\250\334\027\353\121\155\041\031\354\365\130\164\127\375\070"
	"\311\104\005\265\266\235\041\306\131\347\261\314\167\216\377\063"
	"\242\377\240\374\034\117\042\161\334\221\050\161\334\274\165\133"
	"\144\256\123\047\017\057\177\270\026\321\137\116\057\373\351\072"
	"\070\352\214\015\300\263\153\327\204\326\214\110\130\312\007\012"
	"\372\212\134\261\025\067\274\177\311\011\303\327\117\366\342\375"
	"\055\111\164\227\074\205\005\107\344\320\247\266\077\104\336\357"
	"\014\021\000\072\346\320\237\261\377\154\253\144\354\024\020\373"
	"\220\043\062\203\176\273\212\334\315\112\343\117\360\263\210\326"
	"\343\047\226\236\003\134\246\264\055\277\367\063\276\163\247\322"
	"\107\142\240\070\302\272\067\060\260\332\065\233\230\041\017\300"
	"\272\161\020\301\375\071\123\337\235\160\274\342\050\210\036\176"
	"\002\277\245\271\004\210\273\131\261\201\212\002\240\174\063\203"
	"\257\026\244\060\043\055\243\170\035\117\302\316\060\175\315\053"
	"\207\243\111\207\117\340\224\146\262\374\142\357\134\060\030\055"
	"\024\015\010\202\075\243\015\042\112\361\111\306\032\355\241\275"
	"\110\051\102\157\276\361\157\241\055\141\275\042\233\022\124\313"
	"\272\373\076\124\366\247\123\315\376\354\070\072\053\134\156\317"
	"\076\341\305\207\055\025\054\251\036\330\116\265\062\035\325\170"
	"\226\077\153\244\262\003\250\352\122\131\315\260\203\264\013\020"
	"\272\241\201\034\155\120\012\257\105\123\257\243\225\317\116\365"
	"\355\275\121\214\251\227\327\060\070\362\245\350\224\257\221\134"
	"\123\325\052\127\300\241\275\335\042\176\372\112\342\266\010\341"
	"\122\175\165\047\221\125\055\141\077\016\074\034\077\240\071\265"
	"\033\206\244\117\272\160\162\047\350\054\167\153\030\251\253\304"
	"\234\211\177\276\360\364\225\240\330\303\171\227\060\245\300\070"
	"\204\061\306\036\221\241\160\334\277\133\367\013\050\023\254\025"
	"\346\016\026\073\354\043\335\214\124\274\366\364\362\215\171\127"
	"\376\035\114\371\370\012\244\006\057\061\076\223\306\364\037\206"
	"\260\374\260\121\365\151\033\320\276\175\100\052\246\054\317\025"
	"\135\203\034\037\240\032\127\317\217\210\050\230\077\107\126\005"
	"\373\155\217\050\065\162\020\350\320\255\075\302\070\037\332\114"
	"\377\101\064\352\000\345\050\202\172\241\366\120\025\337\126\207"
	"\300\375\364\305\103\132\352\257\101\341\132\036\341\357\067\334"
	"\155\076\331\002\200\263\315\324\272\013\360\243\104\314\164\336"
	"\041\274\130\103\235\115\055\373\020\233\034\101\335\307\326\067"
	"\170\041\315\253\047\045\336\370\302\306\212\027\321\120\111\322"
	"\367\047\326\354\064\141\023\007\343\176\357\014\177\365\024\325"
	"\103\016\220\340\246\215\352\275\020\371\174\063\330\314\037\072"
	"\250\271\322\315\176\333\335\325\205\267\005\126\373\020\010\177"
	"\372\153\344\210\165\142\355\010\062\042\125\053\176\165\323\353"
	"\003\055\306\245\114\223\172\351\117\112\300\002\275\347\021\227"
	"\365\235\110\055\142\072\302\337\164\123\042\006\200\167\225\357"
	"\266\314\216\034\035\316\257\043\154\105\240\167\010\013\223\076"
	"\110\330\201\154\244\371\024\217\057\154\345\111\021\005\301\357"
	"\103\052\267\356\134\210\177\032\260\223\023\334\012\251\160\004"
	"\205\052\355\361\114\176\215\175\215\145\051\163\073\045\033\022"
	"\103\054\221\246\032\123\362\117\150\045\236\252\332\247\276\377"
	"\065\076\070\232\117\246\357\214\157\341\037\365\127\032\207\012"
	"\013\123\332\027\311\351\317\206\067\114\050\214\017\064\240\275"
	"\252\015\166\022\343\106\253\172\143\212\363\102\177\072\023\021"
	"\210\302\067\201\076\076\327\342\016\264\041\373\070\237\011\036"
	"\124\032\204\366\303\030\270\121\247\173\073\311\003\323\154\012"
	"\334\134\340\025\064\202\165\001\213\074\206\113\364\306\376\135"
	"\174\124\222\137\321\206\124\240\234\353\166\041\363\025\155\123"
	"\051\301\333\125\026\040\301\244\206\276\204\053\367\240\030\171"
	"\254\227\136\075\340\224\075\337\306\054\126\025\117\027\226\144"
	"\037\074\053\257\066\120\024\350\221\022\353\024\366\017\216\122"
	"\211\142\233\137\201\065\132\060\100\220\172\153\125\153\314\062"
	"\307\126\334\256\026\275\332\343\010\070\321\152\226\163\131\357"
	"\124\121\320\162\170\271\164\357\325\143\363\240\030\244\250\035"
	"\306\206\165\222\103\041\221\240\231\063\362\060\112\265\044\155"
	"\062\214\077\055\267\161\104\033\063\115\306\266\006\150\117\011"
	"\347\250\113\023\164\116\342\263\267\114\367\321\005\300\211\234"
	"\232\360\232\220\211\330\125\354\357\361\371\037\221\241\102\103"
	"\242\152\327\215\203\063\102\111\243\034\103\047\274\370\330\166"
	"\101\136\071\007\304\245\147\117\342\175\350\204\061\273\216\253"
	"\371\150\117\371\110\204\100\166\144\074\131\305\072\275\332\127"
	"\114\135\314\376\052\276\123\202\343\027\220\140\246\332\360\224"
	"\336\327\332\042\231\011\233\117\303\043\166\134\055\207\075\044"
	"\365\265\304\132\263\023\320\160\317\310\264\201\307\124\072\162"
	"\201\221\171\356\362\227\200\272\072\166\027\043\331\115\236\205"
	"\254\073\163\144\023\032\250\054\005\317\002\041\133\200\261\321"
	"\246\215\340\341\076\333\106\352\372\217\261\113\167\030\302\001"
	"\163\264\154\200\066\123\043\000\214\256\343\202\012\224\131\275"
	"\272\046\310\336\266\263\044\117\024\265\303\101\062\141\357\207"
	"\007\001\207\327\265\127\050\342\372\336\277\017\145\003\007\301"
	"\371\052\226\121\274\165\077\155\323\000\100\226\356\162\063\301"
	"\142\155\211\351\317\022\023\104\211\125\125\133\120\152\030\006"
	"\337\003\026\020\357\165\226\040\304\223\344\364\037\015\252\327"
	"\025\354\103\240\006\030\253\335\203\025\175\122\135\160\130\042"
	"\073\164\305\225\005\200\305\012\103\370\337\240\266\345\115\027"
	"\050\221\020\071\271\270\312\240\240\002\251\370\177\215\107\233"
	"\360\364\042\130\313\076\355\051\357\126\322\140\266\136\125\204"
	"\142\126\276\033\017\210\273\257\213\145\250\012\363\357\245\344"
	"\343\307\074\256\005\052\330\364\200\253\125\066\011\253\273\153"
	"\002\171\207\021\001\103\301\214\251\151\226\234\131\073\201\074"
	"\003\275\353\011\347\304\375\150\157\123\236\170\376\131\344\000"
	"\323\153\022\324\256\323\141\127\074\370\364\225\064\166\322\067"
	"\063\276\100\033\202\076\203\361\221\042\152\220\174\117\221\117"
	"\272\243\044\151\167\205\301\263\175\266\111\262\054\034\351\140"
	"\332\052\173\135\150\377\117\372\042\272\212\236\011\034\356"
#define      opts_z	1
#define      opts	((&data[2196]))
	"\264"
#define      date_z	1
#define      date	((&data[2197]))
	"\254"
#define      msg1_z	65
#define      msg1	((&data[2213]))
	"\246\064\310\322\120\261\062\053\334\256\210\104\256\330\077\073"
	"\067\041\116\112\105\073\217\161\232\337\244\250\076\140\206\367"
	"\212\050\212\250\305\010\077\121\007\050\146\044\030\332\126\346"
	"\343\172\202\160\121\014\017\103\004\153\235\364\343\110\372\126"
	"\170\310\013\021\134\243\146\145\153\313\210\023\175\165\127\117"
	"\320"
#define      tst2_z	19
#define      tst2	((&data[2282]))
	"\233\346\135\216\156\246\244\152\267\243\257\167\377\215\054\353"
	"\376\345\027\353\050\223\140\246"
#define      shll_z	10
#define      shll	((&data[2304]))
	"\010\111\260\377\227\274\016\171\042\354\202\176\310"
#define      inlo_z	3
#define      inlo	((&data[2316]))
	"\001\137\371"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
