
bomb:     file format elf64-x86-64


Disassembly of section .init:

0000000000002000 <_init>:
    2000:	f3 0f 1e fa          	endbr64 
    2004:	48 83 ec 08          	sub    $0x8,%rsp
    2008:	48 8b 05 d9 5f 00 00 	mov    0x5fd9(%rip),%rax        # 7fe8 <__gmon_start__>
    200f:	48 85 c0             	test   %rax,%rax
    2012:	74 02                	je     2016 <_init+0x16>
    2014:	ff d0                	call   *%rax
    2016:	48 83 c4 08          	add    $0x8,%rsp
    201a:	c3                   	ret    

Disassembly of section .plt:

0000000000002020 <.plt>:
    2020:	ff 35 b2 5e 00 00    	push   0x5eb2(%rip)        # 7ed8 <_GLOBAL_OFFSET_TABLE_+0x8>
    2026:	f2 ff 25 b3 5e 00 00 	bnd jmp *0x5eb3(%rip)        # 7ee0 <_GLOBAL_OFFSET_TABLE_+0x10>
    202d:	0f 1f 00             	nopl   (%rax)
    2030:	f3 0f 1e fa          	endbr64 
    2034:	68 00 00 00 00       	push   $0x0
    2039:	f2 e9 e1 ff ff ff    	bnd jmp 2020 <.plt>
    203f:	90                   	nop
    2040:	f3 0f 1e fa          	endbr64 
    2044:	68 01 00 00 00       	push   $0x1
    2049:	f2 e9 d1 ff ff ff    	bnd jmp 2020 <.plt>
    204f:	90                   	nop
    2050:	f3 0f 1e fa          	endbr64 
    2054:	68 02 00 00 00       	push   $0x2
    2059:	f2 e9 c1 ff ff ff    	bnd jmp 2020 <.plt>
    205f:	90                   	nop
    2060:	f3 0f 1e fa          	endbr64 
    2064:	68 03 00 00 00       	push   $0x3
    2069:	f2 e9 b1 ff ff ff    	bnd jmp 2020 <.plt>
    206f:	90                   	nop
    2070:	f3 0f 1e fa          	endbr64 
    2074:	68 04 00 00 00       	push   $0x4
    2079:	f2 e9 a1 ff ff ff    	bnd jmp 2020 <.plt>
    207f:	90                   	nop
    2080:	f3 0f 1e fa          	endbr64 
    2084:	68 05 00 00 00       	push   $0x5
    2089:	f2 e9 91 ff ff ff    	bnd jmp 2020 <.plt>
    208f:	90                   	nop
    2090:	f3 0f 1e fa          	endbr64 
    2094:	68 06 00 00 00       	push   $0x6
    2099:	f2 e9 81 ff ff ff    	bnd jmp 2020 <.plt>
    209f:	90                   	nop
    20a0:	f3 0f 1e fa          	endbr64 
    20a4:	68 07 00 00 00       	push   $0x7
    20a9:	f2 e9 71 ff ff ff    	bnd jmp 2020 <.plt>
    20af:	90                   	nop
    20b0:	f3 0f 1e fa          	endbr64 
    20b4:	68 08 00 00 00       	push   $0x8
    20b9:	f2 e9 61 ff ff ff    	bnd jmp 2020 <.plt>
    20bf:	90                   	nop
    20c0:	f3 0f 1e fa          	endbr64 
    20c4:	68 09 00 00 00       	push   $0x9
    20c9:	f2 e9 51 ff ff ff    	bnd jmp 2020 <.plt>
    20cf:	90                   	nop
    20d0:	f3 0f 1e fa          	endbr64 
    20d4:	68 0a 00 00 00       	push   $0xa
    20d9:	f2 e9 41 ff ff ff    	bnd jmp 2020 <.plt>
    20df:	90                   	nop
    20e0:	f3 0f 1e fa          	endbr64 
    20e4:	68 0b 00 00 00       	push   $0xb
    20e9:	f2 e9 31 ff ff ff    	bnd jmp 2020 <.plt>
    20ef:	90                   	nop
    20f0:	f3 0f 1e fa          	endbr64 
    20f4:	68 0c 00 00 00       	push   $0xc
    20f9:	f2 e9 21 ff ff ff    	bnd jmp 2020 <.plt>
    20ff:	90                   	nop
    2100:	f3 0f 1e fa          	endbr64 
    2104:	68 0d 00 00 00       	push   $0xd
    2109:	f2 e9 11 ff ff ff    	bnd jmp 2020 <.plt>
    210f:	90                   	nop
    2110:	f3 0f 1e fa          	endbr64 
    2114:	68 0e 00 00 00       	push   $0xe
    2119:	f2 e9 01 ff ff ff    	bnd jmp 2020 <.plt>
    211f:	90                   	nop
    2120:	f3 0f 1e fa          	endbr64 
    2124:	68 0f 00 00 00       	push   $0xf
    2129:	f2 e9 f1 fe ff ff    	bnd jmp 2020 <.plt>
    212f:	90                   	nop
    2130:	f3 0f 1e fa          	endbr64 
    2134:	68 10 00 00 00       	push   $0x10
    2139:	f2 e9 e1 fe ff ff    	bnd jmp 2020 <.plt>
    213f:	90                   	nop
    2140:	f3 0f 1e fa          	endbr64 
    2144:	68 11 00 00 00       	push   $0x11
    2149:	f2 e9 d1 fe ff ff    	bnd jmp 2020 <.plt>
    214f:	90                   	nop
    2150:	f3 0f 1e fa          	endbr64 
    2154:	68 12 00 00 00       	push   $0x12
    2159:	f2 e9 c1 fe ff ff    	bnd jmp 2020 <.plt>
    215f:	90                   	nop
    2160:	f3 0f 1e fa          	endbr64 
    2164:	68 13 00 00 00       	push   $0x13
    2169:	f2 e9 b1 fe ff ff    	bnd jmp 2020 <.plt>
    216f:	90                   	nop
    2170:	f3 0f 1e fa          	endbr64 
    2174:	68 14 00 00 00       	push   $0x14
    2179:	f2 e9 a1 fe ff ff    	bnd jmp 2020 <.plt>
    217f:	90                   	nop
    2180:	f3 0f 1e fa          	endbr64 
    2184:	68 15 00 00 00       	push   $0x15
    2189:	f2 e9 91 fe ff ff    	bnd jmp 2020 <.plt>
    218f:	90                   	nop
    2190:	f3 0f 1e fa          	endbr64 
    2194:	68 16 00 00 00       	push   $0x16
    2199:	f2 e9 81 fe ff ff    	bnd jmp 2020 <.plt>
    219f:	90                   	nop
    21a0:	f3 0f 1e fa          	endbr64 
    21a4:	68 17 00 00 00       	push   $0x17
    21a9:	f2 e9 71 fe ff ff    	bnd jmp 2020 <.plt>
    21af:	90                   	nop
    21b0:	f3 0f 1e fa          	endbr64 
    21b4:	68 18 00 00 00       	push   $0x18
    21b9:	f2 e9 61 fe ff ff    	bnd jmp 2020 <.plt>
    21bf:	90                   	nop
    21c0:	f3 0f 1e fa          	endbr64 
    21c4:	68 19 00 00 00       	push   $0x19
    21c9:	f2 e9 51 fe ff ff    	bnd jmp 2020 <.plt>
    21cf:	90                   	nop
    21d0:	f3 0f 1e fa          	endbr64 
    21d4:	68 1a 00 00 00       	push   $0x1a
    21d9:	f2 e9 41 fe ff ff    	bnd jmp 2020 <.plt>
    21df:	90                   	nop
    21e0:	f3 0f 1e fa          	endbr64 
    21e4:	68 1b 00 00 00       	push   $0x1b
    21e9:	f2 e9 31 fe ff ff    	bnd jmp 2020 <.plt>
    21ef:	90                   	nop
    21f0:	f3 0f 1e fa          	endbr64 
    21f4:	68 1c 00 00 00       	push   $0x1c
    21f9:	f2 e9 21 fe ff ff    	bnd jmp 2020 <.plt>
    21ff:	90                   	nop
    2200:	f3 0f 1e fa          	endbr64 
    2204:	68 1d 00 00 00       	push   $0x1d
    2209:	f2 e9 11 fe ff ff    	bnd jmp 2020 <.plt>
    220f:	90                   	nop

Disassembly of section .plt.got:

0000000000002210 <__cxa_finalize@plt>:
    2210:	f3 0f 1e fa          	endbr64 
    2214:	f2 ff 25 dd 5d 00 00 	bnd jmp *0x5ddd(%rip)        # 7ff8 <__cxa_finalize@GLIBC_2.2.5>
    221b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

0000000000002220 <getenv@plt>:
    2220:	f3 0f 1e fa          	endbr64 
    2224:	f2 ff 25 bd 5c 00 00 	bnd jmp *0x5cbd(%rip)        # 7ee8 <getenv@GLIBC_2.2.5>
    222b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002230 <free@plt>:
    2230:	f3 0f 1e fa          	endbr64 
    2234:	f2 ff 25 b5 5c 00 00 	bnd jmp *0x5cb5(%rip)        # 7ef0 <free@GLIBC_2.2.5>
    223b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002240 <strcasecmp@plt>:
    2240:	f3 0f 1e fa          	endbr64 
    2244:	f2 ff 25 ad 5c 00 00 	bnd jmp *0x5cad(%rip)        # 7ef8 <strcasecmp@GLIBC_2.2.5>
    224b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002250 <__errno_location@plt>:
    2250:	f3 0f 1e fa          	endbr64 
    2254:	f2 ff 25 a5 5c 00 00 	bnd jmp *0x5ca5(%rip)        # 7f00 <__errno_location@GLIBC_2.2.5>
    225b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002260 <strcpy@plt>:
    2260:	f3 0f 1e fa          	endbr64 
    2264:	f2 ff 25 9d 5c 00 00 	bnd jmp *0x5c9d(%rip)        # 7f08 <strcpy@GLIBC_2.2.5>
    226b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002270 <puts@plt>:
    2270:	f3 0f 1e fa          	endbr64 
    2274:	f2 ff 25 95 5c 00 00 	bnd jmp *0x5c95(%rip)        # 7f10 <puts@GLIBC_2.2.5>
    227b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002280 <write@plt>:
    2280:	f3 0f 1e fa          	endbr64 
    2284:	f2 ff 25 8d 5c 00 00 	bnd jmp *0x5c8d(%rip)        # 7f18 <write@GLIBC_2.2.5>
    228b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002290 <__stack_chk_fail@plt>:
    2290:	f3 0f 1e fa          	endbr64 
    2294:	f2 ff 25 85 5c 00 00 	bnd jmp *0x5c85(%rip)        # 7f20 <__stack_chk_fail@GLIBC_2.4>
    229b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022a0 <alarm@plt>:
    22a0:	f3 0f 1e fa          	endbr64 
    22a4:	f2 ff 25 7d 5c 00 00 	bnd jmp *0x5c7d(%rip)        # 7f28 <alarm@GLIBC_2.2.5>
    22ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022b0 <close@plt>:
    22b0:	f3 0f 1e fa          	endbr64 
    22b4:	f2 ff 25 75 5c 00 00 	bnd jmp *0x5c75(%rip)        # 7f30 <close@GLIBC_2.2.5>
    22bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022c0 <read@plt>:
    22c0:	f3 0f 1e fa          	endbr64 
    22c4:	f2 ff 25 6d 5c 00 00 	bnd jmp *0x5c6d(%rip)        # 7f38 <read@GLIBC_2.2.5>
    22cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022d0 <fgets@plt>:
    22d0:	f3 0f 1e fa          	endbr64 
    22d4:	f2 ff 25 65 5c 00 00 	bnd jmp *0x5c65(%rip)        # 7f40 <fgets@GLIBC_2.2.5>
    22db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022e0 <signal@plt>:
    22e0:	f3 0f 1e fa          	endbr64 
    22e4:	f2 ff 25 5d 5c 00 00 	bnd jmp *0x5c5d(%rip)        # 7f48 <signal@GLIBC_2.2.5>
    22eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022f0 <gethostbyname@plt>:
    22f0:	f3 0f 1e fa          	endbr64 
    22f4:	f2 ff 25 55 5c 00 00 	bnd jmp *0x5c55(%rip)        # 7f50 <gethostbyname@GLIBC_2.2.5>
    22fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002300 <__memmove_chk@plt>:
    2300:	f3 0f 1e fa          	endbr64 
    2304:	f2 ff 25 4d 5c 00 00 	bnd jmp *0x5c4d(%rip)        # 7f58 <__memmove_chk@GLIBC_2.3.4>
    230b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002310 <strtol@plt>:
    2310:	f3 0f 1e fa          	endbr64 
    2314:	f2 ff 25 45 5c 00 00 	bnd jmp *0x5c45(%rip)        # 7f60 <strtol@GLIBC_2.2.5>
    231b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002320 <memcpy@plt>:
    2320:	f3 0f 1e fa          	endbr64 
    2324:	f2 ff 25 3d 5c 00 00 	bnd jmp *0x5c3d(%rip)        # 7f68 <memcpy@GLIBC_2.14>
    232b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002330 <malloc@plt>:
    2330:	f3 0f 1e fa          	endbr64 
    2334:	f2 ff 25 35 5c 00 00 	bnd jmp *0x5c35(%rip)        # 7f70 <malloc@GLIBC_2.2.5>
    233b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002340 <fflush@plt>:
    2340:	f3 0f 1e fa          	endbr64 
    2344:	f2 ff 25 2d 5c 00 00 	bnd jmp *0x5c2d(%rip)        # 7f78 <fflush@GLIBC_2.2.5>
    234b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002350 <__isoc99_sscanf@plt>:
    2350:	f3 0f 1e fa          	endbr64 
    2354:	f2 ff 25 25 5c 00 00 	bnd jmp *0x5c25(%rip)        # 7f80 <__isoc99_sscanf@GLIBC_2.7>
    235b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002360 <__printf_chk@plt>:
    2360:	f3 0f 1e fa          	endbr64 
    2364:	f2 ff 25 1d 5c 00 00 	bnd jmp *0x5c1d(%rip)        # 7f88 <__printf_chk@GLIBC_2.3.4>
    236b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002370 <fopen@plt>:
    2370:	f3 0f 1e fa          	endbr64 
    2374:	f2 ff 25 15 5c 00 00 	bnd jmp *0x5c15(%rip)        # 7f90 <fopen@GLIBC_2.2.5>
    237b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002380 <gethostname@plt>:
    2380:	f3 0f 1e fa          	endbr64 
    2384:	f2 ff 25 0d 5c 00 00 	bnd jmp *0x5c0d(%rip)        # 7f98 <gethostname@GLIBC_2.2.5>
    238b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002390 <exit@plt>:
    2390:	f3 0f 1e fa          	endbr64 
    2394:	f2 ff 25 05 5c 00 00 	bnd jmp *0x5c05(%rip)        # 7fa0 <exit@GLIBC_2.2.5>
    239b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023a0 <connect@plt>:
    23a0:	f3 0f 1e fa          	endbr64 
    23a4:	f2 ff 25 fd 5b 00 00 	bnd jmp *0x5bfd(%rip)        # 7fa8 <connect@GLIBC_2.2.5>
    23ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023b0 <__fprintf_chk@plt>:
    23b0:	f3 0f 1e fa          	endbr64 
    23b4:	f2 ff 25 f5 5b 00 00 	bnd jmp *0x5bf5(%rip)        # 7fb0 <__fprintf_chk@GLIBC_2.3.4>
    23bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023c0 <sleep@plt>:
    23c0:	f3 0f 1e fa          	endbr64 
    23c4:	f2 ff 25 ed 5b 00 00 	bnd jmp *0x5bed(%rip)        # 7fb8 <sleep@GLIBC_2.2.5>
    23cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023d0 <__ctype_b_loc@plt>:
    23d0:	f3 0f 1e fa          	endbr64 
    23d4:	f2 ff 25 e5 5b 00 00 	bnd jmp *0x5be5(%rip)        # 7fc0 <__ctype_b_loc@GLIBC_2.3>
    23db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023e0 <__sprintf_chk@plt>:
    23e0:	f3 0f 1e fa          	endbr64 
    23e4:	f2 ff 25 dd 5b 00 00 	bnd jmp *0x5bdd(%rip)        # 7fc8 <__sprintf_chk@GLIBC_2.3.4>
    23eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023f0 <socket@plt>:
    23f0:	f3 0f 1e fa          	endbr64 
    23f4:	f2 ff 25 d5 5b 00 00 	bnd jmp *0x5bd5(%rip)        # 7fd0 <socket@GLIBC_2.2.5>
    23fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000002400 <_start>:
    2400:	f3 0f 1e fa          	endbr64 
    2404:	31 ed                	xor    %ebp,%ebp
    2406:	49 89 d1             	mov    %rdx,%r9
    2409:	5e                   	pop    %rsi
    240a:	48 89 e2             	mov    %rsp,%rdx
    240d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    2411:	50                   	push   %rax
    2412:	54                   	push   %rsp
    2413:	4c 8d 05 96 1e 00 00 	lea    0x1e96(%rip),%r8        # 42b0 <__libc_csu_fini>
    241a:	48 8d 0d 1f 1e 00 00 	lea    0x1e1f(%rip),%rcx        # 4240 <__libc_csu_init>
    2421:	48 8d 3d c1 00 00 00 	lea    0xc1(%rip),%rdi        # 24e9 <main>
    2428:	ff 15 b2 5b 00 00    	call   *0x5bb2(%rip)        # 7fe0 <__libc_start_main@GLIBC_2.2.5>
    242e:	f4                   	hlt    
    242f:	90                   	nop

0000000000002430 <deregister_tm_clones>:
    2430:	48 8d 3d 09 72 00 00 	lea    0x7209(%rip),%rdi        # 9640 <stdout@GLIBC_2.2.5>
    2437:	48 8d 05 02 72 00 00 	lea    0x7202(%rip),%rax        # 9640 <stdout@GLIBC_2.2.5>
    243e:	48 39 f8             	cmp    %rdi,%rax
    2441:	74 15                	je     2458 <deregister_tm_clones+0x28>
    2443:	48 8b 05 8e 5b 00 00 	mov    0x5b8e(%rip),%rax        # 7fd8 <_ITM_deregisterTMCloneTable>
    244a:	48 85 c0             	test   %rax,%rax
    244d:	74 09                	je     2458 <deregister_tm_clones+0x28>
    244f:	ff e0                	jmp    *%rax
    2451:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    2458:	c3                   	ret    
    2459:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000002460 <register_tm_clones>:
    2460:	48 8d 3d d9 71 00 00 	lea    0x71d9(%rip),%rdi        # 9640 <stdout@GLIBC_2.2.5>
    2467:	48 8d 35 d2 71 00 00 	lea    0x71d2(%rip),%rsi        # 9640 <stdout@GLIBC_2.2.5>
    246e:	48 29 fe             	sub    %rdi,%rsi
    2471:	48 89 f0             	mov    %rsi,%rax
    2474:	48 c1 ee 3f          	shr    $0x3f,%rsi
    2478:	48 c1 f8 03          	sar    $0x3,%rax
    247c:	48 01 c6             	add    %rax,%rsi
    247f:	48 d1 fe             	sar    %rsi
    2482:	74 14                	je     2498 <register_tm_clones+0x38>
    2484:	48 8b 05 65 5b 00 00 	mov    0x5b65(%rip),%rax        # 7ff0 <_ITM_registerTMCloneTable>
    248b:	48 85 c0             	test   %rax,%rax
    248e:	74 08                	je     2498 <register_tm_clones+0x38>
    2490:	ff e0                	jmp    *%rax
    2492:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    2498:	c3                   	ret    
    2499:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000024a0 <__do_global_dtors_aux>:
    24a0:	f3 0f 1e fa          	endbr64 
    24a4:	80 3d bd 71 00 00 00 	cmpb   $0x0,0x71bd(%rip)        # 9668 <completed.8060>
    24ab:	75 2b                	jne    24d8 <__do_global_dtors_aux+0x38>
    24ad:	55                   	push   %rbp
    24ae:	48 83 3d 42 5b 00 00 	cmpq   $0x0,0x5b42(%rip)        # 7ff8 <__cxa_finalize@GLIBC_2.2.5>
    24b5:	00 
    24b6:	48 89 e5             	mov    %rsp,%rbp
    24b9:	74 0c                	je     24c7 <__do_global_dtors_aux+0x27>
    24bb:	48 8b 3d 46 5b 00 00 	mov    0x5b46(%rip),%rdi        # 8008 <__dso_handle>
    24c2:	e8 49 fd ff ff       	call   2210 <__cxa_finalize@plt>
    24c7:	e8 64 ff ff ff       	call   2430 <deregister_tm_clones>
    24cc:	c6 05 95 71 00 00 01 	movb   $0x1,0x7195(%rip)        # 9668 <completed.8060>
    24d3:	5d                   	pop    %rbp
    24d4:	c3                   	ret    
    24d5:	0f 1f 00             	nopl   (%rax)
    24d8:	c3                   	ret    
    24d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000024e0 <frame_dummy>:
    24e0:	f3 0f 1e fa          	endbr64 
    24e4:	e9 77 ff ff ff       	jmp    2460 <register_tm_clones>

00000000000024e9 <main>:
    24e9:	f3 0f 1e fa          	endbr64 
    24ed:	53                   	push   %rbx
    24ee:	83 ff 01             	cmp    $0x1,%edi
    24f1:	74 51                	je     2544 <main+0x5b>
    24f3:	48 89 f3             	mov    %rsi,%rbx
    24f6:	83 ff 02             	cmp    $0x2,%edi
    24f9:	75 7b                	jne    2576 <main+0x8d>
    24fb:	48 8b 7e 08          	mov    0x8(%rsi),%rdi
    24ff:	48 8d 35 f0 31 00 00 	lea    0x31f0(%rip),%rsi        # 56f6 <array.3501+0x3b6>
    2506:	e8 65 fe ff ff       	call   2370 <fopen@plt>
    250b:	48 89 05 5e 71 00 00 	mov    %rax,0x715e(%rip)        # 9670 <infile>
    2512:	48 85 c0             	test   %rax,%rax
    2515:	74 3d                	je     2554 <main+0x6b>
    2517:	e8 95 08 00 00       	call   2db1 <initialize_bomb>
    251c:	48 89 c3             	mov    %rax,%rbx
    251f:	81 38 11 fa 22 20    	cmpl   $0x2022fa11,(%rax)
    2525:	74 72                	je     2599 <main+0xb0>
    2527:	48 8d 35 5a 2b 00 00 	lea    0x2b5a(%rip),%rsi        # 5088 <_IO_stdin_used+0x88>
    252e:	bf 01 00 00 00       	mov    $0x1,%edi
    2533:	b8 00 00 00 00       	mov    $0x0,%eax
    2538:	e8 23 fe ff ff       	call   2360 <__printf_chk@plt>
    253d:	b8 00 00 00 00       	mov    $0x0,%eax
    2542:	5b                   	pop    %rbx
    2543:	c3                   	ret    
    2544:	48 8b 05 05 71 00 00 	mov    0x7105(%rip),%rax        # 9650 <stdin@GLIBC_2.2.5>
    254b:	48 89 05 1e 71 00 00 	mov    %rax,0x711e(%rip)        # 9670 <infile>
    2552:	eb c3                	jmp    2517 <main+0x2e>
    2554:	48 8b 4b 08          	mov    0x8(%rbx),%rcx
    2558:	48 8b 13             	mov    (%rbx),%rdx
    255b:	48 8d 35 a2 2a 00 00 	lea    0x2aa2(%rip),%rsi        # 5004 <_IO_stdin_used+0x4>
    2562:	bf 01 00 00 00       	mov    $0x1,%edi
    2567:	e8 f4 fd ff ff       	call   2360 <__printf_chk@plt>
    256c:	bf 08 00 00 00       	mov    $0x8,%edi
    2571:	e8 1a fe ff ff       	call   2390 <exit@plt>
    2576:	48 8b 16             	mov    (%rsi),%rdx
    2579:	48 8d 35 a1 2a 00 00 	lea    0x2aa1(%rip),%rsi        # 5021 <_IO_stdin_used+0x21>
    2580:	bf 01 00 00 00       	mov    $0x1,%edi
    2585:	b8 00 00 00 00       	mov    $0x0,%eax
    258a:	e8 d1 fd ff ff       	call   2360 <__printf_chk@plt>
    258f:	bf 08 00 00 00       	mov    $0x8,%edi
    2594:	e8 f7 fd ff ff       	call   2390 <exit@plt>
    2599:	48 8d 3d 28 2b 00 00 	lea    0x2b28(%rip),%rdi        # 50c8 <_IO_stdin_used+0xc8>
    25a0:	e8 cb fc ff ff       	call   2270 <puts@plt>
    25a5:	48 8d 3d 5c 2b 00 00 	lea    0x2b5c(%rip),%rdi        # 5108 <_IO_stdin_used+0x108>
    25ac:	e8 bf fc ff ff       	call   2270 <puts@plt>
    25b1:	e8 b4 0c 00 00       	call   326a <read_line>
    25b6:	48 89 c7             	mov    %rax,%rdi
    25b9:	e8 0f 02 00 00       	call   27cd <phase_1>
    25be:	48 89 df             	mov    %rbx,%rdi
    25c1:	e8 ef 0d 00 00       	call   33b5 <phase_defused>
    25c6:	48 8d 3d 7b 2b 00 00 	lea    0x2b7b(%rip),%rdi        # 5148 <_IO_stdin_used+0x148>
    25cd:	e8 9e fc ff ff       	call   2270 <puts@plt>
    25d2:	e8 93 0c 00 00       	call   326a <read_line>
    25d7:	48 89 c7             	mov    %rax,%rdi
    25da:	e8 12 02 00 00       	call   27f1 <phase_2>
    25df:	48 89 df             	mov    %rbx,%rdi
    25e2:	e8 ce 0d 00 00       	call   33b5 <phase_defused>
    25e7:	48 8d 3d 4d 2a 00 00 	lea    0x2a4d(%rip),%rdi        # 503b <_IO_stdin_used+0x3b>
    25ee:	e8 7d fc ff ff       	call   2270 <puts@plt>
    25f3:	e8 72 0c 00 00       	call   326a <read_line>
    25f8:	48 89 c7             	mov    %rax,%rdi
    25fb:	e8 62 02 00 00       	call   2862 <phase_3>
    2600:	48 89 df             	mov    %rbx,%rdi
    2603:	e8 ad 0d 00 00       	call   33b5 <phase_defused>
    2608:	48 8d 3d 49 2a 00 00 	lea    0x2a49(%rip),%rdi        # 5058 <_IO_stdin_used+0x58>
    260f:	e8 5c fc ff ff       	call   2270 <puts@plt>
    2614:	e8 51 0c 00 00       	call   326a <read_line>
    2619:	48 89 c7             	mov    %rax,%rdi
    261c:	e8 66 03 00 00       	call   2987 <phase_4>
    2621:	48 89 df             	mov    %rbx,%rdi
    2624:	e8 8c 0d 00 00       	call   33b5 <phase_defused>
    2629:	48 8d 3d 48 2b 00 00 	lea    0x2b48(%rip),%rdi        # 5178 <_IO_stdin_used+0x178>
    2630:	e8 3b fc ff ff       	call   2270 <puts@plt>
    2635:	e8 30 0c 00 00       	call   326a <read_line>
    263a:	48 89 c7             	mov    %rax,%rdi
    263d:	e8 c4 03 00 00       	call   2a06 <phase_5>
    2642:	48 89 df             	mov    %rbx,%rdi
    2645:	e8 6b 0d 00 00       	call   33b5 <phase_defused>
    264a:	48 8d 3d 16 2a 00 00 	lea    0x2a16(%rip),%rdi        # 5067 <_IO_stdin_used+0x67>
    2651:	e8 1a fc ff ff       	call   2270 <puts@plt>
    2656:	e8 0f 0c 00 00       	call   326a <read_line>
    265b:	48 89 c7             	mov    %rax,%rdi
    265e:	e8 36 04 00 00       	call   2a99 <phase_6>
    2663:	48 89 df             	mov    %rbx,%rdi
    2666:	e8 4a 0d 00 00       	call   33b5 <phase_defused>
    266b:	48 89 df             	mov    %rbx,%rdi
    266e:	e8 bd fb ff ff       	call   2230 <free@plt>
    2673:	e9 c5 fe ff ff       	jmp    253d <main+0x54>

0000000000002678 <abracadabra>:
    2678:	f3 0f 1e fa          	endbr64 
    267c:	48 81 ec a8 00 00 00 	sub    $0xa8,%rsp
    2683:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    268a:	00 00 
    268c:	48 89 84 24 98 00 00 	mov    %rax,0x98(%rsp)
    2693:	00 
    2694:	31 c0                	xor    %eax,%eax
    2696:	48 8d 4c 24 0c       	lea    0xc(%rsp),%rcx
    269b:	48 8d 54 24 08       	lea    0x8(%rsp),%rdx
    26a0:	48 83 ec 08          	sub    $0x8,%rsp
    26a4:	48 8d 44 24 28       	lea    0x28(%rsp),%rax
    26a9:	50                   	push   %rax
    26aa:	48 8d 44 24 2c       	lea    0x2c(%rsp),%rax
    26af:	50                   	push   %rax
    26b0:	48 8d 44 24 30       	lea    0x30(%rsp),%rax
    26b5:	50                   	push   %rax
    26b6:	4c 8d 4c 24 34       	lea    0x34(%rsp),%r9
    26bb:	4c 8d 44 24 30       	lea    0x30(%rsp),%r8
    26c0:	48 8d 35 d5 2a 00 00 	lea    0x2ad5(%rip),%rsi        # 519c <_IO_stdin_used+0x19c>
    26c7:	48 8d 3d 2a 70 00 00 	lea    0x702a(%rip),%rdi        # 96f8 <input_strings+0x78>
    26ce:	b8 00 00 00 00       	mov    $0x0,%eax
    26d3:	e8 78 fc ff ff       	call   2350 <__isoc99_sscanf@plt>
    26d8:	48 83 c4 20          	add    $0x20,%rsp
    26dc:	83 f8 07             	cmp    $0x7,%eax
    26df:	74 20                	je     2701 <abracadabra+0x89>
    26e1:	b8 00 00 00 00       	mov    $0x0,%eax
    26e6:	48 8b b4 24 98 00 00 	mov    0x98(%rsp),%rsi
    26ed:	00 
    26ee:	64 48 33 34 25 28 00 	xor    %fs:0x28,%rsi
    26f5:	00 00 
    26f7:	75 2b                	jne    2724 <abracadabra+0xac>
    26f9:	48 81 c4 a8 00 00 00 	add    $0xa8,%rsp
    2700:	c3                   	ret    
    2701:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
    2706:	48 8d 35 ab 2a 00 00 	lea    0x2aab(%rip),%rsi        # 51b8 <_IO_stdin_used+0x1b8>
    270d:	e8 4e 06 00 00       	call   2d60 <strings_not_equal>
    2712:	85 c0                	test   %eax,%eax
    2714:	74 07                	je     271d <abracadabra+0xa5>
    2716:	b8 00 00 00 00       	mov    $0x0,%eax
    271b:	eb c9                	jmp    26e6 <abracadabra+0x6e>
    271d:	b8 01 00 00 00       	mov    $0x1,%eax
    2722:	eb c2                	jmp    26e6 <abracadabra+0x6e>
    2724:	e8 67 fb ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002729 <alohomora>:
    2729:	f3 0f 1e fa          	endbr64 
    272d:	48 81 ec 98 00 00 00 	sub    $0x98,%rsp
    2734:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    273b:	00 00 
    273d:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
    2744:	00 
    2745:	31 c0                	xor    %eax,%eax
    2747:	48 8d 4c 24 0c       	lea    0xc(%rsp),%rcx
    274c:	48 8d 54 24 08       	lea    0x8(%rsp),%rdx
    2751:	4c 8d 44 24 10       	lea    0x10(%rsp),%r8
    2756:	48 8d 35 4b 2a 00 00 	lea    0x2a4b(%rip),%rsi        # 51a8 <_IO_stdin_used+0x1a8>
    275d:	48 8d 3d 84 70 00 00 	lea    0x7084(%rip),%rdi        # 97e8 <input_strings+0x168>
    2764:	e8 e7 fb ff ff       	call   2350 <__isoc99_sscanf@plt>
    2769:	83 f8 03             	cmp    $0x3,%eax
    276c:	74 20                	je     278e <alohomora+0x65>
    276e:	b8 00 00 00 00       	mov    $0x0,%eax
    2773:	48 8b b4 24 88 00 00 	mov    0x88(%rsp),%rsi
    277a:	00 
    277b:	64 48 33 34 25 28 00 	xor    %fs:0x28,%rsi
    2782:	00 00 
    2784:	75 42                	jne    27c8 <alohomora+0x9f>
    2786:	48 81 c4 98 00 00 00 	add    $0x98,%rsp
    278d:	c3                   	ret    
    278e:	48 8d 54 24 10       	lea    0x10(%rsp),%rdx
    2793:	0f b6 02             	movzbl (%rdx),%eax
    2796:	84 c0                	test   %al,%al
    2798:	74 0b                	je     27a5 <alohomora+0x7c>
    279a:	83 c0 02             	add    $0x2,%eax
    279d:	88 02                	mov    %al,(%rdx)
    279f:	48 83 c2 01          	add    $0x1,%rdx
    27a3:	eb ee                	jmp    2793 <alohomora+0x6a>
    27a5:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
    27aa:	48 8d 35 27 2a 00 00 	lea    0x2a27(%rip),%rsi        # 51d8 <_IO_stdin_used+0x1d8>
    27b1:	e8 aa 05 00 00       	call   2d60 <strings_not_equal>
    27b6:	85 c0                	test   %eax,%eax
    27b8:	74 07                	je     27c1 <alohomora+0x98>
    27ba:	b8 00 00 00 00       	mov    $0x0,%eax
    27bf:	eb b2                	jmp    2773 <alohomora+0x4a>
    27c1:	b8 01 00 00 00       	mov    $0x1,%eax
    27c6:	eb ab                	jmp    2773 <alohomora+0x4a>
    27c8:	e8 c3 fa ff ff       	call   2290 <__stack_chk_fail@plt>

00000000000027cd <phase_1>:
    27cd:	f3 0f 1e fa          	endbr64 
    27d1:	48 83 ec 08          	sub    $0x8,%rsp
    27d5:	48 8d 35 24 2a 00 00 	lea    0x2a24(%rip),%rsi        # 5200 <_IO_stdin_used+0x200>
    27dc:	e8 7f 05 00 00       	call   2d60 <strings_not_equal>
    27e1:	85 c0                	test   %eax,%eax
    27e3:	75 05                	jne    27ea <phase_1+0x1d>
    27e5:	48 83 c4 08          	add    $0x8,%rsp
    27e9:	c3                   	ret    
    27ea:	e8 48 09 00 00       	call   3137 <explode_bomb>
    27ef:	eb f4                	jmp    27e5 <phase_1+0x18>

00000000000027f1 <phase_2>:
    27f1:	f3 0f 1e fa          	endbr64 
    27f5:	53                   	push   %rbx
    27f6:	48 83 ec 20          	sub    $0x20,%rsp
    27fa:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2801:	00 00 
    2803:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    2808:	31 c0                	xor    %eax,%eax ;clear %eax(part of %rax)
    280a:	48 89 e6             	mov    %rsp,%rsi 
    280d:	e8 13 0a 00 00       	call   3225 <read_six_numbers>
    2812:	83 3c 24 01          	cmpl   $0x1,(%rsp);a1=1
    2816:	75 07                	jne    281f <phase_2+0x2e> ;if the top element on the stack !=1, bomb
    2818:	bb 01 00 00 00       	mov    $0x1,%ebx
    281d:	eb 0f                	jmp    282e <phase_2+0x3d>
    281f:	e8 13 09 00 00       	call   3137 <explode_bomb>
    2824:	eb f2                	jmp    2818 <phase_2+0x27>
    2826:	e8 0c 09 00 00       	call   3137 <explode_bomb>
    282b:	83 c3 01             	add    $0x1,%ebx
    282e:	83 fb 05             	cmp    $0x5,%ebx
    2831:	7f 14                	jg     2847 <phase_2+0x56>
    2833:	48 63 d3             	movslq %ebx,%rdx
    2836:	8d 43 ff             	lea    -0x1(%rbx),%eax
    2839:	48 98                	cltq   
    283b:	8b 04 84             	mov    (%rsp,%rax,4),%eax
    283e:	01 c0                	add    %eax,%eax
    2840:	39 04 94             	cmp    %eax,(%rsp,%rdx,4)
    2843:	74 e6                	je     282b <phase_2+0x3a>
    2845:	eb df                	jmp    2826 <phase_2+0x35>
    2847:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    284c:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2853:	00 00 
    2855:	75 06                	jne    285d <phase_2+0x6c>
    2857:	48 83 c4 20          	add    $0x20,%rsp
    285b:	5b                   	pop    %rbx
    285c:	c3                   	ret    
    285d:	e8 2e fa ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002862 <phase_3>:
    
    2862:	f3 0f 1e fa          	endbr64 
    2866:	48 83 ec 18          	sub    $0x18,%rsp
    286a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2871:	00 00 
    2873:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    2878:	31 c0                	xor    %eax,%eax ;clear %eax
    287a:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
    287f:	48 89 e2             	mov    %rsp,%rdx ;%rdx is the address of a1
    2882:	48 8d 35 cf 2d 00 00 	lea    0x2dcf(%rip),%rsi        # 5658 <array.3501+0x318>
    2889:	e8 c2 fa ff ff       	call   2350 <__isoc99_sscanf@plt>
    288e:	83 f8 01             	cmp    $0x1,%eax           ; if %eax <=1 (if arg number <=2)  
    2891:	7e 1f                	jle    28b2 <phase_3+0x50> ; bomb!!!
    2893:	8b 04 24             	mov    (%rsp),%eax         ;a1=(%rsp)
    2896:	83 f8 07             	cmp    $0x7,%eax           ;if a1=(%rsp)>7
    2899:	0f 87 8c 00 00 00    	ja     292b <phase_3+0xc9> ;bomb!!! --requires a1<=7
    289f:	89 c0                	mov    %eax,%eax
    28a1:	48 8d 15 78 2a 00 00 	lea    0x2a78(%rip),%rdx        # 5320 <_IO_stdin_used+0x320>
    28a8:	48 63 04 82          	movslq (%rdx,%rax,4),%rax ;%rdx=0x28a8+0x2a78, target: 0x2919
    28ac:	48 01 d0             	add    %rdx,%rax ;%rax=
    28af:	3e ff e0             	notrack jmp *%rax ;jump to somewhere, (%rsp+4)+x=0x10a
    28b2:	e8 80 08 00 00       	call   3137 <explode_bomb>
    28b7:	eb da                	jmp    2893 <phase_3+0x31> ;
    28b9:	8b 44 24 04          	mov    0x4(%rsp),%eax ;  a2=(%rsp+4)
    28bd:	05 34 03 00 00       	add    $0x334,%eax    ; 
    28c2:	3d 0a 01 00 00       	cmp    $0x10a,%eax         ;if %eax!=0x10a(256+10=266)
    28c7:	75 71                	jne    293a <phase_3+0xd8> ;bomb!!!
    28c9:	48 8b 44 24 08       	mov    0x8(%rsp),%rax ;a3
    28ce:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax  ;check if there's an overflow;there's no the third arg.
    28d5:	00 00 
    28d7:	75 68                	jne    2941 <phase_3+0xdf>
    28d9:	48 83 c4 18          	add    $0x18,%rsp
    28dd:	c3                   	ret    
    28de:	8b 44 24 04          	mov    0x4(%rsp),%eax
    28e2:	05 3c 02 00 00       	add    $0x23c,%eax
    28e7:	eb d9                	jmp    28c2 <phase_3+0x60>
    28e9:	8b 44 24 04          	mov    0x4(%rsp),%eax
    28ed:	05 40 02 00 00       	add    $0x240,%eax
    28f2:	eb ce                	jmp    28c2 <phase_3+0x60>
    28f4:	8b 44 24 04          	mov    0x4(%rsp),%eax
    28f8:	05 e3 02 00 00       	add    $0x2e3,%eax
    28fd:	eb c3                	jmp    28c2 <phase_3+0x60>
    28ff:	8b 44 24 04          	mov    0x4(%rsp),%eax
    2903:	05 86 00 00 00       	add    $0x86,%eax ;a1=4,a2=0x84=132,a3=?;0x86 + 0x84 = 0x10a, d=0x2a1d
    2908:	eb b8                	jmp    28c2 <phase_3+0x60>
    290a:	8b 44 24 04          	mov    0x4(%rsp),%eax
    290e:	05 ce 02 00 00       	add    $0x2ce,%eax
    2913:	eb ad                	jmp    28c2 <phase_3+0x60>
    2915:	8b 44 24 04          	mov    0x4(%rsp),%eax
    2919:	05 85 00 00 00       	add    $0x85,%eax ;a1=6,a2=0x85=133,a3=?;0x85 + 0x85 = 0x10a, d=0x2a07(unavailable)
    291e:	eb a2                	jmp    28c2 <phase_3+0x60>
    2920:	8b 44 24 04          	mov    0x4(%rsp),%eax
    2924:	05 f1 00 00 00       	add    $0xf1,%eax ;a1=7,a2=0x19=25,a3=?;0xf1 + 0x19 = 0x10a, d=0x29fc(unavailable)
    2929:	eb 97                	jmp    28c2 <phase_3+0x60>
    292b:	e8 07 08 00 00       	call   3137 <explode_bomb>
    2930:	bf ff ff ff ff       	mov    $0xffffffff,%edi
    2935:	e8 56 fa ff ff       	call   2390 <exit@plt>
    293a:	e8 f8 07 00 00       	call   3137 <explode_bomb>
    293f:	eb 88                	jmp    28c9 <phase_3+0x67>
    2941:	e8 4a f9 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002946 <func4>:
    2946:	f3 0f 1e fa          	endbr64 
    294a:	48 83 ec 08          	sub    $0x8,%rsp
    294e:	89 d1                	mov    %edx,%ecx ;%edx=%ecx=0xe
    2950:	29 f1                	sub    %esi,%ecx ;
    2952:	89 c8                	mov    %ecx,%eax
    2954:	c1 e8 1f             	shr    $0x1f,%eax ;logical >>31 to get the sign
    2957:	01 c8                	add    %ecx,%eax
    2959:	d1 f8                	sar    %eax ;=sar 1,%eax
    295b:	01 f0                	add    %esi,%eax
    295d:	39 f8                	cmp    %edi,%eax ;%rdi=a1, never changes.
    295f:	7f 0c                	jg     296d <func4+0x27> ;if %esi is greater than a1
    2961:	7c 16                	jl     2979 <func4+0x33> ;if .. less than a1
    2963:	b8 00 00 00 00       	mov    $0x0,%eax ;if eax=a1, recursion finish
    2968:	48 83 c4 08          	add    $0x8,%rsp ;jump to here;Phase4 requires that %eax return as 4
    296c:	c3                   	ret    
    296d:	8d 50 ff             	lea    -0x1(%rax),%edx ;if %esi>a1, %edx=%rax-1, recursion
    2970:	e8 d1 ff ff ff       	call   2946 <func4>
    2975:	01 c0                	add    %eax,%eax       ;%eax*=2;
    2977:	eb ef                	jmp    2968 <func4+0x22>
    2979:	8d 70 01             	lea    0x1(%rax),%esi ;if %esi<a1, %esi=%rax+1, retcursion
    297c:	e8 c5 ff ff ff       	call   2946 <func4>
    2981:	8d 44 00 01          	lea    0x1(%rax,%rax,1),%eax
    2985:	eb e1                	jmp    2968 <func4+0x22>

0000000000002987 <phase_4>:
    2987:	f3 0f 1e fa          	endbr64 
    298b:	48 83 ec 18          	sub    $0x18,%rsp
    298f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2996:	00 00 
    2998:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    299d:	31 c0                	xor    %eax,%eax
    299f:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
    29a4:	48 89 e2             	mov    %rsp,%rdx
    29a7:	48 8d 35 aa 2c 00 00 	lea    0x2caa(%rip),%rsi        # 5658 <array.3501+0x318>
    29ae:	e8 9d f9 ff ff       	call   2350 <__isoc99_sscanf@plt>
    29b3:	83 f8 02             	cmp    $0x2,%eax
    29b6:	75 0c                	jne    29c4 <phase_4+0x3d> ;bomb!!--two args
    29b8:	8b 04 24             	mov    (%rsp),%eax ;a1
    29bb:	85 c0                	test   %eax,%eax
    29bd:	78 05                	js     29c4 <phase_4+0x3d> ;if a1<0, bomb!! --a is positive or zero
    29bf:	83 f8 0e             	cmp    $0xe,%eax ;a1<=14, jump, or bomb!
    29c2:	7e 05                	jle    29c9 <phase_4+0x42>
    29c4:	e8 6e 07 00 00       	call   3137 <explode_bomb>
    29c9:	ba 0e 00 00 00       	mov    $0xe,%edx ;%edx=0xe=14
    29ce:	be 00 00 00 00       	mov    $0x0,%esi ;%rsi=0;
    29d3:	8b 3c 24             	mov    (%rsp),%edi ;a1
    29d6:	e8 6b ff ff ff       	call   2946 <func4>
    29db:	83 f8 04             	cmp    $0x4,%eax           ;if the return value!=4
    29de:	75 07                	jne    29e7 <phase_4+0x60> ;bomb!
    29e0:	83 7c 24 04 04       	cmpl   $0x4,0x4(%rsp)      ;a2=4, jump, or bomb!
    29e5:	74 05                	je     29ec <phase_4+0x65>
    29e7:	e8 4b 07 00 00       	call   3137 <explode_bomb>
    29ec:	48 8b 44 24 08       	mov    0x8(%rsp),%rax      ;make sure there's no overflow
    29f1:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    29f8:	00 00 
    29fa:	75 05                	jne    2a01 <phase_4+0x7a>
    29fc:	48 83 c4 18          	add    $0x18,%rsp
    2a00:	c3                   	ret    
    2a01:	e8 8a f8 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002a06 <phase_5>:
    2a06:	f3 0f 1e fa          	endbr64 
    2a0a:	48 83 ec 18          	sub    $0x18,%rsp
    2a0e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2a15:	00 00 
    2a17:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    2a1c:	31 c0                	xor    %eax,%eax ;clear %eax
    2a1e:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
    2a23:	48 89 e2             	mov    %rsp,%rdx
    2a26:	48 8d 35 2b 2c 00 00 	lea    0x2c2b(%rip),%rsi        # 5658 <array.3501+0x318>
    2a2d:	e8 1e f9 ff ff       	call   2350 <__isoc99_sscanf@plt>
    2a32:	83 f8 01             	cmp    $0x1,%eax ;if parameter number <=2 ->at least 3 parameters
    2a35:	7e 31                	jle    2a68 <phase_5+0x62> ;bomb!
    2a37:	8b 04 24             	mov    (%rsp),%eax ;a1
    2a3a:	83 e0 0f             	and    $0xf,%eax ;a1=a1&[1111], so a1<=15
    2a3d:	89 04 24             	mov    %eax,(%rsp) 
    2a40:	b9 00 00 00 00       	mov    $0x0,%ecx
    2a45:	ba 00 00 00 00       	mov    $0x0,%edx
    2a4a:	8b 04 24             	mov    (%rsp),%eax ;loop begins, put a1 in %eax
    2a4d:	83 f8 0f             	cmp    $0xf,%eax ;if %eax=0xf=15, 
    2a50:	74 1d                	je     2a6f <phase_5+0x69> ;Jump!Over!
    2a52:	83 c2 01             	add    $0x1,%edx ;or %edx++
    2a55:	48 98                	cltq   ;%eax sign extended to %rax
    2a57:	48 8d 35 e2 28 00 00 	lea    0x28e2(%rip),%rsi        # 5340 <array.3501> 
    2a5e:	8b 04 86             	mov    (%rsi,%rax,4),%eax ;mov s[a1] to %eax, that's a saved array, I've copied it to Notion.
    2a61:	89 04 24             	mov    %eax,(%rsp) ;s[a1]=a1. Wow, a maze! Target: finish the maze in 15 steps and reach '15'
    2a64:	01 c1                	add    %eax,%ecx ;%ecx: 0+..+15-5(initial a1)=115
    2a66:	eb e2                	jmp    2a4a <phase_5+0x44>
    2a68:	e8 ca 06 00 00       	call   3137 <explode_bomb>
    2a6d:	eb c8                	jmp    2a37 <phase_5+0x31>
    2a6f:	83 fa 0f             	cmp    $0xf,%edx ;from 2a50. It's required that %edx=0xf -- 15 steps
    2a72:	75 06                	jne    2a7a <phase_5+0x74>  ;or bomb!
    2a74:	39 4c 24 04          	cmp    %ecx,0x4(%rsp)       ;%ecx=a2
    2a78:	74 05                	je     2a7f <phase_5+0x79>  ;or bomb!
    2a7a:	e8 b8 06 00 00       	call   3137 <explode_bomb>
    2a7f:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    2a84:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2a8b:	00 00 
    2a8d:	75 05                	jne    2a94 <phase_5+0x8e>
    2a8f:	48 83 c4 18          	add    $0x18,%rsp
    2a93:	c3                   	ret    
    2a94:	e8 f7 f7 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002a99 <phase_6>:
    2a99:	f3 0f 1e fa          	endbr64 
    2a9d:	41 54                	push   %r12
    2a9f:	55                   	push   %rbp
    2aa0:	53                   	push   %rbx
    2aa1:	48 83 ec 60          	sub    $0x60,%rsp
    2aa5:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2aac:	00 00 
    2aae:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    2ab3:	31 c0                	xor    %eax,%eax
    2ab5:	48 89 e6             	mov    %rsp,%rsi
    2ab8:	e8 68 07 00 00       	call   3225 <read_six_numbers>
    2abd:	bd 00 00 00 00       	mov    $0x0,%ebp;begin loop 1
    2ac2:	eb 27                	jmp    2aeb <phase_6+0x52>
    2ac4:	e8 6e 06 00 00       	call   3137 <explode_bomb>
    2ac9:	eb 33                	jmp    2afe <phase_6+0x65>
    2acb:	e8 67 06 00 00       	call   3137 <explode_bomb>

    ;loop 2: %ebx=0~5
    2ad0:	83 c3 01             	add    $0x1,%ebx
    2ad3:	83 fb 05             	cmp    $0x5,%ebx            ;from 2b05
    2ad6:	7f 10                	jg     2ae8 <phase_6+0x4f>  ;if %ebx=6(%ebp=0), loop 2 finishes, back to loop 1
    2ad8:	48 63 c5             	movslq %ebp,%rax
    2adb:	48 63 d3             	movslq %ebx,%rdx
    2ade:	8b 3c 94             	mov    (%rsp,%rdx,4),%edi   ;a[%ebx]/a[%ebp+1]
    2ae1:	39 3c 84             	cmp    %edi,(%rsp,%rax,4)   ;cmp a[i+1],a[i](i=%ebp)
    2ae4:	75 ea                	jne    2ad0 <phase_6+0x37>  ;so a[i]!=a[j], i,j=0..5
    2ae6:	eb e3                	jmp    2acb <phase_6+0x32>  ;or bomb!

    ;loop 1: %ebp=0~5
    2ae8:	44 89 e5             	mov    %r12d,%ebp
    2aeb:	83 fd 05             	cmp    $0x5,%ebp ;from start(2ac2) with %ebp=0
    2aee:	7f 17                	jg     2b07 <phase_6+0x6e> ;if %ebp=6, loop 1 finishes, goto loop 3
    2af0:	48 63 c5             	movslq %ebp,%rax
    2af3:	8b 04 84             	mov    (%rsp,%rax,4),%eax
    2af6:	83 e8 01             	sub    $0x1,%eax
    2af9:	83 f8 05             	cmp    $0x5,%eax            ;if a[i]-1>5
    2afc:	77 c6                	ja     2ac4 <phase_6+0x2b>  ;bomb! ---a[i]<=6
    2afe:	44 8d 65 01          	lea    0x1(%rbp),%r12d
    2b02:	44 89 e3             	mov    %r12d,%ebx           ;%ebx=%ebp+1
    2b05:	eb cc                	jmp    2ad3 <phase_6+0x3a>
    ;result: make sure a[i]!=a[j],i,j=0..5

    ;loop 3,with %eax=0~5
    2b07:	b8 00 00 00 00       	mov    $0x0,%eax ;%eax=0
    2b0c:	eb 11                	jmp    2b1f <phase_6+0x86>
    2b0e:	48 63 c8             	movslq %eax,%rcx    ;from the last line of loop 3
    2b11:	ba 07 00 00 00       	mov    $0x7,%edx
    2b16:	2b 14 8c             	sub    (%rsp,%rcx,4),%edx 
    2b19:	89 14 8c             	mov    %edx,(%rsp,%rcx,4) ;a[i]=7-a[i]
    2b1c:	83 c0 01             	add    $0x1,%eax          ;%eax++
    2b1f:	83 f8 05             	cmp    $0x5,%eax ;from 2b07
    2b22:	7e ea                	jle    2b0e <phase_6+0x75> ;if<=5, jump back, or loop finished
    ;result:a[i]=7-a[i]

    ;loop 4,with %esi=0~5. %rdx: the address of current node
    2b24:	be 00 00 00 00       	mov    $0x0,%esi ;phase_6+139
    2b29:	eb 17                	jmp    2b42 <phase_6+0xa9>
    2b2b:	48 8b 52 08          	mov    0x8(%rdx),%rdx ;points at the next node
    2b2f:	83 c0 01             	add    $0x1,%eax
    2b32:	48 63 ce             	movslq %esi,%rcx    ;from 2b53(last line of loop 4),start with %rax=1, %rsi=0
    2b35:	39 04 8c             	cmp    %eax,(%rsp,%rcx,4) ;cmp %eax & a[%rsi]
    2b38:	7f f1                	jg     2b2b <phase_6+0x92> ;if i<a[i],jump, %rdx points at the next node
    2b3a:	48 89 54 cc 20       	mov    %rdx,0x20(%rsp,%rcx,8);or put current node address after 
    2b3f:	83 c6 01             	add    $0x1,%esi
    2b42:	83 fe 05             	cmp    $0x5,%esi    ;from the start of loop 4
    2b45:	7f 0e                	jg     2b55 <phase_6+0xbc> ;if %esi=6,loop 4 finishes.
    2b47:	b8 01 00 00 00       	mov    $0x1,%eax ;%eax=1;
    2b4c:	48 8d 15 dd 66 00 00 	lea    0x66dd(%rip),%rdx        # 9230 <node1> ;%rdx:the address of node1
    2b53:	eb dd                	jmp    2b32 <phase_6+0x99>
    
    ;loop 5: %eax=0~5
    2b55:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx ;phase_6+206;from 2b55(loop 4 finished)
    2b5a:	48 89 d9             	mov    %rbx,%rcx    ;0x20(%rsp) is the first pointer of nodes in stack
    2b5d:	b8 01 00 00 00       	mov    $0x1,%eax
    2b62:	eb 12                	jmp    2b76 <phase_6+0xdd> 
    2b64:	48 63 d0             	movslq %eax,%rdx    ;start with i=1;from 2b79 (last line of loop 5)
    2b67:	48 8b 54 d4 20       	mov    0x20(%rsp,%rdx,8),%rdx ;point at the next node
    2b6c:	48 89 51 08          	mov    %rdx,0x8(%rcx)
    2b70:	83 c0 01             	add    $0x1,%eax
    2b73:	48 89 d1             	mov    %rdx,%rcx
    2b76:	83 f8 05             	cmp    $0x5,%eax    ;from 2b62
    2b79:	7e e9                	jle    2b64 <phase_6+0xcb>

    ;loop 6: %ebp=0~4
    2b7b:	48 c7 41 08 00 00 00 	movq   $0x0,0x8(%rcx) ;phase_6+226
    2b82:	00 
    2b83:	bd 00 00 00 00       	mov    $0x0,%ebp
    2b88:	eb 07                	jmp    2b91 <phase_6+0xf8>
    2b8a:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    2b8e:	83 c5 01             	add    $0x1,%ebp
    2b91:	83 fd 04             	cmp    $0x4,%ebp ;from 2b88
    2b94:	7f 11                	jg     2ba7 <phase_6+0x10e>
    2b96:	48 8b 43 08          	mov    0x8(%rbx),%rax ;(%rax): the node %rbx points at 
    2b9a:	8b 00                	mov    (%rax),%eax
    2b9c:	39 03                	cmp    %eax,(%rbx)          
    2b9e:	7e ea                	jle    2b8a <phase_6+0xf1>  ;if (%rbx)<=%eax, jump 2b8a
    2ba0:	e8 92 05 00 00       	call   3137 <explode_bomb>  ;or bomb!
    2ba5:	eb e3                	jmp    2b8a <phase_6+0xf1>
    2ba7:	48 8b 44 24 58       	mov    0x58(%rsp),%rax
    2bac:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2bb3:	00 00 
    2bb5:	75 09                	jne    2bc0 <phase_6+0x127>
    2bb7:	48 83 c4 60          	add    $0x60,%rsp
    2bbb:	5b                   	pop    %rbx
    2bbc:	5d                   	pop    %rbp
    2bbd:	41 5c                	pop    %r12
    2bbf:	c3                   	ret    
    2bc0:	e8 cb f6 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002bc5 <fun7>:
    2bc5:	f3 0f 1e fa          	endbr64 
    2bc9:	48 85 ff             	test   %rdi,%rdi
    2bcc:	74 32                	je     2c00 <fun7+0x3b>
    2bce:	48 83 ec 08          	sub    $0x8,%rsp
    2bd2:	8b 07                	mov    (%rdi),%eax
    2bd4:	39 f0                	cmp    %esi,%eax
    2bd6:	7f 0c                	jg     2be4 <fun7+0x1f>
    2bd8:	75 17                	jne    2bf1 <fun7+0x2c>
    2bda:	b8 00 00 00 00       	mov    $0x0,%eax
    2bdf:	48 83 c4 08          	add    $0x8,%rsp
    2be3:	c3                   	ret    
    2be4:	48 8b 7f 08          	mov    0x8(%rdi),%rdi
    2be8:	e8 d8 ff ff ff       	call   2bc5 <fun7>
    2bed:	01 c0                	add    %eax,%eax
    2bef:	eb ee                	jmp    2bdf <fun7+0x1a>
    2bf1:	48 8b 7f 10          	mov    0x10(%rdi),%rdi
    2bf5:	e8 cb ff ff ff       	call   2bc5 <fun7>
    2bfa:	8d 44 00 01          	lea    0x1(%rax,%rax,1),%eax
    2bfe:	eb df                	jmp    2bdf <fun7+0x1a>
    2c00:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2c05:	c3                   	ret    

0000000000002c06 <secret_phase>:
    2c06:	f3 0f 1e fa          	endbr64 
    2c0a:	53                   	push   %rbx
    2c0b:	48 83 ec 10          	sub    $0x10,%rsp
    2c0f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2c16:	00 00 
    2c18:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    2c1d:	31 c0                	xor    %eax,%eax
    2c1f:	e8 46 06 00 00       	call   326a <read_line>
    2c24:	48 89 c7             	mov    %rax,%rdi
    2c27:	ba 0a 00 00 00       	mov    $0xa,%edx
    2c2c:	be 00 00 00 00       	mov    $0x0,%esi
    2c31:	e8 da f6 ff ff       	call   2310 <strtol@plt>
    2c36:	48 89 c3             	mov    %rax,%rbx
    2c39:	8d 40 ff             	lea    -0x1(%rax),%eax
    2c3c:	3d e8 03 00 00       	cmp    $0x3e8,%eax
    2c41:	77 63                	ja     2ca6 <secret_phase+0xa0>
    2c43:	89 de                	mov    %ebx,%esi
    2c45:	48 8d 3d 04 65 00 00 	lea    0x6504(%rip),%rdi        # 9150 <n1>
    2c4c:	e8 74 ff ff ff       	call   2bc5 <fun7>
    2c51:	83 f8 06             	cmp    $0x6,%eax
    2c54:	75 57                	jne    2cad <secret_phase+0xa7>
    2c56:	48 8d 3d cb 25 00 00 	lea    0x25cb(%rip),%rdi        # 5228 <_IO_stdin_used+0x228>
    2c5d:	e8 0e f6 ff ff       	call   2270 <puts@plt>
    2c62:	48 8d 3d e7 25 00 00 	lea    0x25e7(%rip),%rdi        # 5250 <_IO_stdin_used+0x250>
    2c69:	e8 02 f6 ff ff       	call   2270 <puts@plt>
    2c6e:	48 8d 3d 23 26 00 00 	lea    0x2623(%rip),%rdi        # 5298 <_IO_stdin_used+0x298>
    2c75:	e8 f6 f5 ff ff       	call   2270 <puts@plt>
    2c7a:	48 8d 3d 4f 26 00 00 	lea    0x264f(%rip),%rdi        # 52d0 <_IO_stdin_used+0x2d0>
    2c81:	e8 ea f5 ff ff       	call   2270 <puts@plt>
    2c86:	48 8d 7c 24 04       	lea    0x4(%rsp),%rdi
    2c8b:	e8 25 07 00 00       	call   33b5 <phase_defused>
    2c90:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    2c95:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2c9c:	00 00 
    2c9e:	75 14                	jne    2cb4 <secret_phase+0xae>
    2ca0:	48 83 c4 10          	add    $0x10,%rsp
    2ca4:	5b                   	pop    %rbx
    2ca5:	c3                   	ret    
    2ca6:	e8 8c 04 00 00       	call   3137 <explode_bomb>
    2cab:	eb 96                	jmp    2c43 <secret_phase+0x3d>
    2cad:	e8 85 04 00 00       	call   3137 <explode_bomb>
    2cb2:	eb a2                	jmp    2c56 <secret_phase+0x50>
    2cb4:	e8 d7 f5 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002cb9 <sig_handler>:
    2cb9:	f3 0f 1e fa          	endbr64 
    2cbd:	50                   	push   %rax
    2cbe:	58                   	pop    %rax
    2cbf:	48 83 ec 08          	sub    $0x8,%rsp
    2cc3:	48 8d 3d b6 26 00 00 	lea    0x26b6(%rip),%rdi        # 5380 <array.3501+0x40>
    2cca:	e8 a1 f5 ff ff       	call   2270 <puts@plt>
    2ccf:	bf 03 00 00 00       	mov    $0x3,%edi
    2cd4:	e8 e7 f6 ff ff       	call   23c0 <sleep@plt>
    2cd9:	48 8d 35 f1 28 00 00 	lea    0x28f1(%rip),%rsi        # 55d1 <array.3501+0x291>
    2ce0:	bf 01 00 00 00       	mov    $0x1,%edi
    2ce5:	b8 00 00 00 00       	mov    $0x0,%eax
    2cea:	e8 71 f6 ff ff       	call   2360 <__printf_chk@plt>
    2cef:	48 8b 3d 4a 69 00 00 	mov    0x694a(%rip),%rdi        # 9640 <stdout@GLIBC_2.2.5>
    2cf6:	e8 45 f6 ff ff       	call   2340 <fflush@plt>
    2cfb:	bf 01 00 00 00       	mov    $0x1,%edi
    2d00:	e8 bb f6 ff ff       	call   23c0 <sleep@plt>
    2d05:	48 8d 3d cd 28 00 00 	lea    0x28cd(%rip),%rdi        # 55d9 <array.3501+0x299>
    2d0c:	e8 5f f5 ff ff       	call   2270 <puts@plt>
    2d11:	bf 10 00 00 00       	mov    $0x10,%edi
    2d16:	e8 75 f6 ff ff       	call   2390 <exit@plt>

0000000000002d1b <invalid_phase>:
    2d1b:	f3 0f 1e fa          	endbr64 
    2d1f:	50                   	push   %rax
    2d20:	58                   	pop    %rax
    2d21:	48 83 ec 08          	sub    $0x8,%rsp
    2d25:	48 89 fa             	mov    %rdi,%rdx
    2d28:	48 8d 35 b2 28 00 00 	lea    0x28b2(%rip),%rsi        # 55e1 <array.3501+0x2a1>
    2d2f:	bf 01 00 00 00       	mov    $0x1,%edi
    2d34:	b8 00 00 00 00       	mov    $0x0,%eax
    2d39:	e8 22 f6 ff ff       	call   2360 <__printf_chk@plt>
    2d3e:	bf 08 00 00 00       	mov    $0x8,%edi
    2d43:	e8 48 f6 ff ff       	call   2390 <exit@plt>

0000000000002d48 <string_length>:
    2d48:	f3 0f 1e fa          	endbr64 
    2d4c:	b8 00 00 00 00       	mov    $0x0,%eax
    2d51:	80 3f 00             	cmpb   $0x0,(%rdi)
    2d54:	74 09                	je     2d5f <string_length+0x17>
    2d56:	48 83 c7 01          	add    $0x1,%rdi
    2d5a:	83 c0 01             	add    $0x1,%eax
    2d5d:	eb f2                	jmp    2d51 <string_length+0x9>
    2d5f:	c3                   	ret    

0000000000002d60 <strings_not_equal>:
    ;compare (%rdi)(input line 1) and (%rsi) (target)
    ;if not equal, return 1 (which results in explosion in phase_1)
    2d60:	f3 0f 1e fa          	endbr64 
    2d64:	41 54                	push   %r12
    2d66:	55                   	push   %rbp
    2d67:	53                   	push   %rbx
    2d68:	48 89 fb             	mov    %rdi,%rbx
    2d6b:	48 89 f5             	mov    %rsi,%rbp
    2d6e:	e8 d5 ff ff ff       	call   2d48 <string_length>;get the length of input
    2d73:	41 89 c4             	mov    %eax,%r12d
    2d76:	48 89 ef             	mov    %rbp,%rdi
    2d79:	e8 ca ff ff ff       	call   2d48 <string_length>;get the length of output:34
    2d7e:	41 39 c4             	cmp    %eax,%r12d
    2d81:	75 1d                	jne    2da0 <strings_not_equal+0x40>;if l1!=l2, return 1(not equal)
    2d83:	0f b6 03             	movzbl (%rbx),%eax
    2d86:	84 c0                	test   %al,%al  
    2d88:	74 0f                	je     2d99 <strings_not_equal+0x39> 
    2d8a:	38 45 00             	cmp    %al,0x0(%rbp) ;compare s1[i]ands2[i],return 1 if not equal, which results in explosion
    2d8d:	75 1b                	jne    2daa <strings_not_equal+0x4a>
    2d8f:	48 83 c3 01          	add    $0x1,%rbx
    2d93:	48 83 c5 01          	add    $0x1,%rbp ;pointer increased
    2d97:	eb ea                	jmp    2d83 <strings_not_equal+0x23>
    2d99:	b8 00 00 00 00       	mov    $0x0,%eax
    2d9e:	eb 05                	jmp    2da5 <strings_not_equal+0x45>
    2da0:	b8 01 00 00 00       	mov    $0x1,%eax
    2da5:	5b                   	pop    %rbx
    2da6:	5d                   	pop    %rbp
    2da7:	41 5c                	pop    %r12
    2da9:	c3                   	ret    
    2daa:	b8 01 00 00 00       	mov    $0x1,%eax
    2daf:	eb f4                	jmp    2da5 <strings_not_equal+0x45>

0000000000002db1 <initialize_bomb>:
    2db1:	f3 0f 1e fa          	endbr64 
    2db5:	55                   	push   %rbp
    2db6:	53                   	push   %rbx
    2db7:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    2dbe:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    2dc3:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    2dca:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    2dcf:	48 83 ec 58          	sub    $0x58,%rsp
    2dd3:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2dda:	00 00 
    2ddc:	48 89 84 24 48 20 00 	mov    %rax,0x2048(%rsp)
    2de3:	00 
    2de4:	31 c0                	xor    %eax,%eax
    2de6:	48 8d 35 cc fe ff ff 	lea    -0x134(%rip),%rsi        # 2cb9 <sig_handler>
    2ded:	bf 02 00 00 00       	mov    $0x2,%edi
    2df2:	e8 e9 f4 ff ff       	call   22e0 <signal@plt>
    2df7:	48 89 e7             	mov    %rsp,%rdi
    2dfa:	be 40 00 00 00       	mov    $0x40,%esi
    2dff:	e8 7c f5 ff ff       	call   2380 <gethostname@plt>
    2e04:	85 c0                	test   %eax,%eax
    2e06:	75 06                	jne    2e0e <initialize_bomb+0x5d>
    2e08:	89 c5                	mov    %eax,%ebp
    2e0a:	89 c3                	mov    %eax,%ebx
    2e0c:	eb 19                	jmp    2e27 <initialize_bomb+0x76>
    2e0e:	48 8d 3d a3 25 00 00 	lea    0x25a3(%rip),%rdi        # 53b8 <array.3501+0x78>
    2e15:	e8 56 f4 ff ff       	call   2270 <puts@plt>
    2e1a:	bf 08 00 00 00       	mov    $0x8,%edi
    2e1f:	e8 6c f5 ff ff       	call   2390 <exit@plt>
    2e24:	83 c3 01             	add    $0x1,%ebx
    2e27:	48 63 c3             	movslq %ebx,%rax
    2e2a:	48 8d 15 4f 64 00 00 	lea    0x644f(%rip),%rdx        # 9280 <host_table>
    2e31:	48 8b 3c c2          	mov    (%rdx,%rax,8),%rdi
    2e35:	48 85 ff             	test   %rdi,%rdi
    2e38:	74 11                	je     2e4b <initialize_bomb+0x9a>
    2e3a:	48 89 e6             	mov    %rsp,%rsi
    2e3d:	e8 fe f3 ff ff       	call   2240 <strcasecmp@plt>
    2e42:	85 c0                	test   %eax,%eax
    2e44:	75 de                	jne    2e24 <initialize_bomb+0x73>
    2e46:	bd 01 00 00 00       	mov    $0x1,%ebp
    2e4b:	85 ed                	test   %ebp,%ebp
    2e4d:	74 3b                	je     2e8a <initialize_bomb+0xd9>
    2e4f:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
    2e54:	e8 60 11 00 00       	call   3fb9 <init_driver>
    2e59:	85 c0                	test   %eax,%eax
    2e5b:	78 43                	js     2ea0 <initialize_bomb+0xef>
    2e5d:	bf 04 00 00 00       	mov    $0x4,%edi
    2e62:	e8 c9 f4 ff ff       	call   2330 <malloc@plt>
    2e67:	c7 00 11 fa 22 20    	movl   $0x2022fa11,(%rax)
    2e6d:	48 8b 8c 24 48 20 00 	mov    0x2048(%rsp),%rcx
    2e74:	00 
    2e75:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    2e7c:	00 00 
    2e7e:	75 45                	jne    2ec5 <initialize_bomb+0x114>
    2e80:	48 81 c4 58 20 00 00 	add    $0x2058,%rsp
    2e87:	5b                   	pop    %rbx
    2e88:	5d                   	pop    %rbp
    2e89:	c3                   	ret    
    2e8a:	48 8d 3d 5f 25 00 00 	lea    0x255f(%rip),%rdi        # 53f0 <array.3501+0xb0>
    2e91:	e8 da f3 ff ff       	call   2270 <puts@plt>
    2e96:	bf 08 00 00 00       	mov    $0x8,%edi
    2e9b:	e8 f0 f4 ff ff       	call   2390 <exit@plt>
    2ea0:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
    2ea5:	48 8d 35 46 27 00 00 	lea    0x2746(%rip),%rsi        # 55f2 <array.3501+0x2b2>
    2eac:	bf 01 00 00 00       	mov    $0x1,%edi
    2eb1:	b8 00 00 00 00       	mov    $0x0,%eax
    2eb6:	e8 a5 f4 ff ff       	call   2360 <__printf_chk@plt>
    2ebb:	bf 08 00 00 00       	mov    $0x8,%edi
    2ec0:	e8 cb f4 ff ff       	call   2390 <exit@plt>
    2ec5:	e8 c6 f3 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000002eca <initialize_bomb_solve>:
    2eca:	f3 0f 1e fa          	endbr64 
    2ece:	c3                   	ret    

0000000000002ecf <blank_line>:
    2ecf:	f3 0f 1e fa          	endbr64 
    2ed3:	55                   	push   %rbp
    2ed4:	53                   	push   %rbx
    2ed5:	48 83 ec 08          	sub    $0x8,%rsp
    2ed9:	48 89 fd             	mov    %rdi,%rbp
    2edc:	0f b6 5d 00          	movzbl 0x0(%rbp),%ebx
    2ee0:	84 db                	test   %bl,%bl
    2ee2:	74 1e                	je     2f02 <blank_line+0x33>
    2ee4:	e8 e7 f4 ff ff       	call   23d0 <__ctype_b_loc@plt>
    2ee9:	48 8b 00             	mov    (%rax),%rax
    2eec:	48 83 c5 01          	add    $0x1,%rbp
    2ef0:	48 0f be db          	movsbq %bl,%rbx
    2ef4:	f6 44 58 01 20       	testb  $0x20,0x1(%rax,%rbx,2)
    2ef9:	75 e1                	jne    2edc <blank_line+0xd>
    2efb:	b8 00 00 00 00       	mov    $0x0,%eax
    2f00:	eb 05                	jmp    2f07 <blank_line+0x38>
    2f02:	b8 01 00 00 00       	mov    $0x1,%eax
    2f07:	48 83 c4 08          	add    $0x8,%rsp
    2f0b:	5b                   	pop    %rbx
    2f0c:	5d                   	pop    %rbp
    2f0d:	c3                   	ret    

0000000000002f0e <skip>:
    2f0e:	f3 0f 1e fa          	endbr64 
    2f12:	53                   	push   %rbx
    2f13:	48 63 15 52 67 00 00 	movslq 0x6752(%rip),%rdx        # 966c <num_input_strings>
    2f1a:	48 89 d0             	mov    %rdx,%rax
    2f1d:	48 c1 e0 04          	shl    $0x4,%rax
    2f21:	48 29 d0             	sub    %rdx,%rax
    2f24:	48 8d 15 55 67 00 00 	lea    0x6755(%rip),%rdx        # 9680 <input_strings>
    2f2b:	48 8d 3c c2          	lea    (%rdx,%rax,8),%rdi
    2f2f:	48 8b 15 3a 67 00 00 	mov    0x673a(%rip),%rdx        # 9670 <infile>
    2f36:	be 78 00 00 00       	mov    $0x78,%esi
    2f3b:	e8 90 f3 ff ff       	call   22d0 <fgets@plt>
    2f40:	48 89 c3             	mov    %rax,%rbx
    2f43:	48 85 c0             	test   %rax,%rax
    2f46:	74 0c                	je     2f54 <skip+0x46>
    2f48:	48 89 c7             	mov    %rax,%rdi
    2f4b:	e8 7f ff ff ff       	call   2ecf <blank_line>
    2f50:	85 c0                	test   %eax,%eax
    2f52:	75 bf                	jne    2f13 <skip+0x5>
    2f54:	48 89 d8             	mov    %rbx,%rax
    2f57:	5b                   	pop    %rbx
    2f58:	c3                   	ret    

0000000000002f59 <send_msg>:
    2f59:	f3 0f 1e fa          	endbr64 
    2f5d:	41 55                	push   %r13
    2f5f:	41 54                	push   %r12
    2f61:	55                   	push   %rbp
    2f62:	53                   	push   %rbx
    2f63:	4c 8d 9c 24 00 c0 ff 	lea    -0x4000(%rsp),%r11
    2f6a:	ff 
    2f6b:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    2f72:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    2f77:	4c 39 dc             	cmp    %r11,%rsp
    2f7a:	75 ef                	jne    2f6b <send_msg+0x12>
    2f7c:	48 83 ec 58          	sub    $0x58,%rsp
    2f80:	89 fa                	mov    %edi,%edx
    2f82:	49 89 f4             	mov    %rsi,%r12
    2f85:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2f8c:	00 00 
    2f8e:	48 89 84 24 48 40 00 	mov    %rax,0x4048(%rsp)
    2f95:	00 
    2f96:	31 c0                	xor    %eax,%eax
    2f98:	8b 35 ce 66 00 00    	mov    0x66ce(%rip),%esi        # 966c <num_input_strings>
    2f9e:	8d 46 ff             	lea    -0x1(%rsi),%eax
    2fa1:	48 98                	cltq   
    2fa3:	48 89 c1             	mov    %rax,%rcx
    2fa6:	48 c1 e1 04          	shl    $0x4,%rcx
    2faa:	48 29 c1             	sub    %rax,%rcx
    2fad:	48 89 c8             	mov    %rcx,%rax
    2fb0:	48 8d 0d c9 66 00 00 	lea    0x66c9(%rip),%rcx        # 9680 <input_strings>
    2fb7:	4c 8d 04 c1          	lea    (%rcx,%rax,8),%r8
    2fbb:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    2fc2:	b8 00 00 00 00       	mov    $0x0,%eax
    2fc7:	4c 89 c7             	mov    %r8,%rdi
    2fca:	f2 ae                	repnz scas %es:(%rdi),%al
    2fcc:	48 89 c8             	mov    %rcx,%rax
    2fcf:	48 f7 d0             	not    %rax
    2fd2:	48 83 c0 63          	add    $0x63,%rax
    2fd6:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
    2fdc:	0f 87 b3 00 00 00    	ja     3095 <send_msg+0x13c>
    2fe2:	85 d2                	test   %edx,%edx
    2fe4:	0f 84 cb 00 00 00    	je     30b5 <send_msg+0x15c>
    2fea:	48 8d 05 24 26 00 00 	lea    0x2624(%rip),%rax        # 5615 <array.3501+0x2d5>
    2ff1:	48 8d 5c 24 40       	lea    0x40(%rsp),%rbx
    2ff6:	48 83 ec 08          	sub    $0x8,%rsp
    2ffa:	41 50                	push   %r8
    2ffc:	56                   	push   %rsi
    2ffd:	50                   	push   %rax
    2ffe:	4c 8d 0d 3b 59 00 00 	lea    0x593b(%rip),%r9        # 8940 <authkey>
    3005:	44 8b 05 34 61 00 00 	mov    0x6134(%rip),%r8d        # 9140 <bomb_id>
    300c:	48 8d 0d 0a 26 00 00 	lea    0x260a(%rip),%rcx        # 561d <array.3501+0x2dd>
    3013:	ba 00 20 00 00       	mov    $0x2000,%edx
    3018:	be 01 00 00 00       	mov    $0x1,%esi
    301d:	48 89 df             	mov    %rbx,%rdi
    3020:	b8 00 00 00 00       	mov    $0x0,%eax
    3025:	e8 b6 f3 ff ff       	call   23e0 <__sprintf_chk@plt>
    302a:	48 83 c4 20          	add    $0x20,%rsp
    302e:	4c 8d 8c 24 40 20 00 	lea    0x2040(%rsp),%r9
    3035:	00 
    3036:	41 b8 00 00 00 00    	mov    $0x0,%r8d
    303c:	48 89 d9             	mov    %rbx,%rcx
    303f:	48 8d 15 fa 50 00 00 	lea    0x50fa(%rip),%rdx        # 8140 <lab>
    3046:	48 8d 35 f3 54 00 00 	lea    0x54f3(%rip),%rsi        # 8540 <course>
    304d:	48 8d 3d ec 5c 00 00 	lea    0x5cec(%rip),%rdi        # 8d40 <userid>
    3054:	e8 70 11 00 00       	call   41c9 <driver_post>
    3059:	89 c5                	mov    %eax,%ebp
    305b:	48 89 e7             	mov    %rsp,%rdi
    305e:	be 40 00 00 00       	mov    $0x40,%esi
    3063:	e8 18 f3 ff ff       	call   2380 <gethostname@plt>
    3068:	41 89 c5             	mov    %eax,%r13d
    306b:	85 c0                	test   %eax,%eax
    306d:	75 52                	jne    30c1 <send_msg+0x168>
    306f:	89 c3                	mov    %eax,%ebx
    3071:	48 63 c3             	movslq %ebx,%rax
    3074:	48 8d 15 05 62 00 00 	lea    0x6205(%rip),%rdx        # 9280 <host_table>
    307b:	48 8b 3c c2          	mov    (%rdx,%rax,8),%rdi
    307f:	48 85 ff             	test   %rdi,%rdi
    3082:	74 59                	je     30dd <send_msg+0x184>
    3084:	48 89 e6             	mov    %rsp,%rsi
    3087:	e8 b4 f1 ff ff       	call   2240 <strcasecmp@plt>
    308c:	85 c0                	test   %eax,%eax
    308e:	74 47                	je     30d7 <send_msg+0x17e>
    3090:	83 c3 01             	add    $0x1,%ebx
    3093:	eb dc                	jmp    3071 <send_msg+0x118>
    3095:	48 8d 35 8c 23 00 00 	lea    0x238c(%rip),%rsi        # 5428 <array.3501+0xe8>
    309c:	bf 01 00 00 00       	mov    $0x1,%edi
    30a1:	b8 00 00 00 00       	mov    $0x0,%eax
    30a6:	e8 b5 f2 ff ff       	call   2360 <__printf_chk@plt>
    30ab:	bf 08 00 00 00       	mov    $0x8,%edi
    30b0:	e8 db f2 ff ff       	call   2390 <exit@plt>
    30b5:	48 8d 05 50 25 00 00 	lea    0x2550(%rip),%rax        # 560c <array.3501+0x2cc>
    30bc:	e9 30 ff ff ff       	jmp    2ff1 <send_msg+0x98>
    30c1:	48 8d 3d 88 23 00 00 	lea    0x2388(%rip),%rdi        # 5450 <array.3501+0x110>
    30c8:	e8 a3 f1 ff ff       	call   2270 <puts@plt>
    30cd:	bf 08 00 00 00       	mov    $0x8,%edi
    30d2:	e8 b9 f2 ff ff       	call   2390 <exit@plt>
    30d7:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    30dd:	41 83 fd 01          	cmp    $0x1,%r13d
    30e1:	74 25                	je     3108 <send_msg+0x1af>
    30e3:	85 ed                	test   %ebp,%ebp
    30e5:	78 34                	js     311b <send_msg+0x1c2>
    30e7:	48 8b 84 24 48 40 00 	mov    0x4048(%rsp),%rax
    30ee:	00 
    30ef:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    30f6:	00 00 
    30f8:	75 38                	jne    3132 <send_msg+0x1d9>
    30fa:	48 81 c4 58 40 00 00 	add    $0x4058,%rsp
    3101:	5b                   	pop    %rbx
    3102:	5d                   	pop    %rbp
    3103:	41 5c                	pop    %r12
    3105:	41 5d                	pop    %r13
    3107:	c3                   	ret    
    3108:	48 63 db             	movslq %ebx,%rbx
    310b:	48 8d 05 ee 25 00 00 	lea    0x25ee(%rip),%rax        # 5700 <secret_tokens>
    3112:	8b 04 98             	mov    (%rax,%rbx,4),%eax
    3115:	41 89 04 24          	mov    %eax,(%r12)
    3119:	eb c8                	jmp    30e3 <send_msg+0x18a>
    311b:	48 8d bc 24 40 20 00 	lea    0x2040(%rsp),%rdi
    3122:	00 
    3123:	e8 48 f1 ff ff       	call   2270 <puts@plt>
    3128:	bf 00 00 00 00       	mov    $0x0,%edi
    312d:	e8 5e f2 ff ff       	call   2390 <exit@plt>
    3132:	e8 59 f1 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000003137 <explode_bomb>:
    3137:	f3 0f 1e fa          	endbr64 
    313b:	55                   	push   %rbp
    313c:	53                   	push   %rbx
    313d:	48 83 ec 68          	sub    $0x68,%rsp
    3141:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3148:	00 00 
    314a:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    314f:	31 c0                	xor    %eax,%eax
    3151:	48 8d 3d d4 24 00 00 	lea    0x24d4(%rip),%rdi        # 562c <array.3501+0x2ec>
    3158:	e8 13 f1 ff ff       	call   2270 <puts@plt>
    315d:	48 8d 3d d1 24 00 00 	lea    0x24d1(%rip),%rdi        # 5635 <array.3501+0x2f5>
    3164:	e8 07 f1 ff ff       	call   2270 <puts@plt>
    3169:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
    316e:	be 40 00 00 00       	mov    $0x40,%esi
    3173:	e8 08 f2 ff ff       	call   2380 <gethostname@plt>
    3178:	85 c0                	test   %eax,%eax
    317a:	75 2a                	jne    31a6 <explode_bomb+0x6f>
    317c:	89 c5                	mov    %eax,%ebp
    317e:	89 c3                	mov    %eax,%ebx
    3180:	48 63 c3             	movslq %ebx,%rax
    3183:	48 8d 15 f6 60 00 00 	lea    0x60f6(%rip),%rdx        # 9280 <host_table>
    318a:	48 8b 3c c2          	mov    (%rdx,%rax,8),%rdi
    318e:	48 85 ff             	test   %rdi,%rdi
    3191:	74 2e                	je     31c1 <explode_bomb+0x8a>
    3193:	48 8d 74 24 10       	lea    0x10(%rsp),%rsi
    3198:	e8 a3 f0 ff ff       	call   2240 <strcasecmp@plt>
    319d:	85 c0                	test   %eax,%eax
    319f:	74 1b                	je     31bc <explode_bomb+0x85>
    31a1:	83 c3 01             	add    $0x1,%ebx
    31a4:	eb da                	jmp    3180 <explode_bomb+0x49>
    31a6:	48 8d 3d a3 22 00 00 	lea    0x22a3(%rip),%rdi        # 5450 <array.3501+0x110>
    31ad:	e8 be f0 ff ff       	call   2270 <puts@plt>
    31b2:	bf 08 00 00 00       	mov    $0x8,%edi
    31b7:	e8 d4 f1 ff ff       	call   2390 <exit@plt>
    31bc:	bd 01 00 00 00       	mov    $0x1,%ebp
    31c1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%rsp)
    31c8:	00 
    31c9:	48 8d 74 24 0c       	lea    0xc(%rsp),%rsi
    31ce:	bf 00 00 00 00       	mov    $0x0,%edi
    31d3:	e8 81 fd ff ff       	call   2f59 <send_msg>
    31d8:	48 63 db             	movslq %ebx,%rbx
    31db:	48 8d 05 1e 25 00 00 	lea    0x251e(%rip),%rax        # 5700 <secret_tokens>
    31e2:	8b 4c 24 0c          	mov    0xc(%rsp),%ecx
    31e6:	39 0c 98             	cmp    %ecx,(%rax,%rbx,4)
    31e9:	75 04                	jne    31ef <explode_bomb+0xb8>
    31eb:	85 ed                	test   %ebp,%ebp
    31ed:	75 20                	jne    320f <explode_bomb+0xd8>
    31ef:	48 8d 35 82 22 00 00 	lea    0x2282(%rip),%rsi        # 5478 <array.3501+0x138>
    31f6:	bf 01 00 00 00       	mov    $0x1,%edi
    31fb:	b8 00 00 00 00       	mov    $0x0,%eax
    3200:	e8 5b f1 ff ff       	call   2360 <__printf_chk@plt>
    3205:	bf 08 00 00 00       	mov    $0x8,%edi
    320a:	e8 81 f1 ff ff       	call   2390 <exit@plt>
    320f:	48 8d 3d ea 1f 00 00 	lea    0x1fea(%rip),%rdi        # 5200 <_IO_stdin_used+0x200>
    3216:	e8 55 f0 ff ff       	call   2270 <puts@plt>
    321b:	bf 08 00 00 00       	mov    $0x8,%edi
    3220:	e8 6b f1 ff ff       	call   2390 <exit@plt>

0000000000003225 <read_six_numbers>:
    3225:	f3 0f 1e fa          	endbr64 
    3229:	48 83 ec 08          	sub    $0x8,%rsp
    322d:	48 89 f2             	mov    %rsi,%rdx
    3230:	48 8d 4e 04          	lea    0x4(%rsi),%rcx
    3234:	48 8d 46 14          	lea    0x14(%rsi),%rax
    3238:	50                   	push   %rax
    3239:	48 8d 46 10          	lea    0x10(%rsi),%rax
    323d:	50                   	push   %rax
    323e:	4c 8d 4e 0c          	lea    0xc(%rsi),%r9
    3242:	4c 8d 46 08          	lea    0x8(%rsi),%r8
    3246:	48 8d 35 ff 23 00 00 	lea    0x23ff(%rip),%rsi        # 564c <array.3501+0x30c>
    324d:	b8 00 00 00 00       	mov    $0x0,%eax
    3252:	e8 f9 f0 ff ff       	call   2350 <__isoc99_sscanf@plt>
    3257:	48 83 c4 10          	add    $0x10,%rsp
    325b:	83 f8 05             	cmp    $0x5,%eax ;if <=5
    325e:	7e 05                	jle    3265 <read_six_numbers+0x40> ;bomb!
    3260:	48 83 c4 08          	add    $0x8,%rsp
    3264:	c3                   	ret    
    3265:	e8 cd fe ff ff       	call   3137 <explode_bomb>

000000000000326a <read_line>:
    326a:	f3 0f 1e fa          	endbr64 
    326e:	48 83 ec 08          	sub    $0x8,%rsp
    3272:	b8 00 00 00 00       	mov    $0x0,%eax
    3277:	e8 92 fc ff ff       	call   2f0e <skip>
    327c:	48 85 c0             	test   %rax,%rax
    327f:	74 72                	je     32f3 <read_line+0x89>
    3281:	8b 15 e5 63 00 00    	mov    0x63e5(%rip),%edx        # 966c <num_input_strings>
    3287:	48 63 ca             	movslq %edx,%rcx
    328a:	48 89 c8             	mov    %rcx,%rax
    328d:	48 c1 e0 04          	shl    $0x4,%rax
    3291:	48 29 c8             	sub    %rcx,%rax
    3294:	48 8d 0d e5 63 00 00 	lea    0x63e5(%rip),%rcx        # 9680 <input_strings>
    329b:	48 8d 34 c1          	lea    (%rcx,%rax,8),%rsi
    329f:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    32a6:	b8 00 00 00 00       	mov    $0x0,%eax
    32ab:	48 89 f7             	mov    %rsi,%rdi
    32ae:	f2 ae                	repnz scas %es:(%rdi),%al
    32b0:	48 f7 d1             	not    %rcx
    32b3:	48 83 e9 01          	sub    $0x1,%rcx
    32b7:	83 f9 76             	cmp    $0x76,%ecx
    32ba:	0f 8f ab 00 00 00    	jg     336b <read_line+0x101>
    32c0:	83 e9 01             	sub    $0x1,%ecx
    32c3:	48 63 c9             	movslq %ecx,%rcx
    32c6:	48 63 fa             	movslq %edx,%rdi
    32c9:	48 89 f8             	mov    %rdi,%rax
    32cc:	48 c1 e0 04          	shl    $0x4,%rax
    32d0:	48 29 f8             	sub    %rdi,%rax
    32d3:	48 8d 3d a6 63 00 00 	lea    0x63a6(%rip),%rdi        # 9680 <input_strings>
    32da:	48 8d 04 c7          	lea    (%rdi,%rax,8),%rax
    32de:	c6 04 08 00          	movb   $0x0,(%rax,%rcx,1)
    32e2:	83 c2 01             	add    $0x1,%edx
    32e5:	89 15 81 63 00 00    	mov    %edx,0x6381(%rip)        # 966c <num_input_strings>
    32eb:	48 89 f0             	mov    %rsi,%rax
    32ee:	48 83 c4 08          	add    $0x8,%rsp
    32f2:	c3                   	ret    
    32f3:	48 8b 05 56 63 00 00 	mov    0x6356(%rip),%rax        # 9650 <stdin@GLIBC_2.2.5>
    32fa:	48 39 05 6f 63 00 00 	cmp    %rax,0x636f(%rip)        # 9670 <infile>
    3301:	74 1b                	je     331e <read_line+0xb4>
    3303:	48 8d 3d 72 23 00 00 	lea    0x2372(%rip),%rdi        # 567c <array.3501+0x33c>
    330a:	e8 11 ef ff ff       	call   2220 <getenv@plt>
    330f:	48 85 c0             	test   %rax,%rax
    3312:	74 20                	je     3334 <read_line+0xca>
    3314:	bf 00 00 00 00       	mov    $0x0,%edi
    3319:	e8 72 f0 ff ff       	call   2390 <exit@plt>
    331e:	48 8d 3d 39 23 00 00 	lea    0x2339(%rip),%rdi        # 565e <array.3501+0x31e>
    3325:	e8 46 ef ff ff       	call   2270 <puts@plt>
    332a:	bf 08 00 00 00       	mov    $0x8,%edi
    332f:	e8 5c f0 ff ff       	call   2390 <exit@plt>
    3334:	48 8b 05 15 63 00 00 	mov    0x6315(%rip),%rax        # 9650 <stdin@GLIBC_2.2.5>
    333b:	48 89 05 2e 63 00 00 	mov    %rax,0x632e(%rip)        # 9670 <infile>
    3342:	b8 00 00 00 00       	mov    $0x0,%eax
    3347:	e8 c2 fb ff ff       	call   2f0e <skip>
    334c:	48 85 c0             	test   %rax,%rax
    334f:	0f 85 2c ff ff ff    	jne    3281 <read_line+0x17>
    3355:	48 8d 3d 02 23 00 00 	lea    0x2302(%rip),%rdi        # 565e <array.3501+0x31e>
    335c:	e8 0f ef ff ff       	call   2270 <puts@plt>
    3361:	bf 00 00 00 00       	mov    $0x0,%edi
    3366:	e8 25 f0 ff ff       	call   2390 <exit@plt>
    336b:	48 8d 3d 15 23 00 00 	lea    0x2315(%rip),%rdi        # 5687 <array.3501+0x347>
    3372:	e8 f9 ee ff ff       	call   2270 <puts@plt>
    3377:	8b 05 ef 62 00 00    	mov    0x62ef(%rip),%eax        # 966c <num_input_strings>
    337d:	8d 50 01             	lea    0x1(%rax),%edx
    3380:	89 15 e6 62 00 00    	mov    %edx,0x62e6(%rip)        # 966c <num_input_strings>
    3386:	48 98                	cltq   
    3388:	48 6b c0 78          	imul   $0x78,%rax,%rax
    338c:	48 8d 15 ed 62 00 00 	lea    0x62ed(%rip),%rdx        # 9680 <input_strings>
    3393:	48 be 2a 2a 2a 74 72 	movabs $0x636e7572742a2a2a,%rsi
    339a:	75 6e 63 
    339d:	48 bf 61 74 65 64 2a 	movabs $0x2a2a2a64657461,%rdi
    33a4:	2a 2a 00 
    33a7:	48 89 34 02          	mov    %rsi,(%rdx,%rax,1)
    33ab:	48 89 7c 02 08       	mov    %rdi,0x8(%rdx,%rax,1)
    33b0:	e8 82 fd ff ff       	call   3137 <explode_bomb>

00000000000033b5 <phase_defused>:
    33b5:	f3 0f 1e fa          	endbr64 
    33b9:	41 54                	push   %r12
    33bb:	55                   	push   %rbp
    33bc:	53                   	push   %rbx
    33bd:	48 83 ec 50          	sub    $0x50,%rsp
    33c1:	49 89 fc             	mov    %rdi,%r12
    33c4:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    33cb:	00 00 
    33cd:	48 89 44 24 48       	mov    %rax,0x48(%rsp)
    33d2:	31 c0                	xor    %eax,%eax
    33d4:	48 89 e7             	mov    %rsp,%rdi
    33d7:	be 40 00 00 00       	mov    $0x40,%esi
    33dc:	e8 9f ef ff ff       	call   2380 <gethostname@plt>
    33e1:	85 c0                	test   %eax,%eax
    33e3:	75 06                	jne    33eb <phase_defused+0x36>
    33e5:	89 c5                	mov    %eax,%ebp
    33e7:	89 c3                	mov    %eax,%ebx
    33e9:	eb 19                	jmp    3404 <phase_defused+0x4f>
    33eb:	48 8d 3d 5e 20 00 00 	lea    0x205e(%rip),%rdi        # 5450 <array.3501+0x110>
    33f2:	e8 79 ee ff ff       	call   2270 <puts@plt>
    33f7:	bf 08 00 00 00       	mov    $0x8,%edi
    33fc:	e8 8f ef ff ff       	call   2390 <exit@plt>
    3401:	83 c3 01             	add    $0x1,%ebx
    3404:	48 63 c3             	movslq %ebx,%rax
    3407:	48 8d 15 72 5e 00 00 	lea    0x5e72(%rip),%rdx        # 9280 <host_table>
    340e:	48 8b 3c c2          	mov    (%rdx,%rax,8),%rdi
    3412:	48 85 ff             	test   %rdi,%rdi
    3415:	74 11                	je     3428 <phase_defused+0x73>
    3417:	48 89 e6             	mov    %rsp,%rsi
    341a:	e8 21 ee ff ff       	call   2240 <strcasecmp@plt>
    341f:	85 c0                	test   %eax,%eax
    3421:	75 de                	jne    3401 <phase_defused+0x4c>
    3423:	bd 01 00 00 00       	mov    $0x1,%ebp
    3428:	41 c7 04 24 00 00 00 	movl   $0x0,(%r12)
    342f:	00 
    3430:	4c 89 e6             	mov    %r12,%rsi
    3433:	bf 01 00 00 00       	mov    $0x1,%edi
    3438:	e8 1c fb ff ff       	call   2f59 <send_msg>
    343d:	48 63 db             	movslq %ebx,%rbx
    3440:	48 8d 05 b9 22 00 00 	lea    0x22b9(%rip),%rax        # 5700 <secret_tokens>
    3447:	8b 04 98             	mov    (%rax,%rbx,4),%eax
    344a:	41 39 04 24          	cmp    %eax,(%r12)
    344e:	75 2a                	jne    347a <phase_defused+0xc5>
    3450:	85 ed                	test   %ebp,%ebp
    3452:	74 26                	je     347a <phase_defused+0xc5>
    3454:	83 3d 11 62 00 00 06 	cmpl   $0x6,0x6211(%rip)        # 966c <num_input_strings>
    345b:	74 3d                	je     349a <phase_defused+0xe5>
    345d:	48 8b 44 24 48       	mov    0x48(%rsp),%rax
    3462:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    3469:	00 00 
    346b:	0f 85 87 00 00 00    	jne    34f8 <phase_defused+0x143>
    3471:	48 83 c4 50          	add    $0x50,%rsp
    3475:	5b                   	pop    %rbx
    3476:	5d                   	pop    %rbp
    3477:	41 5c                	pop    %r12
    3479:	c3                   	ret    
    347a:	48 8d 35 f7 1f 00 00 	lea    0x1ff7(%rip),%rsi        # 5478 <array.3501+0x138>
    3481:	bf 01 00 00 00       	mov    $0x1,%edi
    3486:	b8 00 00 00 00       	mov    $0x0,%eax
    348b:	e8 d0 ee ff ff       	call   2360 <__printf_chk@plt>
    3490:	bf 08 00 00 00       	mov    $0x8,%edi
    3495:	e8 f6 ee ff ff       	call   2390 <exit@plt>
    349a:	e8 d9 f1 ff ff       	call   2678 <abracadabra>
    349f:	85 c0                	test   %eax,%eax
    34a1:	75 1a                	jne    34bd <phase_defused+0x108>
    34a3:	48 8d 3d b6 20 00 00 	lea    0x20b6(%rip),%rdi        # 5560 <array.3501+0x220>
    34aa:	e8 c1 ed ff ff       	call   2270 <puts@plt>
    34af:	48 8d 3d da 20 00 00 	lea    0x20da(%rip),%rdi        # 5590 <array.3501+0x250>
    34b6:	e8 b5 ed ff ff       	call   2270 <puts@plt>
    34bb:	eb a0                	jmp    345d <phase_defused+0xa8>
    34bd:	e8 67 f2 ff ff       	call   2729 <alohomora>
    34c2:	85 c0                	test   %eax,%eax
    34c4:	74 24                	je     34ea <phase_defused+0x135>
    34c6:	48 8d 3d f3 1f 00 00 	lea    0x1ff3(%rip),%rdi        # 54c0 <array.3501+0x180>
    34cd:	e8 9e ed ff ff       	call   2270 <puts@plt>
    34d2:	48 8d 3d 0f 20 00 00 	lea    0x200f(%rip),%rdi        # 54e8 <array.3501+0x1a8>
    34d9:	e8 92 ed ff ff       	call   2270 <puts@plt>
    34de:	b8 00 00 00 00       	mov    $0x0,%eax
    34e3:	e8 1e f7 ff ff       	call   2c06 <secret_phase>
    34e8:	eb b9                	jmp    34a3 <phase_defused+0xee>
    34ea:	48 8d 3d 2f 20 00 00 	lea    0x202f(%rip),%rdi        # 5520 <array.3501+0x1e0>
    34f1:	e8 7a ed ff ff       	call   2270 <puts@plt>
    34f6:	eb ab                	jmp    34a3 <phase_defused+0xee>
    34f8:	e8 93 ed ff ff       	call   2290 <__stack_chk_fail@plt>

00000000000034fd <rio_readinitb>:
    34fd:	89 37                	mov    %esi,(%rdi)
    34ff:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%rdi)
    3506:	48 8d 47 10          	lea    0x10(%rdi),%rax
    350a:	48 89 47 08          	mov    %rax,0x8(%rdi)
    350e:	c3                   	ret    

000000000000350f <sigalrm_handler>:
    350f:	f3 0f 1e fa          	endbr64 
    3513:	50                   	push   %rax
    3514:	58                   	pop    %rax
    3515:	48 83 ec 08          	sub    $0x8,%rsp
    3519:	b9 00 00 00 00       	mov    $0x0,%ecx
    351e:	48 8d 15 fb 21 00 00 	lea    0x21fb(%rip),%rdx        # 5720 <secret_tokens+0x20>
    3525:	be 01 00 00 00       	mov    $0x1,%esi
    352a:	48 8b 3d 2f 61 00 00 	mov    0x612f(%rip),%rdi        # 9660 <stderr@GLIBC_2.2.5>
    3531:	b8 00 00 00 00       	mov    $0x0,%eax
    3536:	e8 75 ee ff ff       	call   23b0 <__fprintf_chk@plt>
    353b:	bf 01 00 00 00       	mov    $0x1,%edi
    3540:	e8 4b ee ff ff       	call   2390 <exit@plt>

0000000000003545 <rio_writen>:
    3545:	41 55                	push   %r13
    3547:	41 54                	push   %r12
    3549:	55                   	push   %rbp
    354a:	53                   	push   %rbx
    354b:	48 83 ec 08          	sub    $0x8,%rsp
    354f:	41 89 fc             	mov    %edi,%r12d
    3552:	48 89 f5             	mov    %rsi,%rbp
    3555:	49 89 d5             	mov    %rdx,%r13
    3558:	48 89 d3             	mov    %rdx,%rbx
    355b:	eb 06                	jmp    3563 <rio_writen+0x1e>
    355d:	48 29 c3             	sub    %rax,%rbx
    3560:	48 01 c5             	add    %rax,%rbp
    3563:	48 85 db             	test   %rbx,%rbx
    3566:	74 24                	je     358c <rio_writen+0x47>
    3568:	48 89 da             	mov    %rbx,%rdx
    356b:	48 89 ee             	mov    %rbp,%rsi
    356e:	44 89 e7             	mov    %r12d,%edi
    3571:	e8 0a ed ff ff       	call   2280 <write@plt>
    3576:	48 85 c0             	test   %rax,%rax
    3579:	7f e2                	jg     355d <rio_writen+0x18>
    357b:	e8 d0 ec ff ff       	call   2250 <__errno_location@plt>
    3580:	83 38 04             	cmpl   $0x4,(%rax)
    3583:	75 15                	jne    359a <rio_writen+0x55>
    3585:	b8 00 00 00 00       	mov    $0x0,%eax
    358a:	eb d1                	jmp    355d <rio_writen+0x18>
    358c:	4c 89 e8             	mov    %r13,%rax
    358f:	48 83 c4 08          	add    $0x8,%rsp
    3593:	5b                   	pop    %rbx
    3594:	5d                   	pop    %rbp
    3595:	41 5c                	pop    %r12
    3597:	41 5d                	pop    %r13
    3599:	c3                   	ret    
    359a:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
    35a1:	eb ec                	jmp    358f <rio_writen+0x4a>

00000000000035a3 <rio_read>:
    35a3:	41 55                	push   %r13
    35a5:	41 54                	push   %r12
    35a7:	55                   	push   %rbp
    35a8:	53                   	push   %rbx
    35a9:	48 83 ec 08          	sub    $0x8,%rsp
    35ad:	48 89 fb             	mov    %rdi,%rbx
    35b0:	49 89 f5             	mov    %rsi,%r13
    35b3:	49 89 d4             	mov    %rdx,%r12
    35b6:	eb 17                	jmp    35cf <rio_read+0x2c>
    35b8:	e8 93 ec ff ff       	call   2250 <__errno_location@plt>
    35bd:	83 38 04             	cmpl   $0x4,(%rax)
    35c0:	74 0d                	je     35cf <rio_read+0x2c>
    35c2:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
    35c9:	eb 54                	jmp    361f <rio_read+0x7c>
    35cb:	48 89 6b 08          	mov    %rbp,0x8(%rbx)
    35cf:	8b 6b 04             	mov    0x4(%rbx),%ebp
    35d2:	85 ed                	test   %ebp,%ebp
    35d4:	7f 23                	jg     35f9 <rio_read+0x56>
    35d6:	48 8d 6b 10          	lea    0x10(%rbx),%rbp
    35da:	8b 3b                	mov    (%rbx),%edi
    35dc:	ba 00 20 00 00       	mov    $0x2000,%edx
    35e1:	48 89 ee             	mov    %rbp,%rsi
    35e4:	e8 d7 ec ff ff       	call   22c0 <read@plt>
    35e9:	89 43 04             	mov    %eax,0x4(%rbx)
    35ec:	85 c0                	test   %eax,%eax
    35ee:	78 c8                	js     35b8 <rio_read+0x15>
    35f0:	75 d9                	jne    35cb <rio_read+0x28>
    35f2:	b8 00 00 00 00       	mov    $0x0,%eax
    35f7:	eb 26                	jmp    361f <rio_read+0x7c>
    35f9:	89 e8                	mov    %ebp,%eax
    35fb:	4c 39 e0             	cmp    %r12,%rax
    35fe:	72 03                	jb     3603 <rio_read+0x60>
    3600:	44 89 e5             	mov    %r12d,%ebp
    3603:	4c 63 e5             	movslq %ebp,%r12
    3606:	48 8b 73 08          	mov    0x8(%rbx),%rsi
    360a:	4c 89 e2             	mov    %r12,%rdx
    360d:	4c 89 ef             	mov    %r13,%rdi
    3610:	e8 0b ed ff ff       	call   2320 <memcpy@plt>
    3615:	4c 01 63 08          	add    %r12,0x8(%rbx)
    3619:	29 6b 04             	sub    %ebp,0x4(%rbx)
    361c:	4c 89 e0             	mov    %r12,%rax
    361f:	48 83 c4 08          	add    $0x8,%rsp
    3623:	5b                   	pop    %rbx
    3624:	5d                   	pop    %rbp
    3625:	41 5c                	pop    %r12
    3627:	41 5d                	pop    %r13
    3629:	c3                   	ret    

000000000000362a <rio_readlineb>:
    362a:	41 55                	push   %r13
    362c:	41 54                	push   %r12
    362e:	55                   	push   %rbp
    362f:	53                   	push   %rbx
    3630:	48 83 ec 18          	sub    $0x18,%rsp
    3634:	49 89 fd             	mov    %rdi,%r13
    3637:	48 89 f5             	mov    %rsi,%rbp
    363a:	49 89 d4             	mov    %rdx,%r12
    363d:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3644:	00 00 
    3646:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    364b:	31 c0                	xor    %eax,%eax
    364d:	bb 01 00 00 00       	mov    $0x1,%ebx
    3652:	eb 18                	jmp    366c <rio_readlineb+0x42>
    3654:	85 c0                	test   %eax,%eax
    3656:	75 65                	jne    36bd <rio_readlineb+0x93>
    3658:	48 83 fb 01          	cmp    $0x1,%rbx
    365c:	75 3d                	jne    369b <rio_readlineb+0x71>
    365e:	b8 00 00 00 00       	mov    $0x0,%eax
    3663:	eb 3d                	jmp    36a2 <rio_readlineb+0x78>
    3665:	48 83 c3 01          	add    $0x1,%rbx
    3669:	48 89 d5             	mov    %rdx,%rbp
    366c:	4c 39 e3             	cmp    %r12,%rbx
    366f:	73 2a                	jae    369b <rio_readlineb+0x71>
    3671:	48 8d 74 24 07       	lea    0x7(%rsp),%rsi
    3676:	ba 01 00 00 00       	mov    $0x1,%edx
    367b:	4c 89 ef             	mov    %r13,%rdi
    367e:	e8 20 ff ff ff       	call   35a3 <rio_read>
    3683:	83 f8 01             	cmp    $0x1,%eax
    3686:	75 cc                	jne    3654 <rio_readlineb+0x2a>
    3688:	48 8d 55 01          	lea    0x1(%rbp),%rdx
    368c:	0f b6 44 24 07       	movzbl 0x7(%rsp),%eax
    3691:	88 45 00             	mov    %al,0x0(%rbp)
    3694:	3c 0a                	cmp    $0xa,%al
    3696:	75 cd                	jne    3665 <rio_readlineb+0x3b>
    3698:	48 89 d5             	mov    %rdx,%rbp
    369b:	c6 45 00 00          	movb   $0x0,0x0(%rbp)
    369f:	48 89 d8             	mov    %rbx,%rax
    36a2:	48 8b 4c 24 08       	mov    0x8(%rsp),%rcx
    36a7:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    36ae:	00 00 
    36b0:	75 14                	jne    36c6 <rio_readlineb+0x9c>
    36b2:	48 83 c4 18          	add    $0x18,%rsp
    36b6:	5b                   	pop    %rbx
    36b7:	5d                   	pop    %rbp
    36b8:	41 5c                	pop    %r12
    36ba:	41 5d                	pop    %r13
    36bc:	c3                   	ret    
    36bd:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
    36c4:	eb dc                	jmp    36a2 <rio_readlineb+0x78>
    36c6:	e8 c5 eb ff ff       	call   2290 <__stack_chk_fail@plt>

00000000000036cb <urlencode>:
    36cb:	41 54                	push   %r12
    36cd:	55                   	push   %rbp
    36ce:	53                   	push   %rbx
    36cf:	48 83 ec 10          	sub    $0x10,%rsp
    36d3:	48 89 fb             	mov    %rdi,%rbx
    36d6:	48 89 f5             	mov    %rsi,%rbp
    36d9:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    36e0:	00 00 
    36e2:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    36e7:	31 c0                	xor    %eax,%eax
    36e9:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    36f0:	f2 ae                	repnz scas %es:(%rdi),%al
    36f2:	48 f7 d1             	not    %rcx
    36f5:	8d 41 ff             	lea    -0x1(%rcx),%eax
    36f8:	eb 0f                	jmp    3709 <urlencode+0x3e>
    36fa:	44 88 45 00          	mov    %r8b,0x0(%rbp)
    36fe:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
    3702:	48 83 c3 01          	add    $0x1,%rbx
    3706:	44 89 e0             	mov    %r12d,%eax
    3709:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
    370d:	85 c0                	test   %eax,%eax
    370f:	0f 84 a8 00 00 00    	je     37bd <urlencode+0xf2>
    3715:	44 0f b6 03          	movzbl (%rbx),%r8d
    3719:	41 80 f8 2a          	cmp    $0x2a,%r8b
    371d:	0f 94 c2             	sete   %dl
    3720:	41 80 f8 2d          	cmp    $0x2d,%r8b
    3724:	0f 94 c0             	sete   %al
    3727:	08 c2                	or     %al,%dl
    3729:	75 cf                	jne    36fa <urlencode+0x2f>
    372b:	41 80 f8 2e          	cmp    $0x2e,%r8b
    372f:	74 c9                	je     36fa <urlencode+0x2f>
    3731:	41 80 f8 5f          	cmp    $0x5f,%r8b
    3735:	74 c3                	je     36fa <urlencode+0x2f>
    3737:	41 8d 40 d0          	lea    -0x30(%r8),%eax
    373b:	3c 09                	cmp    $0x9,%al
    373d:	76 bb                	jbe    36fa <urlencode+0x2f>
    373f:	41 8d 40 bf          	lea    -0x41(%r8),%eax
    3743:	3c 19                	cmp    $0x19,%al
    3745:	76 b3                	jbe    36fa <urlencode+0x2f>
    3747:	41 8d 40 9f          	lea    -0x61(%r8),%eax
    374b:	3c 19                	cmp    $0x19,%al
    374d:	76 ab                	jbe    36fa <urlencode+0x2f>
    374f:	41 80 f8 20          	cmp    $0x20,%r8b
    3753:	74 56                	je     37ab <urlencode+0xe0>
    3755:	41 8d 40 e0          	lea    -0x20(%r8),%eax
    3759:	3c 5f                	cmp    $0x5f,%al
    375b:	0f 96 c2             	setbe  %dl
    375e:	41 80 f8 09          	cmp    $0x9,%r8b
    3762:	0f 94 c0             	sete   %al
    3765:	08 c2                	or     %al,%dl
    3767:	74 4f                	je     37b8 <urlencode+0xed>
    3769:	48 89 e7             	mov    %rsp,%rdi
    376c:	45 0f b6 c0          	movzbl %r8b,%r8d
    3770:	48 8d 0d 5e 20 00 00 	lea    0x205e(%rip),%rcx        # 57d5 <secret_tokens+0xd5>
    3777:	ba 08 00 00 00       	mov    $0x8,%edx
    377c:	be 01 00 00 00       	mov    $0x1,%esi
    3781:	b8 00 00 00 00       	mov    $0x0,%eax
    3786:	e8 55 ec ff ff       	call   23e0 <__sprintf_chk@plt>
    378b:	0f b6 04 24          	movzbl (%rsp),%eax
    378f:	88 45 00             	mov    %al,0x0(%rbp)
    3792:	0f b6 44 24 01       	movzbl 0x1(%rsp),%eax
    3797:	88 45 01             	mov    %al,0x1(%rbp)
    379a:	0f b6 44 24 02       	movzbl 0x2(%rsp),%eax
    379f:	88 45 02             	mov    %al,0x2(%rbp)
    37a2:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
    37a6:	e9 57 ff ff ff       	jmp    3702 <urlencode+0x37>
    37ab:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
    37af:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
    37b3:	e9 4a ff ff ff       	jmp    3702 <urlencode+0x37>
    37b8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    37bd:	48 8b 74 24 08       	mov    0x8(%rsp),%rsi
    37c2:	64 48 33 34 25 28 00 	xor    %fs:0x28,%rsi
    37c9:	00 00 
    37cb:	75 09                	jne    37d6 <urlencode+0x10b>
    37cd:	48 83 c4 10          	add    $0x10,%rsp
    37d1:	5b                   	pop    %rbx
    37d2:	5d                   	pop    %rbp
    37d3:	41 5c                	pop    %r12
    37d5:	c3                   	ret    
    37d6:	e8 b5 ea ff ff       	call   2290 <__stack_chk_fail@plt>

00000000000037db <submitr>:
    37db:	f3 0f 1e fa          	endbr64 
    37df:	41 57                	push   %r15
    37e1:	41 56                	push   %r14
    37e3:	41 55                	push   %r13
    37e5:	41 54                	push   %r12
    37e7:	55                   	push   %rbp
    37e8:	53                   	push   %rbx
    37e9:	4c 8d 9c 24 00 60 ff 	lea    -0xa000(%rsp),%r11
    37f0:	ff 
    37f1:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    37f8:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    37fd:	4c 39 dc             	cmp    %r11,%rsp
    3800:	75 ef                	jne    37f1 <submitr+0x16>
    3802:	48 83 ec 68          	sub    $0x68,%rsp
    3806:	49 89 fc             	mov    %rdi,%r12
    3809:	89 74 24 1c          	mov    %esi,0x1c(%rsp)
    380d:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    3812:	49 89 cd             	mov    %rcx,%r13
    3815:	4c 89 44 24 10       	mov    %r8,0x10(%rsp)
    381a:	4d 89 ce             	mov    %r9,%r14
    381d:	48 8b ac 24 a0 a0 00 	mov    0xa0a0(%rsp),%rbp
    3824:	00 
    3825:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    382c:	00 00 
    382e:	48 89 84 24 58 a0 00 	mov    %rax,0xa058(%rsp)
    3835:	00 
    3836:	31 c0                	xor    %eax,%eax
    3838:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%rsp)
    383f:	00 
    3840:	ba 00 00 00 00       	mov    $0x0,%edx
    3845:	be 01 00 00 00       	mov    $0x1,%esi
    384a:	bf 02 00 00 00       	mov    $0x2,%edi
    384f:	e8 9c eb ff ff       	call   23f0 <socket@plt>
    3854:	85 c0                	test   %eax,%eax
    3856:	0f 88 a5 02 00 00    	js     3b01 <submitr+0x326>
    385c:	89 c3                	mov    %eax,%ebx
    385e:	4c 89 e7             	mov    %r12,%rdi
    3861:	e8 8a ea ff ff       	call   22f0 <gethostbyname@plt>
    3866:	48 85 c0             	test   %rax,%rax
    3869:	0f 84 de 02 00 00    	je     3b4d <submitr+0x372>
    386f:	4c 8d 7c 24 30       	lea    0x30(%rsp),%r15
    3874:	48 c7 44 24 30 00 00 	movq   $0x0,0x30(%rsp)
    387b:	00 00 
    387d:	48 c7 44 24 38 00 00 	movq   $0x0,0x38(%rsp)
    3884:	00 00 
    3886:	66 c7 44 24 30 02 00 	movw   $0x2,0x30(%rsp)
    388d:	48 63 50 14          	movslq 0x14(%rax),%rdx
    3891:	48 8b 40 18          	mov    0x18(%rax),%rax
    3895:	48 8b 30             	mov    (%rax),%rsi
    3898:	48 8d 7c 24 34       	lea    0x34(%rsp),%rdi
    389d:	b9 0c 00 00 00       	mov    $0xc,%ecx
    38a2:	e8 59 ea ff ff       	call   2300 <__memmove_chk@plt>
    38a7:	0f b7 74 24 1c       	movzwl 0x1c(%rsp),%esi
    38ac:	66 c1 c6 08          	rol    $0x8,%si
    38b0:	66 89 74 24 32       	mov    %si,0x32(%rsp)
    38b5:	ba 10 00 00 00       	mov    $0x10,%edx
    38ba:	4c 89 fe             	mov    %r15,%rsi
    38bd:	89 df                	mov    %ebx,%edi
    38bf:	e8 dc ea ff ff       	call   23a0 <connect@plt>
    38c4:	85 c0                	test   %eax,%eax
    38c6:	0f 88 f7 02 00 00    	js     3bc3 <submitr+0x3e8>
    38cc:	48 c7 c6 ff ff ff ff 	mov    $0xffffffffffffffff,%rsi
    38d3:	b8 00 00 00 00       	mov    $0x0,%eax
    38d8:	48 89 f1             	mov    %rsi,%rcx
    38db:	4c 89 f7             	mov    %r14,%rdi
    38de:	f2 ae                	repnz scas %es:(%rdi),%al
    38e0:	48 89 ca             	mov    %rcx,%rdx
    38e3:	48 f7 d2             	not    %rdx
    38e6:	48 89 f1             	mov    %rsi,%rcx
    38e9:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
    38ee:	f2 ae                	repnz scas %es:(%rdi),%al
    38f0:	48 f7 d1             	not    %rcx
    38f3:	49 89 c8             	mov    %rcx,%r8
    38f6:	48 89 f1             	mov    %rsi,%rcx
    38f9:	4c 89 ef             	mov    %r13,%rdi
    38fc:	f2 ae                	repnz scas %es:(%rdi),%al
    38fe:	48 f7 d1             	not    %rcx
    3901:	4d 8d 44 08 fe       	lea    -0x2(%r8,%rcx,1),%r8
    3906:	48 89 f1             	mov    %rsi,%rcx
    3909:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
    390e:	f2 ae                	repnz scas %es:(%rdi),%al
    3910:	48 89 c8             	mov    %rcx,%rax
    3913:	48 f7 d0             	not    %rax
    3916:	49 8d 4c 00 ff       	lea    -0x1(%r8,%rax,1),%rcx
    391b:	48 8d 44 52 fd       	lea    -0x3(%rdx,%rdx,2),%rax
    3920:	48 8d 84 01 80 00 00 	lea    0x80(%rcx,%rax,1),%rax
    3927:	00 
    3928:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
    392e:	0f 87 f7 02 00 00    	ja     3c2b <submitr+0x450>
    3934:	48 8d b4 24 50 40 00 	lea    0x4050(%rsp),%rsi
    393b:	00 
    393c:	b9 00 04 00 00       	mov    $0x400,%ecx
    3941:	b8 00 00 00 00       	mov    $0x0,%eax
    3946:	48 89 f7             	mov    %rsi,%rdi
    3949:	f3 48 ab             	rep stos %rax,%es:(%rdi)
    394c:	4c 89 f7             	mov    %r14,%rdi
    394f:	e8 77 fd ff ff       	call   36cb <urlencode>
    3954:	85 c0                	test   %eax,%eax
    3956:	0f 88 42 03 00 00    	js     3c9e <submitr+0x4c3>
    395c:	4c 8d bc 24 50 20 00 	lea    0x2050(%rsp),%r15
    3963:	00 
    3964:	48 83 ec 08          	sub    $0x8,%rsp
    3968:	41 54                	push   %r12
    396a:	48 8d 84 24 60 40 00 	lea    0x4060(%rsp),%rax
    3971:	00 
    3972:	50                   	push   %rax
    3973:	41 55                	push   %r13
    3975:	4c 8b 4c 24 30       	mov    0x30(%rsp),%r9
    397a:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    397f:	48 8d 0d c2 1d 00 00 	lea    0x1dc2(%rip),%rcx        # 5748 <secret_tokens+0x48>
    3986:	ba 00 20 00 00       	mov    $0x2000,%edx
    398b:	be 01 00 00 00       	mov    $0x1,%esi
    3990:	4c 89 ff             	mov    %r15,%rdi
    3993:	b8 00 00 00 00       	mov    $0x0,%eax
    3998:	e8 43 ea ff ff       	call   23e0 <__sprintf_chk@plt>
    399d:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    39a4:	b8 00 00 00 00       	mov    $0x0,%eax
    39a9:	4c 89 ff             	mov    %r15,%rdi
    39ac:	f2 ae                	repnz scas %es:(%rdi),%al
    39ae:	48 f7 d1             	not    %rcx
    39b1:	48 8d 51 ff          	lea    -0x1(%rcx),%rdx
    39b5:	48 83 c4 20          	add    $0x20,%rsp
    39b9:	4c 89 fe             	mov    %r15,%rsi
    39bc:	89 df                	mov    %ebx,%edi
    39be:	e8 82 fb ff ff       	call   3545 <rio_writen>
    39c3:	48 85 c0             	test   %rax,%rax
    39c6:	0f 88 5d 03 00 00    	js     3d29 <submitr+0x54e>
    39cc:	4c 8d 64 24 40       	lea    0x40(%rsp),%r12
    39d1:	89 de                	mov    %ebx,%esi
    39d3:	4c 89 e7             	mov    %r12,%rdi
    39d6:	e8 22 fb ff ff       	call   34fd <rio_readinitb>
    39db:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
    39e2:	00 
    39e3:	ba 00 20 00 00       	mov    $0x2000,%edx
    39e8:	4c 89 e7             	mov    %r12,%rdi
    39eb:	e8 3a fc ff ff       	call   362a <rio_readlineb>
    39f0:	48 85 c0             	test   %rax,%rax
    39f3:	0f 8e 9c 03 00 00    	jle    3d95 <submitr+0x5ba>
    39f9:	48 8d 4c 24 2c       	lea    0x2c(%rsp),%rcx
    39fe:	48 8d 94 24 50 60 00 	lea    0x6050(%rsp),%rdx
    3a05:	00 
    3a06:	48 8d bc 24 50 20 00 	lea    0x2050(%rsp),%rdi
    3a0d:	00 
    3a0e:	4c 8d 84 24 50 80 00 	lea    0x8050(%rsp),%r8
    3a15:	00 
    3a16:	48 8d 35 bf 1d 00 00 	lea    0x1dbf(%rip),%rsi        # 57dc <secret_tokens+0xdc>
    3a1d:	b8 00 00 00 00       	mov    $0x0,%eax
    3a22:	e8 29 e9 ff ff       	call   2350 <__isoc99_sscanf@plt>
    3a27:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
    3a2e:	00 
    3a2f:	b9 03 00 00 00       	mov    $0x3,%ecx
    3a34:	48 8d 3d b8 1d 00 00 	lea    0x1db8(%rip),%rdi        # 57f3 <secret_tokens+0xf3>
    3a3b:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
    3a3d:	0f 97 c0             	seta   %al
    3a40:	1c 00                	sbb    $0x0,%al
    3a42:	84 c0                	test   %al,%al
    3a44:	0f 84 cb 03 00 00    	je     3e15 <submitr+0x63a>
    3a4a:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
    3a51:	00 
    3a52:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
    3a57:	ba 00 20 00 00       	mov    $0x2000,%edx
    3a5c:	e8 c9 fb ff ff       	call   362a <rio_readlineb>
    3a61:	48 85 c0             	test   %rax,%rax
    3a64:	7f c1                	jg     3a27 <submitr+0x24c>
    3a66:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3a6d:	3a 20 43 
    3a70:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3a77:	20 75 6e 
    3a7a:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3a7e:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3a82:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3a89:	74 6f 20 
    3a8c:	48 ba 72 65 61 64 20 	movabs $0x6165682064616572,%rdx
    3a93:	68 65 61 
    3a96:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3a9a:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3a9e:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
    3aa5:	66 72 6f 
    3aa8:	48 ba 6d 20 41 75 74 	movabs $0x616c6f747541206d,%rdx
    3aaf:	6f 6c 61 
    3ab2:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3ab6:	48 89 55 28          	mov    %rdx,0x28(%rbp)
    3aba:	48 b8 62 20 73 65 72 	movabs $0x7265767265732062,%rax
    3ac1:	76 65 72 
    3ac4:	48 89 45 30          	mov    %rax,0x30(%rbp)
    3ac8:	c6 45 38 00          	movb   $0x0,0x38(%rbp)
    3acc:	89 df                	mov    %ebx,%edi
    3ace:	e8 dd e7 ff ff       	call   22b0 <close@plt>
    3ad3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3ad8:	48 8b 9c 24 58 a0 00 	mov    0xa058(%rsp),%rbx
    3adf:	00 
    3ae0:	64 48 33 1c 25 28 00 	xor    %fs:0x28,%rbx
    3ae7:	00 00 
    3ae9:	0f 85 96 04 00 00    	jne    3f85 <submitr+0x7aa>
    3aef:	48 81 c4 68 a0 00 00 	add    $0xa068,%rsp
    3af6:	5b                   	pop    %rbx
    3af7:	5d                   	pop    %rbp
    3af8:	41 5c                	pop    %r12
    3afa:	41 5d                	pop    %r13
    3afc:	41 5e                	pop    %r14
    3afe:	41 5f                	pop    %r15
    3b00:	c3                   	ret    
    3b01:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3b08:	3a 20 43 
    3b0b:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3b12:	20 75 6e 
    3b15:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3b19:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3b1d:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3b24:	74 6f 20 
    3b27:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
    3b2e:	65 20 73 
    3b31:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3b35:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3b39:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
    3b40:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
    3b46:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3b4b:	eb 8b                	jmp    3ad8 <submitr+0x2fd>
    3b4d:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
    3b54:	3a 20 44 
    3b57:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
    3b5e:	20 75 6e 
    3b61:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3b65:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3b69:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3b70:	74 6f 20 
    3b73:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
    3b7a:	76 65 20 
    3b7d:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3b81:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3b85:	48 b8 41 75 74 6f 6c 	movabs $0x2062616c6f747541,%rax
    3b8c:	61 62 20 
    3b8f:	48 ba 73 65 72 76 65 	movabs $0x6120726576726573,%rdx
    3b96:	72 20 61 
    3b99:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3b9d:	48 89 55 28          	mov    %rdx,0x28(%rbp)
    3ba1:	c7 45 30 64 64 72 65 	movl   $0x65726464,0x30(%rbp)
    3ba8:	66 c7 45 34 73 73    	movw   $0x7373,0x34(%rbp)
    3bae:	c6 45 36 00          	movb   $0x0,0x36(%rbp)
    3bb2:	89 df                	mov    %ebx,%edi
    3bb4:	e8 f7 e6 ff ff       	call   22b0 <close@plt>
    3bb9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3bbe:	e9 15 ff ff ff       	jmp    3ad8 <submitr+0x2fd>
    3bc3:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
    3bca:	3a 20 55 
    3bcd:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
    3bd4:	20 74 6f 
    3bd7:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3bdb:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3bdf:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
    3be6:	65 63 74 
    3be9:	48 ba 20 74 6f 20 74 	movabs $0x20656874206f7420,%rdx
    3bf0:	68 65 20 
    3bf3:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3bf7:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3bfb:	48 b8 41 75 74 6f 6c 	movabs $0x2062616c6f747541,%rax
    3c02:	61 62 20 
    3c05:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3c09:	c7 45 28 73 65 72 76 	movl   $0x76726573,0x28(%rbp)
    3c10:	66 c7 45 2c 65 72    	movw   $0x7265,0x2c(%rbp)
    3c16:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
    3c1a:	89 df                	mov    %ebx,%edi
    3c1c:	e8 8f e6 ff ff       	call   22b0 <close@plt>
    3c21:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3c26:	e9 ad fe ff ff       	jmp    3ad8 <submitr+0x2fd>
    3c2b:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
    3c32:	3a 20 52 
    3c35:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
    3c3c:	20 73 74 
    3c3f:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3c43:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3c47:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
    3c4e:	74 6f 6f 
    3c51:	48 ba 20 6c 61 72 67 	movabs $0x202e656772616c20,%rdx
    3c58:	65 2e 20 
    3c5b:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3c5f:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3c63:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
    3c6a:	61 73 65 
    3c6d:	48 ba 20 53 55 42 4d 	movabs $0x5254494d42555320,%rdx
    3c74:	49 54 52 
    3c77:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3c7b:	48 89 55 28          	mov    %rdx,0x28(%rbp)
    3c7f:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
    3c86:	55 46 00 
    3c89:	48 89 45 30          	mov    %rax,0x30(%rbp)
    3c8d:	89 df                	mov    %ebx,%edi
    3c8f:	e8 1c e6 ff ff       	call   22b0 <close@plt>
    3c94:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3c99:	e9 3a fe ff ff       	jmp    3ad8 <submitr+0x2fd>
    3c9e:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
    3ca5:	3a 20 52 
    3ca8:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
    3caf:	20 73 74 
    3cb2:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3cb6:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3cba:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
    3cc1:	63 6f 6e 
    3cc4:	48 ba 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rdx
    3ccb:	20 61 6e 
    3cce:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3cd2:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3cd6:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
    3cdd:	67 61 6c 
    3ce0:	48 ba 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rdx
    3ce7:	6e 70 72 
    3cea:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3cee:	48 89 55 28          	mov    %rdx,0x28(%rbp)
    3cf2:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
    3cf9:	6c 65 20 
    3cfc:	48 ba 63 68 61 72 61 	movabs $0x6574636172616863,%rdx
    3d03:	63 74 65 
    3d06:	48 89 45 30          	mov    %rax,0x30(%rbp)
    3d0a:	48 89 55 38          	mov    %rdx,0x38(%rbp)
    3d0e:	66 c7 45 40 72 2e    	movw   $0x2e72,0x40(%rbp)
    3d14:	c6 45 42 00          	movb   $0x0,0x42(%rbp)
    3d18:	89 df                	mov    %ebx,%edi
    3d1a:	e8 91 e5 ff ff       	call   22b0 <close@plt>
    3d1f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3d24:	e9 af fd ff ff       	jmp    3ad8 <submitr+0x2fd>
    3d29:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3d30:	3a 20 43 
    3d33:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3d3a:	20 75 6e 
    3d3d:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3d41:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3d45:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3d4c:	74 6f 20 
    3d4f:	48 ba 77 72 69 74 65 	movabs $0x6f74206574697277,%rdx
    3d56:	20 74 6f 
    3d59:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3d5d:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3d61:	48 b8 20 74 68 65 20 	movabs $0x7475412065687420,%rax
    3d68:	41 75 74 
    3d6b:	48 ba 6f 6c 61 62 20 	movabs $0x7265732062616c6f,%rdx
    3d72:	73 65 72 
    3d75:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3d79:	48 89 55 28          	mov    %rdx,0x28(%rbp)
    3d7d:	c7 45 30 76 65 72 00 	movl   $0x726576,0x30(%rbp)
    3d84:	89 df                	mov    %ebx,%edi
    3d86:	e8 25 e5 ff ff       	call   22b0 <close@plt>
    3d8b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3d90:	e9 43 fd ff ff       	jmp    3ad8 <submitr+0x2fd>
    3d95:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3d9c:	3a 20 43 
    3d9f:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3da6:	20 75 6e 
    3da9:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3dad:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3db1:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3db8:	74 6f 20 
    3dbb:	48 ba 72 65 61 64 20 	movabs $0x7269662064616572,%rdx
    3dc2:	66 69 72 
    3dc5:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3dc9:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3dcd:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
    3dd4:	61 64 65 
    3dd7:	48 ba 72 20 66 72 6f 	movabs $0x41206d6f72662072,%rdx
    3dde:	6d 20 41 
    3de1:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3de5:	48 89 55 28          	mov    %rdx,0x28(%rbp)
    3de9:	48 b8 75 74 6f 6c 61 	movabs $0x732062616c6f7475,%rax
    3df0:	62 20 73 
    3df3:	48 89 45 30          	mov    %rax,0x30(%rbp)
    3df7:	c7 45 38 65 72 76 65 	movl   $0x65767265,0x38(%rbp)
    3dfe:	66 c7 45 3c 72 00    	movw   $0x72,0x3c(%rbp)
    3e04:	89 df                	mov    %ebx,%edi
    3e06:	e8 a5 e4 ff ff       	call   22b0 <close@plt>
    3e0b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3e10:	e9 c3 fc ff ff       	jmp    3ad8 <submitr+0x2fd>
    3e15:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
    3e1c:	00 
    3e1d:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
    3e22:	ba 00 20 00 00       	mov    $0x2000,%edx
    3e27:	e8 fe f7 ff ff       	call   362a <rio_readlineb>
    3e2c:	48 85 c0             	test   %rax,%rax
    3e2f:	0f 8e 96 00 00 00    	jle    3ecb <submitr+0x6f0>
    3e35:	44 8b 44 24 2c       	mov    0x2c(%rsp),%r8d
    3e3a:	41 81 f8 c8 00 00 00 	cmp    $0xc8,%r8d
    3e41:	0f 85 05 01 00 00    	jne    3f4c <submitr+0x771>
    3e47:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
    3e4e:	00 
    3e4f:	48 89 ef             	mov    %rbp,%rdi
    3e52:	e8 09 e4 ff ff       	call   2260 <strcpy@plt>
    3e57:	89 df                	mov    %ebx,%edi
    3e59:	e8 52 e4 ff ff       	call   22b0 <close@plt>
    3e5e:	b9 04 00 00 00       	mov    $0x4,%ecx
    3e63:	48 8d 3d 83 19 00 00 	lea    0x1983(%rip),%rdi        # 57ed <secret_tokens+0xed>
    3e6a:	48 89 ee             	mov    %rbp,%rsi
    3e6d:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
    3e6f:	0f 97 c0             	seta   %al
    3e72:	1c 00                	sbb    $0x0,%al
    3e74:	0f be c0             	movsbl %al,%eax
    3e77:	85 c0                	test   %eax,%eax
    3e79:	0f 84 59 fc ff ff    	je     3ad8 <submitr+0x2fd>
    3e7f:	b9 05 00 00 00       	mov    $0x5,%ecx
    3e84:	48 8d 3d 66 19 00 00 	lea    0x1966(%rip),%rdi        # 57f1 <secret_tokens+0xf1>
    3e8b:	48 89 ee             	mov    %rbp,%rsi
    3e8e:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
    3e90:	0f 97 c0             	seta   %al
    3e93:	1c 00                	sbb    $0x0,%al
    3e95:	0f be c0             	movsbl %al,%eax
    3e98:	85 c0                	test   %eax,%eax
    3e9a:	0f 84 38 fc ff ff    	je     3ad8 <submitr+0x2fd>
    3ea0:	b9 03 00 00 00       	mov    $0x3,%ecx
    3ea5:	48 8d 3d 4a 19 00 00 	lea    0x194a(%rip),%rdi        # 57f6 <secret_tokens+0xf6>
    3eac:	48 89 ee             	mov    %rbp,%rsi
    3eaf:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
    3eb1:	0f 97 c0             	seta   %al
    3eb4:	1c 00                	sbb    $0x0,%al
    3eb6:	0f be c0             	movsbl %al,%eax
    3eb9:	85 c0                	test   %eax,%eax
    3ebb:	0f 84 17 fc ff ff    	je     3ad8 <submitr+0x2fd>
    3ec1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3ec6:	e9 0d fc ff ff       	jmp    3ad8 <submitr+0x2fd>
    3ecb:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3ed2:	3a 20 43 
    3ed5:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3edc:	20 75 6e 
    3edf:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3ee3:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3ee7:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3eee:	74 6f 20 
    3ef1:	48 ba 72 65 61 64 20 	movabs $0x6174732064616572,%rdx
    3ef8:	73 74 61 
    3efb:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3eff:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3f03:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
    3f0a:	65 73 73 
    3f0d:	48 ba 61 67 65 20 66 	movabs $0x6d6f726620656761,%rdx
    3f14:	72 6f 6d 
    3f17:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3f1b:	48 89 55 28          	mov    %rdx,0x28(%rbp)
    3f1f:	48 b8 20 41 75 74 6f 	movabs $0x62616c6f74754120,%rax
    3f26:	6c 61 62 
    3f29:	48 ba 20 73 65 72 76 	movabs $0x72657672657320,%rdx
    3f30:	65 72 00 
    3f33:	48 89 45 30          	mov    %rax,0x30(%rbp)
    3f37:	48 89 55 38          	mov    %rdx,0x38(%rbp)
    3f3b:	89 df                	mov    %ebx,%edi
    3f3d:	e8 6e e3 ff ff       	call   22b0 <close@plt>
    3f42:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3f47:	e9 8c fb ff ff       	jmp    3ad8 <submitr+0x2fd>
    3f4c:	4c 8d 8c 24 50 80 00 	lea    0x8050(%rsp),%r9
    3f53:	00 
    3f54:	48 8d 0d 4d 18 00 00 	lea    0x184d(%rip),%rcx        # 57a8 <secret_tokens+0xa8>
    3f5b:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
    3f62:	be 01 00 00 00       	mov    $0x1,%esi
    3f67:	48 89 ef             	mov    %rbp,%rdi
    3f6a:	b8 00 00 00 00       	mov    $0x0,%eax
    3f6f:	e8 6c e4 ff ff       	call   23e0 <__sprintf_chk@plt>
    3f74:	89 df                	mov    %ebx,%edi
    3f76:	e8 35 e3 ff ff       	call   22b0 <close@plt>
    3f7b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3f80:	e9 53 fb ff ff       	jmp    3ad8 <submitr+0x2fd>
    3f85:	e8 06 e3 ff ff       	call   2290 <__stack_chk_fail@plt>

0000000000003f8a <init_timeout>:
    3f8a:	f3 0f 1e fa          	endbr64 
    3f8e:	85 ff                	test   %edi,%edi
    3f90:	74 26                	je     3fb8 <init_timeout+0x2e>
    3f92:	53                   	push   %rbx
    3f93:	89 fb                	mov    %edi,%ebx
    3f95:	78 1a                	js     3fb1 <init_timeout+0x27>
    3f97:	48 8d 35 71 f5 ff ff 	lea    -0xa8f(%rip),%rsi        # 350f <sigalrm_handler>
    3f9e:	bf 0e 00 00 00       	mov    $0xe,%edi
    3fa3:	e8 38 e3 ff ff       	call   22e0 <signal@plt>
    3fa8:	89 df                	mov    %ebx,%edi
    3faa:	e8 f1 e2 ff ff       	call   22a0 <alarm@plt>
    3faf:	5b                   	pop    %rbx
    3fb0:	c3                   	ret    
    3fb1:	bb 00 00 00 00       	mov    $0x0,%ebx
    3fb6:	eb df                	jmp    3f97 <init_timeout+0xd>
    3fb8:	c3                   	ret    

0000000000003fb9 <init_driver>:
    3fb9:	f3 0f 1e fa          	endbr64 
    3fbd:	41 54                	push   %r12
    3fbf:	55                   	push   %rbp
    3fc0:	53                   	push   %rbx
    3fc1:	48 83 ec 20          	sub    $0x20,%rsp
    3fc5:	48 89 fd             	mov    %rdi,%rbp
    3fc8:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3fcf:	00 00 
    3fd1:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    3fd6:	31 c0                	xor    %eax,%eax
    3fd8:	be 01 00 00 00       	mov    $0x1,%esi
    3fdd:	bf 0d 00 00 00       	mov    $0xd,%edi
    3fe2:	e8 f9 e2 ff ff       	call   22e0 <signal@plt>
    3fe7:	be 01 00 00 00       	mov    $0x1,%esi
    3fec:	bf 1d 00 00 00       	mov    $0x1d,%edi
    3ff1:	e8 ea e2 ff ff       	call   22e0 <signal@plt>
    3ff6:	be 01 00 00 00       	mov    $0x1,%esi
    3ffb:	bf 1d 00 00 00       	mov    $0x1d,%edi
    4000:	e8 db e2 ff ff       	call   22e0 <signal@plt>
    4005:	ba 00 00 00 00       	mov    $0x0,%edx
    400a:	be 01 00 00 00       	mov    $0x1,%esi
    400f:	bf 02 00 00 00       	mov    $0x2,%edi
    4014:	e8 d7 e3 ff ff       	call   23f0 <socket@plt>
    4019:	85 c0                	test   %eax,%eax
    401b:	0f 88 9c 00 00 00    	js     40bd <init_driver+0x104>
    4021:	89 c3                	mov    %eax,%ebx
    4023:	48 8d 3d cf 17 00 00 	lea    0x17cf(%rip),%rdi        # 57f9 <secret_tokens+0xf9>
    402a:	e8 c1 e2 ff ff       	call   22f0 <gethostbyname@plt>
    402f:	48 85 c0             	test   %rax,%rax
    4032:	0f 84 d1 00 00 00    	je     4109 <init_driver+0x150>
    4038:	49 89 e4             	mov    %rsp,%r12
    403b:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
    4042:	00 
    4043:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
    404a:	00 00 
    404c:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
    4052:	48 63 50 14          	movslq 0x14(%rax),%rdx
    4056:	48 8b 40 18          	mov    0x18(%rax),%rax
    405a:	48 8b 30             	mov    (%rax),%rsi
    405d:	48 8d 7c 24 04       	lea    0x4(%rsp),%rdi
    4062:	b9 0c 00 00 00       	mov    $0xc,%ecx
    4067:	e8 94 e2 ff ff       	call   2300 <__memmove_chk@plt>
    406c:	66 c7 44 24 02 30 39 	movw   $0x3930,0x2(%rsp)
    4073:	ba 10 00 00 00       	mov    $0x10,%edx
    4078:	4c 89 e6             	mov    %r12,%rsi
    407b:	89 df                	mov    %ebx,%edi
    407d:	e8 1e e3 ff ff       	call   23a0 <connect@plt>
    4082:	85 c0                	test   %eax,%eax
    4084:	0f 88 e7 00 00 00    	js     4171 <init_driver+0x1b8>
    408a:	89 df                	mov    %ebx,%edi
    408c:	e8 1f e2 ff ff       	call   22b0 <close@plt>
    4091:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
    4097:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
    409b:	b8 00 00 00 00       	mov    $0x0,%eax
    40a0:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
    40a5:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    40ac:	00 00 
    40ae:	0f 85 10 01 00 00    	jne    41c4 <init_driver+0x20b>
    40b4:	48 83 c4 20          	add    $0x20,%rsp
    40b8:	5b                   	pop    %rbx
    40b9:	5d                   	pop    %rbp
    40ba:	41 5c                	pop    %r12
    40bc:	c3                   	ret    
    40bd:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    40c4:	3a 20 43 
    40c7:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    40ce:	20 75 6e 
    40d1:	48 89 45 00          	mov    %rax,0x0(%rbp)
    40d5:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    40d9:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    40e0:	74 6f 20 
    40e3:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
    40ea:	65 20 73 
    40ed:	48 89 45 10          	mov    %rax,0x10(%rbp)
    40f1:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    40f5:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
    40fc:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
    4102:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    4107:	eb 97                	jmp    40a0 <init_driver+0xe7>
    4109:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
    4110:	3a 20 44 
    4113:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
    411a:	20 75 6e 
    411d:	48 89 45 00          	mov    %rax,0x0(%rbp)
    4121:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    4125:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    412c:	74 6f 20 
    412f:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
    4136:	76 65 20 
    4139:	48 89 45 10          	mov    %rax,0x10(%rbp)
    413d:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    4141:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
    4148:	72 20 61 
    414b:	48 89 45 20          	mov    %rax,0x20(%rbp)
    414f:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
    4156:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
    415c:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
    4160:	89 df                	mov    %ebx,%edi
    4162:	e8 49 e1 ff ff       	call   22b0 <close@plt>
    4167:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    416c:	e9 2f ff ff ff       	jmp    40a0 <init_driver+0xe7>
    4171:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
    4178:	3a 20 55 
    417b:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
    4182:	20 74 6f 
    4185:	48 89 45 00          	mov    %rax,0x0(%rbp)
    4189:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    418d:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
    4194:	65 63 74 
    4197:	48 ba 20 74 6f 20 73 	movabs $0x76726573206f7420,%rdx
    419e:	65 72 76 
    41a1:	48 89 45 10          	mov    %rax,0x10(%rbp)
    41a5:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    41a9:	66 c7 45 20 65 72    	movw   $0x7265,0x20(%rbp)
    41af:	c6 45 22 00          	movb   $0x0,0x22(%rbp)
    41b3:	89 df                	mov    %ebx,%edi
    41b5:	e8 f6 e0 ff ff       	call   22b0 <close@plt>
    41ba:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    41bf:	e9 dc fe ff ff       	jmp    40a0 <init_driver+0xe7>
    41c4:	e8 c7 e0 ff ff       	call   2290 <__stack_chk_fail@plt>

00000000000041c9 <driver_post>:
    41c9:	f3 0f 1e fa          	endbr64 
    41cd:	53                   	push   %rbx
    41ce:	4c 89 cb             	mov    %r9,%rbx
    41d1:	45 85 c0             	test   %r8d,%r8d
    41d4:	75 18                	jne    41ee <driver_post+0x25>
    41d6:	48 85 ff             	test   %rdi,%rdi
    41d9:	74 05                	je     41e0 <driver_post+0x17>
    41db:	80 3f 00             	cmpb   $0x0,(%rdi)
    41de:	75 37                	jne    4217 <driver_post+0x4e>
    41e0:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
    41e5:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
    41e9:	44 89 c0             	mov    %r8d,%eax
    41ec:	5b                   	pop    %rbx
    41ed:	c3                   	ret    
    41ee:	48 89 ca             	mov    %rcx,%rdx
    41f1:	48 8d 35 11 16 00 00 	lea    0x1611(%rip),%rsi        # 5809 <secret_tokens+0x109>
    41f8:	bf 01 00 00 00       	mov    $0x1,%edi
    41fd:	b8 00 00 00 00       	mov    $0x0,%eax
    4202:	e8 59 e1 ff ff       	call   2360 <__printf_chk@plt>
    4207:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
    420c:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
    4210:	b8 00 00 00 00       	mov    $0x0,%eax
    4215:	eb d5                	jmp    41ec <driver_post+0x23>
    4217:	48 83 ec 08          	sub    $0x8,%rsp
    421b:	41 51                	push   %r9
    421d:	49 89 c9             	mov    %rcx,%r9
    4220:	49 89 d0             	mov    %rdx,%r8
    4223:	48 89 f9             	mov    %rdi,%rcx
    4226:	48 89 f2             	mov    %rsi,%rdx
    4229:	be 39 30 00 00       	mov    $0x3039,%esi
    422e:	48 8d 3d c4 15 00 00 	lea    0x15c4(%rip),%rdi        # 57f9 <secret_tokens+0xf9>
    4235:	e8 a1 f5 ff ff       	call   37db <submitr>
    423a:	48 83 c4 10          	add    $0x10,%rsp
    423e:	eb ac                	jmp    41ec <driver_post+0x23>

0000000000004240 <__libc_csu_init>:
    4240:	f3 0f 1e fa          	endbr64 
    4244:	41 57                	push   %r15
    4246:	4c 8d 3d 73 3a 00 00 	lea    0x3a73(%rip),%r15        # 7cc0 <__frame_dummy_init_array_entry>
    424d:	41 56                	push   %r14
    424f:	49 89 d6             	mov    %rdx,%r14
    4252:	41 55                	push   %r13
    4254:	49 89 f5             	mov    %rsi,%r13
    4257:	41 54                	push   %r12
    4259:	41 89 fc             	mov    %edi,%r12d
    425c:	55                   	push   %rbp
    425d:	48 8d 2d 64 3a 00 00 	lea    0x3a64(%rip),%rbp        # 7cc8 <__do_global_dtors_aux_fini_array_entry>
    4264:	53                   	push   %rbx
    4265:	4c 29 fd             	sub    %r15,%rbp
    4268:	48 83 ec 08          	sub    $0x8,%rsp
    426c:	e8 8f dd ff ff       	call   2000 <_init>
    4271:	48 c1 fd 03          	sar    $0x3,%rbp
    4275:	74 1f                	je     4296 <__libc_csu_init+0x56>
    4277:	31 db                	xor    %ebx,%ebx
    4279:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4280:	4c 89 f2             	mov    %r14,%rdx
    4283:	4c 89 ee             	mov    %r13,%rsi
    4286:	44 89 e7             	mov    %r12d,%edi
    4289:	41 ff 14 df          	call   *(%r15,%rbx,8)
    428d:	48 83 c3 01          	add    $0x1,%rbx
    4291:	48 39 dd             	cmp    %rbx,%rbp
    4294:	75 ea                	jne    4280 <__libc_csu_init+0x40>
    4296:	48 83 c4 08          	add    $0x8,%rsp
    429a:	5b                   	pop    %rbx
    429b:	5d                   	pop    %rbp
    429c:	41 5c                	pop    %r12
    429e:	41 5d                	pop    %r13
    42a0:	41 5e                	pop    %r14
    42a2:	41 5f                	pop    %r15
    42a4:	c3                   	ret    
    42a5:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    42ac:	00 00 00 00 

00000000000042b0 <__libc_csu_fini>:
    42b0:	f3 0f 1e fa          	endbr64 
    42b4:	c3                   	ret    

Disassembly of section .fini:

00000000000042b8 <_fini>:
    42b8:	f3 0f 1e fa          	endbr64 
    42bc:	48 83 ec 08          	sub    $0x8,%rsp
    42c0:	48 83 c4 08          	add    $0x8,%rsp
    42c4:	c3                   	ret    
