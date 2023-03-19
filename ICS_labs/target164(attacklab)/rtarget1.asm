
rtarget:     file format elf64-x86-64


Disassembly of section .init:

0000000000401000 <_init>:
  401000:	f3 0f 1e fa          	endbr64 
  401004:	48 83 ec 08          	sub    $0x8,%rsp
  401008:	48 8b 05 e9 5f 00 00 	mov    0x5fe9(%rip),%rax        # 406ff8 <__gmon_start__>
  40100f:	48 85 c0             	test   %rax,%rax
  401012:	74 02                	je     401016 <_init+0x16>
  401014:	ff d0                	call   *%rax
  401016:	48 83 c4 08          	add    $0x8,%rsp
  40101a:	c3                   	ret    

Disassembly of section .plt:

0000000000401020 <.plt>:
  401020:	ff 35 e2 5f 00 00    	push   0x5fe2(%rip)        # 407008 <_GLOBAL_OFFSET_TABLE_+0x8>
  401026:	f2 ff 25 e3 5f 00 00 	bnd jmp *0x5fe3(%rip)        # 407010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40102d:	0f 1f 00             	nopl   (%rax)
  401030:	f3 0f 1e fa          	endbr64 
  401034:	68 00 00 00 00       	push   $0x0
  401039:	f2 e9 e1 ff ff ff    	bnd jmp 401020 <.plt>
  40103f:	90                   	nop
  401040:	f3 0f 1e fa          	endbr64 
  401044:	68 01 00 00 00       	push   $0x1
  401049:	f2 e9 d1 ff ff ff    	bnd jmp 401020 <.plt>
  40104f:	90                   	nop
  401050:	f3 0f 1e fa          	endbr64 
  401054:	68 02 00 00 00       	push   $0x2
  401059:	f2 e9 c1 ff ff ff    	bnd jmp 401020 <.plt>
  40105f:	90                   	nop
  401060:	f3 0f 1e fa          	endbr64 
  401064:	68 03 00 00 00       	push   $0x3
  401069:	f2 e9 b1 ff ff ff    	bnd jmp 401020 <.plt>
  40106f:	90                   	nop
  401070:	f3 0f 1e fa          	endbr64 
  401074:	68 04 00 00 00       	push   $0x4
  401079:	f2 e9 a1 ff ff ff    	bnd jmp 401020 <.plt>
  40107f:	90                   	nop
  401080:	f3 0f 1e fa          	endbr64 
  401084:	68 05 00 00 00       	push   $0x5
  401089:	f2 e9 91 ff ff ff    	bnd jmp 401020 <.plt>
  40108f:	90                   	nop
  401090:	f3 0f 1e fa          	endbr64 
  401094:	68 06 00 00 00       	push   $0x6
  401099:	f2 e9 81 ff ff ff    	bnd jmp 401020 <.plt>
  40109f:	90                   	nop
  4010a0:	f3 0f 1e fa          	endbr64 
  4010a4:	68 07 00 00 00       	push   $0x7
  4010a9:	f2 e9 71 ff ff ff    	bnd jmp 401020 <.plt>
  4010af:	90                   	nop
  4010b0:	f3 0f 1e fa          	endbr64 
  4010b4:	68 08 00 00 00       	push   $0x8
  4010b9:	f2 e9 61 ff ff ff    	bnd jmp 401020 <.plt>
  4010bf:	90                   	nop
  4010c0:	f3 0f 1e fa          	endbr64 
  4010c4:	68 09 00 00 00       	push   $0x9
  4010c9:	f2 e9 51 ff ff ff    	bnd jmp 401020 <.plt>
  4010cf:	90                   	nop
  4010d0:	f3 0f 1e fa          	endbr64 
  4010d4:	68 0a 00 00 00       	push   $0xa
  4010d9:	f2 e9 41 ff ff ff    	bnd jmp 401020 <.plt>
  4010df:	90                   	nop
  4010e0:	f3 0f 1e fa          	endbr64 
  4010e4:	68 0b 00 00 00       	push   $0xb
  4010e9:	f2 e9 31 ff ff ff    	bnd jmp 401020 <.plt>
  4010ef:	90                   	nop
  4010f0:	f3 0f 1e fa          	endbr64 
  4010f4:	68 0c 00 00 00       	push   $0xc
  4010f9:	f2 e9 21 ff ff ff    	bnd jmp 401020 <.plt>
  4010ff:	90                   	nop
  401100:	f3 0f 1e fa          	endbr64 
  401104:	68 0d 00 00 00       	push   $0xd
  401109:	f2 e9 11 ff ff ff    	bnd jmp 401020 <.plt>
  40110f:	90                   	nop
  401110:	f3 0f 1e fa          	endbr64 
  401114:	68 0e 00 00 00       	push   $0xe
  401119:	f2 e9 01 ff ff ff    	bnd jmp 401020 <.plt>
  40111f:	90                   	nop
  401120:	f3 0f 1e fa          	endbr64 
  401124:	68 0f 00 00 00       	push   $0xf
  401129:	f2 e9 f1 fe ff ff    	bnd jmp 401020 <.plt>
  40112f:	90                   	nop
  401130:	f3 0f 1e fa          	endbr64 
  401134:	68 10 00 00 00       	push   $0x10
  401139:	f2 e9 e1 fe ff ff    	bnd jmp 401020 <.plt>
  40113f:	90                   	nop
  401140:	f3 0f 1e fa          	endbr64 
  401144:	68 11 00 00 00       	push   $0x11
  401149:	f2 e9 d1 fe ff ff    	bnd jmp 401020 <.plt>
  40114f:	90                   	nop
  401150:	f3 0f 1e fa          	endbr64 
  401154:	68 12 00 00 00       	push   $0x12
  401159:	f2 e9 c1 fe ff ff    	bnd jmp 401020 <.plt>
  40115f:	90                   	nop
  401160:	f3 0f 1e fa          	endbr64 
  401164:	68 13 00 00 00       	push   $0x13
  401169:	f2 e9 b1 fe ff ff    	bnd jmp 401020 <.plt>
  40116f:	90                   	nop
  401170:	f3 0f 1e fa          	endbr64 
  401174:	68 14 00 00 00       	push   $0x14
  401179:	f2 e9 a1 fe ff ff    	bnd jmp 401020 <.plt>
  40117f:	90                   	nop
  401180:	f3 0f 1e fa          	endbr64 
  401184:	68 15 00 00 00       	push   $0x15
  401189:	f2 e9 91 fe ff ff    	bnd jmp 401020 <.plt>
  40118f:	90                   	nop
  401190:	f3 0f 1e fa          	endbr64 
  401194:	68 16 00 00 00       	push   $0x16
  401199:	f2 e9 81 fe ff ff    	bnd jmp 401020 <.plt>
  40119f:	90                   	nop
  4011a0:	f3 0f 1e fa          	endbr64 
  4011a4:	68 17 00 00 00       	push   $0x17
  4011a9:	f2 e9 71 fe ff ff    	bnd jmp 401020 <.plt>
  4011af:	90                   	nop
  4011b0:	f3 0f 1e fa          	endbr64 
  4011b4:	68 18 00 00 00       	push   $0x18
  4011b9:	f2 e9 61 fe ff ff    	bnd jmp 401020 <.plt>
  4011bf:	90                   	nop
  4011c0:	f3 0f 1e fa          	endbr64 
  4011c4:	68 19 00 00 00       	push   $0x19
  4011c9:	f2 e9 51 fe ff ff    	bnd jmp 401020 <.plt>
  4011cf:	90                   	nop
  4011d0:	f3 0f 1e fa          	endbr64 
  4011d4:	68 1a 00 00 00       	push   $0x1a
  4011d9:	f2 e9 41 fe ff ff    	bnd jmp 401020 <.plt>
  4011df:	90                   	nop
  4011e0:	f3 0f 1e fa          	endbr64 
  4011e4:	68 1b 00 00 00       	push   $0x1b
  4011e9:	f2 e9 31 fe ff ff    	bnd jmp 401020 <.plt>
  4011ef:	90                   	nop
  4011f0:	f3 0f 1e fa          	endbr64 
  4011f4:	68 1c 00 00 00       	push   $0x1c
  4011f9:	f2 e9 21 fe ff ff    	bnd jmp 401020 <.plt>
  4011ff:	90                   	nop
  401200:	f3 0f 1e fa          	endbr64 
  401204:	68 1d 00 00 00       	push   $0x1d
  401209:	f2 e9 11 fe ff ff    	bnd jmp 401020 <.plt>
  40120f:	90                   	nop
  401210:	f3 0f 1e fa          	endbr64 
  401214:	68 1e 00 00 00       	push   $0x1e
  401219:	f2 e9 01 fe ff ff    	bnd jmp 401020 <.plt>
  40121f:	90                   	nop
  401220:	f3 0f 1e fa          	endbr64 
  401224:	68 1f 00 00 00       	push   $0x1f
  401229:	f2 e9 f1 fd ff ff    	bnd jmp 401020 <.plt>
  40122f:	90                   	nop
  401230:	f3 0f 1e fa          	endbr64 
  401234:	68 20 00 00 00       	push   $0x20
  401239:	f2 e9 e1 fd ff ff    	bnd jmp 401020 <.plt>
  40123f:	90                   	nop
  401240:	f3 0f 1e fa          	endbr64 
  401244:	68 21 00 00 00       	push   $0x21
  401249:	f2 e9 d1 fd ff ff    	bnd jmp 401020 <.plt>
  40124f:	90                   	nop

Disassembly of section .plt.sec:

0000000000401250 <strcasecmp@plt>:
  401250:	f3 0f 1e fa          	endbr64 
  401254:	f2 ff 25 bd 5d 00 00 	bnd jmp *0x5dbd(%rip)        # 407018 <strcasecmp@GLIBC_2.2.5>
  40125b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401260 <__errno_location@plt>:
  401260:	f3 0f 1e fa          	endbr64 
  401264:	f2 ff 25 b5 5d 00 00 	bnd jmp *0x5db5(%rip)        # 407020 <__errno_location@GLIBC_2.2.5>
  40126b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401270 <srandom@plt>:
  401270:	f3 0f 1e fa          	endbr64 
  401274:	f2 ff 25 ad 5d 00 00 	bnd jmp *0x5dad(%rip)        # 407028 <srandom@GLIBC_2.2.5>
  40127b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401280 <strncpy@plt>:
  401280:	f3 0f 1e fa          	endbr64 
  401284:	f2 ff 25 a5 5d 00 00 	bnd jmp *0x5da5(%rip)        # 407030 <strncpy@GLIBC_2.2.5>
  40128b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401290 <strncmp@plt>:
  401290:	f3 0f 1e fa          	endbr64 
  401294:	f2 ff 25 9d 5d 00 00 	bnd jmp *0x5d9d(%rip)        # 407038 <strncmp@GLIBC_2.2.5>
  40129b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004012a0 <strcpy@plt>:
  4012a0:	f3 0f 1e fa          	endbr64 
  4012a4:	f2 ff 25 95 5d 00 00 	bnd jmp *0x5d95(%rip)        # 407040 <strcpy@GLIBC_2.2.5>
  4012ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004012b0 <puts@plt>:
  4012b0:	f3 0f 1e fa          	endbr64 
  4012b4:	f2 ff 25 8d 5d 00 00 	bnd jmp *0x5d8d(%rip)        # 407048 <puts@GLIBC_2.2.5>
  4012bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004012c0 <write@plt>:
  4012c0:	f3 0f 1e fa          	endbr64 
  4012c4:	f2 ff 25 85 5d 00 00 	bnd jmp *0x5d85(%rip)        # 407050 <write@GLIBC_2.2.5>
  4012cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004012d0 <mmap@plt>:
  4012d0:	f3 0f 1e fa          	endbr64 
  4012d4:	f2 ff 25 7d 5d 00 00 	bnd jmp *0x5d7d(%rip)        # 407058 <mmap@GLIBC_2.2.5>
  4012db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004012e0 <memset@plt>:
  4012e0:	f3 0f 1e fa          	endbr64 
  4012e4:	f2 ff 25 75 5d 00 00 	bnd jmp *0x5d75(%rip)        # 407060 <memset@GLIBC_2.2.5>
  4012eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004012f0 <alarm@plt>:
  4012f0:	f3 0f 1e fa          	endbr64 
  4012f4:	f2 ff 25 6d 5d 00 00 	bnd jmp *0x5d6d(%rip)        # 407068 <alarm@GLIBC_2.2.5>
  4012fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401300 <close@plt>:
  401300:	f3 0f 1e fa          	endbr64 
  401304:	f2 ff 25 65 5d 00 00 	bnd jmp *0x5d65(%rip)        # 407070 <close@GLIBC_2.2.5>
  40130b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401310 <read@plt>:
  401310:	f3 0f 1e fa          	endbr64 
  401314:	f2 ff 25 5d 5d 00 00 	bnd jmp *0x5d5d(%rip)        # 407078 <read@GLIBC_2.2.5>
  40131b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401320 <strcmp@plt>:
  401320:	f3 0f 1e fa          	endbr64 
  401324:	f2 ff 25 55 5d 00 00 	bnd jmp *0x5d55(%rip)        # 407080 <strcmp@GLIBC_2.2.5>
  40132b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401330 <signal@plt>:
  401330:	f3 0f 1e fa          	endbr64 
  401334:	f2 ff 25 4d 5d 00 00 	bnd jmp *0x5d4d(%rip)        # 407088 <signal@GLIBC_2.2.5>
  40133b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401340 <gethostbyname@plt>:
  401340:	f3 0f 1e fa          	endbr64 
  401344:	f2 ff 25 45 5d 00 00 	bnd jmp *0x5d45(%rip)        # 407090 <gethostbyname@GLIBC_2.2.5>
  40134b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401350 <__memmove_chk@plt>:
  401350:	f3 0f 1e fa          	endbr64 
  401354:	f2 ff 25 3d 5d 00 00 	bnd jmp *0x5d3d(%rip)        # 407098 <__memmove_chk@GLIBC_2.3.4>
  40135b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401360 <strtol@plt>:
  401360:	f3 0f 1e fa          	endbr64 
  401364:	f2 ff 25 35 5d 00 00 	bnd jmp *0x5d35(%rip)        # 4070a0 <strtol@GLIBC_2.2.5>
  40136b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401370 <memcpy@plt>:
  401370:	f3 0f 1e fa          	endbr64 
  401374:	f2 ff 25 2d 5d 00 00 	bnd jmp *0x5d2d(%rip)        # 4070a8 <memcpy@GLIBC_2.14>
  40137b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401380 <time@plt>:
  401380:	f3 0f 1e fa          	endbr64 
  401384:	f2 ff 25 25 5d 00 00 	bnd jmp *0x5d25(%rip)        # 4070b0 <time@GLIBC_2.2.5>
  40138b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401390 <random@plt>:
  401390:	f3 0f 1e fa          	endbr64 
  401394:	f2 ff 25 1d 5d 00 00 	bnd jmp *0x5d1d(%rip)        # 4070b8 <random@GLIBC_2.2.5>
  40139b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004013a0 <__isoc99_sscanf@plt>:
  4013a0:	f3 0f 1e fa          	endbr64 
  4013a4:	f2 ff 25 15 5d 00 00 	bnd jmp *0x5d15(%rip)        # 4070c0 <__isoc99_sscanf@GLIBC_2.7>
  4013ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004013b0 <munmap@plt>:
  4013b0:	f3 0f 1e fa          	endbr64 
  4013b4:	f2 ff 25 0d 5d 00 00 	bnd jmp *0x5d0d(%rip)        # 4070c8 <munmap@GLIBC_2.2.5>
  4013bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004013c0 <__printf_chk@plt>:
  4013c0:	f3 0f 1e fa          	endbr64 
  4013c4:	f2 ff 25 05 5d 00 00 	bnd jmp *0x5d05(%rip)        # 4070d0 <__printf_chk@GLIBC_2.3.4>
  4013cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004013d0 <fopen@plt>:
  4013d0:	f3 0f 1e fa          	endbr64 
  4013d4:	f2 ff 25 fd 5c 00 00 	bnd jmp *0x5cfd(%rip)        # 4070d8 <fopen@GLIBC_2.2.5>
  4013db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004013e0 <getopt@plt>:
  4013e0:	f3 0f 1e fa          	endbr64 
  4013e4:	f2 ff 25 f5 5c 00 00 	bnd jmp *0x5cf5(%rip)        # 4070e0 <getopt@GLIBC_2.2.5>
  4013eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004013f0 <strtoul@plt>:
  4013f0:	f3 0f 1e fa          	endbr64 
  4013f4:	f2 ff 25 ed 5c 00 00 	bnd jmp *0x5ced(%rip)        # 4070e8 <strtoul@GLIBC_2.2.5>
  4013fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401400 <gethostname@plt>:
  401400:	f3 0f 1e fa          	endbr64 
  401404:	f2 ff 25 e5 5c 00 00 	bnd jmp *0x5ce5(%rip)        # 4070f0 <gethostname@GLIBC_2.2.5>
  40140b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401410 <exit@plt>:
  401410:	f3 0f 1e fa          	endbr64 
  401414:	f2 ff 25 dd 5c 00 00 	bnd jmp *0x5cdd(%rip)        # 4070f8 <exit@GLIBC_2.2.5>
  40141b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401420 <connect@plt>:
  401420:	f3 0f 1e fa          	endbr64 
  401424:	f2 ff 25 d5 5c 00 00 	bnd jmp *0x5cd5(%rip)        # 407100 <connect@GLIBC_2.2.5>
  40142b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401430 <__fprintf_chk@plt>:
  401430:	f3 0f 1e fa          	endbr64 
  401434:	f2 ff 25 cd 5c 00 00 	bnd jmp *0x5ccd(%rip)        # 407108 <__fprintf_chk@GLIBC_2.3.4>
  40143b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401440 <getc@plt>:
  401440:	f3 0f 1e fa          	endbr64 
  401444:	f2 ff 25 c5 5c 00 00 	bnd jmp *0x5cc5(%rip)        # 407110 <getc@GLIBC_2.2.5>
  40144b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401450 <__sprintf_chk@plt>:
  401450:	f3 0f 1e fa          	endbr64 
  401454:	f2 ff 25 bd 5c 00 00 	bnd jmp *0x5cbd(%rip)        # 407118 <__sprintf_chk@GLIBC_2.3.4>
  40145b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401460 <socket@plt>:
  401460:	f3 0f 1e fa          	endbr64 
  401464:	f2 ff 25 b5 5c 00 00 	bnd jmp *0x5cb5(%rip)        # 407120 <socket@GLIBC_2.2.5>
  40146b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000401470 <_start>:
  401470:	f3 0f 1e fa          	endbr64 
  401474:	31 ed                	xor    %ebp,%ebp
  401476:	49 89 d1             	mov    %rdx,%r9
  401479:	5e                   	pop    %rsi
  40147a:	48 89 e2             	mov    %rsp,%rdx
  40147d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  401481:	50                   	push   %rax
  401482:	54                   	push   %rsp
  401483:	49 c7 c0 60 39 40 00 	mov    $0x403960,%r8
  40148a:	48 c7 c1 f0 38 40 00 	mov    $0x4038f0,%rcx
  401491:	48 c7 c7 99 17 40 00 	mov    $0x401799,%rdi
  401498:	ff 15 52 5b 00 00    	call   *0x5b52(%rip)        # 406ff0 <__libc_start_main@GLIBC_2.2.5>
  40149e:	f4                   	hlt    
  40149f:	90                   	nop

00000000004014a0 <_dl_relocate_static_pie>:
  4014a0:	f3 0f 1e fa          	endbr64 
  4014a4:	c3                   	ret    
  4014a5:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
  4014ac:	00 00 00 
  4014af:	90                   	nop

00000000004014b0 <deregister_tm_clones>:
  4014b0:	b8 b0 74 40 00       	mov    $0x4074b0,%eax
  4014b5:	48 3d b0 74 40 00    	cmp    $0x4074b0,%rax
  4014bb:	74 13                	je     4014d0 <deregister_tm_clones+0x20>
  4014bd:	b8 00 00 00 00       	mov    $0x0,%eax
  4014c2:	48 85 c0             	test   %rax,%rax
  4014c5:	74 09                	je     4014d0 <deregister_tm_clones+0x20>
  4014c7:	bf b0 74 40 00       	mov    $0x4074b0,%edi
  4014cc:	ff e0                	jmp    *%rax
  4014ce:	66 90                	xchg   %ax,%ax
  4014d0:	c3                   	ret    
  4014d1:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
  4014d8:	00 00 00 00 
  4014dc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004014e0 <register_tm_clones>:
  4014e0:	be b0 74 40 00       	mov    $0x4074b0,%esi
  4014e5:	48 81 ee b0 74 40 00 	sub    $0x4074b0,%rsi
  4014ec:	48 89 f0             	mov    %rsi,%rax
  4014ef:	48 c1 ee 3f          	shr    $0x3f,%rsi
  4014f3:	48 c1 f8 03          	sar    $0x3,%rax
  4014f7:	48 01 c6             	add    %rax,%rsi
  4014fa:	48 d1 fe             	sar    %rsi
  4014fd:	74 11                	je     401510 <register_tm_clones+0x30>
  4014ff:	b8 00 00 00 00       	mov    $0x0,%eax
  401504:	48 85 c0             	test   %rax,%rax
  401507:	74 07                	je     401510 <register_tm_clones+0x30>
  401509:	bf b0 74 40 00       	mov    $0x4074b0,%edi
  40150e:	ff e0                	jmp    *%rax
  401510:	c3                   	ret    
  401511:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
  401518:	00 00 00 00 
  40151c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000401520 <__do_global_dtors_aux>:
  401520:	f3 0f 1e fa          	endbr64 
  401524:	80 3d bd 5f 00 00 00 	cmpb   $0x0,0x5fbd(%rip)        # 4074e8 <completed.8060>
  40152b:	75 13                	jne    401540 <__do_global_dtors_aux+0x20>
  40152d:	55                   	push   %rbp
  40152e:	48 89 e5             	mov    %rsp,%rbp
  401531:	e8 7a ff ff ff       	call   4014b0 <deregister_tm_clones>
  401536:	c6 05 ab 5f 00 00 01 	movb   $0x1,0x5fab(%rip)        # 4074e8 <completed.8060>
  40153d:	5d                   	pop    %rbp
  40153e:	c3                   	ret    
  40153f:	90                   	nop
  401540:	c3                   	ret    
  401541:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
  401548:	00 00 00 00 
  40154c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000401550 <frame_dummy>:
  401550:	f3 0f 1e fa          	endbr64 
  401554:	eb 8a                	jmp    4014e0 <register_tm_clones>

0000000000401556 <usage>:
  401556:	50                   	push   %rax
  401557:	58                   	pop    %rax
  401558:	48 83 ec 08          	sub    $0x8,%rsp
  40155c:	48 89 fa             	mov    %rdi,%rdx
  40155f:	83 3d c2 5f 00 00 00 	cmpl   $0x0,0x5fc2(%rip)        # 407528 <is_checker>
  401566:	74 50                	je     4015b8 <usage+0x62>
  401568:	48 8d 35 99 2a 00 00 	lea    0x2a99(%rip),%rsi        # 404008 <_IO_stdin_used+0x8>
  40156f:	bf 01 00 00 00       	mov    $0x1,%edi
  401574:	b8 00 00 00 00       	mov    $0x0,%eax
  401579:	e8 42 fe ff ff       	call   4013c0 <__printf_chk@plt>
  40157e:	48 8d 3d bb 2a 00 00 	lea    0x2abb(%rip),%rdi        # 404040 <_IO_stdin_used+0x40>
  401585:	e8 26 fd ff ff       	call   4012b0 <puts@plt>
  40158a:	48 8d 3d 3f 2c 00 00 	lea    0x2c3f(%rip),%rdi        # 4041d0 <_IO_stdin_used+0x1d0>
  401591:	e8 1a fd ff ff       	call   4012b0 <puts@plt>
  401596:	48 8d 3d cb 2a 00 00 	lea    0x2acb(%rip),%rdi        # 404068 <_IO_stdin_used+0x68>
  40159d:	e8 0e fd ff ff       	call   4012b0 <puts@plt>
  4015a2:	48 8d 3d 41 2c 00 00 	lea    0x2c41(%rip),%rdi        # 4041ea <_IO_stdin_used+0x1ea>
  4015a9:	e8 02 fd ff ff       	call   4012b0 <puts@plt>
  4015ae:	bf 00 00 00 00       	mov    $0x0,%edi
  4015b3:	e8 58 fe ff ff       	call   401410 <exit@plt>
  4015b8:	48 8d 35 47 2c 00 00 	lea    0x2c47(%rip),%rsi        # 404206 <_IO_stdin_used+0x206>
  4015bf:	bf 01 00 00 00       	mov    $0x1,%edi
  4015c4:	b8 00 00 00 00       	mov    $0x0,%eax
  4015c9:	e8 f2 fd ff ff       	call   4013c0 <__printf_chk@plt>
  4015ce:	48 8d 3d bb 2a 00 00 	lea    0x2abb(%rip),%rdi        # 404090 <_IO_stdin_used+0x90>
  4015d5:	e8 d6 fc ff ff       	call   4012b0 <puts@plt>
  4015da:	48 8d 3d d7 2a 00 00 	lea    0x2ad7(%rip),%rdi        # 4040b8 <_IO_stdin_used+0xb8>
  4015e1:	e8 ca fc ff ff       	call   4012b0 <puts@plt>
  4015e6:	48 8d 3d 37 2c 00 00 	lea    0x2c37(%rip),%rdi        # 404224 <_IO_stdin_used+0x224>
  4015ed:	e8 be fc ff ff       	call   4012b0 <puts@plt>
  4015f2:	eb ba                	jmp    4015ae <usage+0x58>

00000000004015f4 <initialize_target>:
  4015f4:	55                   	push   %rbp
  4015f5:	53                   	push   %rbx
  4015f6:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  4015fd:	48 83 0c 24 00       	orq    $0x0,(%rsp)
  401602:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  401609:	48 83 0c 24 00       	orq    $0x0,(%rsp)
  40160e:	48 81 ec 18 01 00 00 	sub    $0x118,%rsp
  401615:	89 f5                	mov    %esi,%ebp
  401617:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40161e:	00 00 
  401620:	48 89 84 24 08 21 00 	mov    %rax,0x2108(%rsp)
  401627:	00 
  401628:	31 c0                	xor    %eax,%eax
  40162a:	89 3d e8 5e 00 00    	mov    %edi,0x5ee8(%rip)        # 407518 <check_level>
  401630:	8b 3d 1a 5b 00 00    	mov    0x5b1a(%rip),%edi        # 407150 <target_id>
  401636:	e8 90 22 00 00       	call   4038cb <gencookie>
  40163b:	89 c7                	mov    %eax,%edi
  40163d:	89 05 e1 5e 00 00    	mov    %eax,0x5ee1(%rip)        # 407524 <cookie>
  401643:	e8 83 22 00 00       	call   4038cb <gencookie>
  401648:	89 05 d2 5e 00 00    	mov    %eax,0x5ed2(%rip)        # 407520 <authkey>
  40164e:	8b 05 fc 5a 00 00    	mov    0x5afc(%rip),%eax        # 407150 <target_id>
  401654:	8d 78 01             	lea    0x1(%rax),%edi
  401657:	e8 14 fc ff ff       	call   401270 <srandom@plt>
  40165c:	e8 2f fd ff ff       	call   401390 <random@plt>
  401661:	48 89 c7             	mov    %rax,%rdi
  401664:	e8 9b 03 00 00       	call   401a04 <scramble>
  401669:	89 c3                	mov    %eax,%ebx
  40166b:	85 ed                	test   %ebp,%ebp
  40166d:	75 54                	jne    4016c3 <initialize_target+0xcf>
  40166f:	b8 00 00 00 00       	mov    $0x0,%eax
  401674:	01 d8                	add    %ebx,%eax
  401676:	0f b7 c0             	movzwl %ax,%eax
  401679:	8d 04 c5 00 01 00 00 	lea    0x100(,%rax,8),%eax
  401680:	89 c0                	mov    %eax,%eax
  401682:	48 89 05 1f 5e 00 00 	mov    %rax,0x5e1f(%rip)        # 4074a8 <buf_offset>
  401689:	c6 05 b8 6a 00 00 72 	movb   $0x72,0x6ab8(%rip)        # 408148 <target_prefix>
  401690:	83 3d 09 5e 00 00 00 	cmpl   $0x0,0x5e09(%rip)        # 4074a0 <notify>
  401697:	74 09                	je     4016a2 <initialize_target+0xae>
  401699:	83 3d 88 5e 00 00 00 	cmpl   $0x0,0x5e88(%rip)        # 407528 <is_checker>
  4016a0:	74 3a                	je     4016dc <initialize_target+0xe8>
  4016a2:	48 8b 84 24 08 21 00 	mov    0x2108(%rsp),%rax
  4016a9:	00 
  4016aa:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  4016b1:	00 00 
  4016b3:	0f 85 db 00 00 00    	jne    401794 <initialize_target+0x1a0>
  4016b9:	48 81 c4 18 21 00 00 	add    $0x2118,%rsp
  4016c0:	5b                   	pop    %rbx
  4016c1:	5d                   	pop    %rbp
  4016c2:	c3                   	ret    
  4016c3:	bf 00 00 00 00       	mov    $0x0,%edi
  4016c8:	e8 b3 fc ff ff       	call   401380 <time@plt>
  4016cd:	48 89 c7             	mov    %rax,%rdi
  4016d0:	e8 9b fb ff ff       	call   401270 <srandom@plt>
  4016d5:	e8 b6 fc ff ff       	call   401390 <random@plt>
  4016da:	eb 98                	jmp    401674 <initialize_target+0x80>
  4016dc:	48 89 e7             	mov    %rsp,%rdi
  4016df:	be 00 01 00 00       	mov    $0x100,%esi
  4016e4:	e8 17 fd ff ff       	call   401400 <gethostname@plt>
  4016e9:	89 c5                	mov    %eax,%ebp
  4016eb:	85 c0                	test   %eax,%eax
  4016ed:	75 26                	jne    401715 <initialize_target+0x121>
  4016ef:	89 c3                	mov    %eax,%ebx
  4016f1:	48 63 c3             	movslq %ebx,%rax
  4016f4:	48 8d 15 85 5a 00 00 	lea    0x5a85(%rip),%rdx        # 407180 <host_table>
  4016fb:	48 8b 3c c2          	mov    (%rdx,%rax,8),%rdi
  4016ff:	48 85 ff             	test   %rdi,%rdi
  401702:	74 2c                	je     401730 <initialize_target+0x13c>
  401704:	48 89 e6             	mov    %rsp,%rsi
  401707:	e8 44 fb ff ff       	call   401250 <strcasecmp@plt>
  40170c:	85 c0                	test   %eax,%eax
  40170e:	74 1b                	je     40172b <initialize_target+0x137>
  401710:	83 c3 01             	add    $0x1,%ebx
  401713:	eb dc                	jmp    4016f1 <initialize_target+0xfd>
  401715:	48 8d 3d cc 29 00 00 	lea    0x29cc(%rip),%rdi        # 4040e8 <_IO_stdin_used+0xe8>
  40171c:	e8 8f fb ff ff       	call   4012b0 <puts@plt>
  401721:	bf 08 00 00 00       	mov    $0x8,%edi
  401726:	e8 e5 fc ff ff       	call   401410 <exit@plt>
  40172b:	bd 01 00 00 00       	mov    $0x1,%ebp
  401730:	85 ed                	test   %ebp,%ebp
  401732:	74 3d                	je     401771 <initialize_target+0x17d>
  401734:	48 8d bc 24 00 01 00 	lea    0x100(%rsp),%rdi
  40173b:	00 
  40173c:	e8 cf 1e 00 00       	call   403610 <init_driver>
  401741:	85 c0                	test   %eax,%eax
  401743:	0f 89 59 ff ff ff    	jns    4016a2 <initialize_target+0xae>
  401749:	48 8d 94 24 00 01 00 	lea    0x100(%rsp),%rdx
  401750:	00 
  401751:	48 8d 35 08 2a 00 00 	lea    0x2a08(%rip),%rsi        # 404160 <_IO_stdin_used+0x160>
  401758:	bf 01 00 00 00       	mov    $0x1,%edi
  40175d:	b8 00 00 00 00       	mov    $0x0,%eax
  401762:	e8 59 fc ff ff       	call   4013c0 <__printf_chk@plt>
  401767:	bf 08 00 00 00       	mov    $0x8,%edi
  40176c:	e8 9f fc ff ff       	call   401410 <exit@plt>
  401771:	48 89 e2             	mov    %rsp,%rdx
  401774:	48 8d 35 a5 29 00 00 	lea    0x29a5(%rip),%rsi        # 404120 <_IO_stdin_used+0x120>
  40177b:	bf 01 00 00 00       	mov    $0x1,%edi
  401780:	b8 00 00 00 00       	mov    $0x0,%eax
  401785:	e8 36 fc ff ff       	call   4013c0 <__printf_chk@plt>
  40178a:	bf 08 00 00 00       	mov    $0x8,%edi
  40178f:	e8 7c fc ff ff       	call   401410 <exit@plt>
  401794:	e8 8f 11 00 00       	call   402928 <__stack_chk_fail>

0000000000401799 <main>:
  401799:	f3 0f 1e fa          	endbr64 
  40179d:	41 56                	push   %r14
  40179f:	41 55                	push   %r13
  4017a1:	41 54                	push   %r12
  4017a3:	55                   	push   %rbp
  4017a4:	53                   	push   %rbx
  4017a5:	48 83 ec 60          	sub    $0x60,%rsp
  4017a9:	89 fd                	mov    %edi,%ebp
  4017ab:	48 89 f3             	mov    %rsi,%rbx
  4017ae:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4017b5:	00 00 
  4017b7:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
  4017bc:	31 c0                	xor    %eax,%eax
  4017be:	48 b8 53 70 69 72 69 	movabs $0x6465746972697053,%rax
  4017c5:	74 65 64 
  4017c8:	48 89 04 24          	mov    %rax,(%rsp)
  4017cc:	c7 44 24 08 41 77 61 	movl   $0x79617741,0x8(%rsp)
  4017d3:	79 
  4017d4:	66 c7 44 24 0c 43 4e 	movw   $0x4e43,0xc(%rsp)
  4017db:	c6 44 24 0e 00       	movb   $0x0,0xe(%rsp)
  4017e0:	48 c7 c6 17 28 40 00 	mov    $0x402817,%rsi
  4017e7:	bf 0b 00 00 00       	mov    $0xb,%edi
  4017ec:	e8 3f fb ff ff       	call   401330 <signal@plt>
  4017f1:	48 c7 c6 bd 27 40 00 	mov    $0x4027bd,%rsi
  4017f8:	bf 07 00 00 00       	mov    $0x7,%edi
  4017fd:	e8 2e fb ff ff       	call   401330 <signal@plt>
  401802:	48 c7 c6 71 28 40 00 	mov    $0x402871,%rsi
  401809:	bf 04 00 00 00       	mov    $0x4,%edi
  40180e:	e8 1d fb ff ff       	call   401330 <signal@plt>
  401813:	83 3d 0e 5d 00 00 00 	cmpl   $0x0,0x5d0e(%rip)        # 407528 <is_checker>
  40181a:	75 26                	jne    401842 <main+0xa9>
  40181c:	4c 8d 25 24 2a 00 00 	lea    0x2a24(%rip),%r12        # 404247 <_IO_stdin_used+0x247>
  401823:	48 8b 05 96 5c 00 00 	mov    0x5c96(%rip),%rax        # 4074c0 <stdin@GLIBC_2.2.5>
  40182a:	48 89 05 df 5c 00 00 	mov    %rax,0x5cdf(%rip)        # 407510 <infile>
  401831:	41 bd 00 00 00 00    	mov    $0x0,%r13d
  401837:	41 be 00 00 00 00    	mov    $0x0,%r14d
  40183d:	e9 8d 00 00 00       	jmp    4018cf <main+0x136>
  401842:	48 c7 c6 cb 28 40 00 	mov    $0x4028cb,%rsi
  401849:	bf 0e 00 00 00       	mov    $0xe,%edi
  40184e:	e8 dd fa ff ff       	call   401330 <signal@plt>
  401853:	bf 02 00 00 00       	mov    $0x2,%edi
  401858:	e8 93 fa ff ff       	call   4012f0 <alarm@plt>
  40185d:	4c 8d 25 d9 29 00 00 	lea    0x29d9(%rip),%r12        # 40423d <_IO_stdin_used+0x23d>
  401864:	eb bd                	jmp    401823 <main+0x8a>
  401866:	48 8b 3b             	mov    (%rbx),%rdi
  401869:	e8 e8 fc ff ff       	call   401556 <usage>
  40186e:	48 8d 35 9f 2a 00 00 	lea    0x2a9f(%rip),%rsi        # 404314 <_IO_stdin_used+0x314>
  401875:	48 8b 3d 4c 5c 00 00 	mov    0x5c4c(%rip),%rdi        # 4074c8 <optarg@GLIBC_2.2.5>
  40187c:	e8 4f fb ff ff       	call   4013d0 <fopen@plt>
  401881:	48 89 05 88 5c 00 00 	mov    %rax,0x5c88(%rip)        # 407510 <infile>
  401888:	48 85 c0             	test   %rax,%rax
  40188b:	75 42                	jne    4018cf <main+0x136>
  40188d:	48 8b 0d 34 5c 00 00 	mov    0x5c34(%rip),%rcx        # 4074c8 <optarg@GLIBC_2.2.5>
  401894:	48 8d 15 b1 29 00 00 	lea    0x29b1(%rip),%rdx        # 40424c <_IO_stdin_used+0x24c>
  40189b:	be 01 00 00 00       	mov    $0x1,%esi
  4018a0:	48 8b 3d 39 5c 00 00 	mov    0x5c39(%rip),%rdi        # 4074e0 <stderr@GLIBC_2.2.5>
  4018a7:	e8 84 fb ff ff       	call   401430 <__fprintf_chk@plt>
  4018ac:	b8 01 00 00 00       	mov    $0x1,%eax
  4018b1:	e9 2c 01 00 00       	jmp    4019e2 <main+0x249>
  4018b6:	ba 10 00 00 00       	mov    $0x10,%edx
  4018bb:	be 00 00 00 00       	mov    $0x0,%esi
  4018c0:	48 8b 3d 01 5c 00 00 	mov    0x5c01(%rip),%rdi        # 4074c8 <optarg@GLIBC_2.2.5>
  4018c7:	e8 24 fb ff ff       	call   4013f0 <strtoul@plt>
  4018cc:	41 89 c6             	mov    %eax,%r14d
  4018cf:	4c 89 e2             	mov    %r12,%rdx
  4018d2:	48 89 de             	mov    %rbx,%rsi
  4018d5:	89 ef                	mov    %ebp,%edi
  4018d7:	e8 04 fb ff ff       	call   4013e0 <getopt@plt>
  4018dc:	3c ff                	cmp    $0xff,%al
  4018de:	74 7b                	je     40195b <main+0x1c2>
  4018e0:	0f be c8             	movsbl %al,%ecx
  4018e3:	83 e8 61             	sub    $0x61,%eax
  4018e6:	3c 14                	cmp    $0x14,%al
  4018e8:	77 51                	ja     40193b <main+0x1a2>
  4018ea:	0f b6 c0             	movzbl %al,%eax
  4018ed:	48 8d 15 98 29 00 00 	lea    0x2998(%rip),%rdx        # 40428c <_IO_stdin_used+0x28c>
  4018f4:	48 63 04 82          	movslq (%rdx,%rax,4),%rax
  4018f8:	48 01 d0             	add    %rdx,%rax
  4018fb:	3e ff e0             	notrack jmp *%rax
  4018fe:	ba 0a 00 00 00       	mov    $0xa,%edx
  401903:	be 00 00 00 00       	mov    $0x0,%esi
  401908:	48 8b 3d b9 5b 00 00 	mov    0x5bb9(%rip),%rdi        # 4074c8 <optarg@GLIBC_2.2.5>
  40190f:	e8 4c fa ff ff       	call   401360 <strtol@plt>
  401914:	41 89 c5             	mov    %eax,%r13d
  401917:	eb b6                	jmp    4018cf <main+0x136>
  401919:	c7 05 7d 5b 00 00 00 	movl   $0x0,0x5b7d(%rip)        # 4074a0 <notify>
  401920:	00 00 00 
  401923:	eb aa                	jmp    4018cf <main+0x136>
  401925:	48 89 e7             	mov    %rsp,%rdi
  401928:	ba 50 00 00 00       	mov    $0x50,%edx
  40192d:	48 8b 35 94 5b 00 00 	mov    0x5b94(%rip),%rsi        # 4074c8 <optarg@GLIBC_2.2.5>
  401934:	e8 47 f9 ff ff       	call   401280 <strncpy@plt>
  401939:	eb 94                	jmp    4018cf <main+0x136>
  40193b:	89 ca                	mov    %ecx,%edx
  40193d:	48 8d 35 25 29 00 00 	lea    0x2925(%rip),%rsi        # 404269 <_IO_stdin_used+0x269>
  401944:	bf 01 00 00 00       	mov    $0x1,%edi
  401949:	b8 00 00 00 00       	mov    $0x0,%eax
  40194e:	e8 6d fa ff ff       	call   4013c0 <__printf_chk@plt>
  401953:	48 8b 3b             	mov    (%rbx),%rdi
  401956:	e8 fb fb ff ff       	call   401556 <usage>
  40195b:	be 01 00 00 00       	mov    $0x1,%esi
  401960:	44 89 ef             	mov    %r13d,%edi
  401963:	e8 8c fc ff ff       	call   4015f4 <initialize_target>
  401968:	83 3d b9 5b 00 00 00 	cmpl   $0x0,0x5bb9(%rip)        # 407528 <is_checker>
  40196f:	74 3f                	je     4019b0 <main+0x217>
  401971:	44 39 35 a8 5b 00 00 	cmp    %r14d,0x5ba8(%rip)        # 407520 <authkey>
  401978:	75 13                	jne    40198d <main+0x1f4>
  40197a:	48 89 e7             	mov    %rsp,%rdi
  40197d:	48 8b 35 dc 57 00 00 	mov    0x57dc(%rip),%rsi        # 407160 <user_id>
  401984:	e8 97 f9 ff ff       	call   401320 <strcmp@plt>
  401989:	85 c0                	test   %eax,%eax
  40198b:	74 23                	je     4019b0 <main+0x217>
  40198d:	44 89 f2             	mov    %r14d,%edx
  401990:	48 8d 35 f1 27 00 00 	lea    0x27f1(%rip),%rsi        # 404188 <_IO_stdin_used+0x188>
  401997:	bf 01 00 00 00       	mov    $0x1,%edi
  40199c:	b8 00 00 00 00       	mov    $0x0,%eax
  4019a1:	e8 1a fa ff ff       	call   4013c0 <__printf_chk@plt>
  4019a6:	b8 00 00 00 00       	mov    $0x0,%eax
  4019ab:	e8 56 0a 00 00       	call   402406 <check_fail>
  4019b0:	8b 15 6e 5b 00 00    	mov    0x5b6e(%rip),%edx        # 407524 <cookie>
  4019b6:	48 8d 35 bf 28 00 00 	lea    0x28bf(%rip),%rsi        # 40427c <_IO_stdin_used+0x27c>
  4019bd:	bf 01 00 00 00       	mov    $0x1,%edi
  4019c2:	b8 00 00 00 00       	mov    $0x0,%eax
  4019c7:	e8 f4 f9 ff ff       	call   4013c0 <__printf_chk@plt>
  4019cc:	be 00 00 00 00       	mov    $0x0,%esi
  4019d1:	48 8b 3d d0 5a 00 00 	mov    0x5ad0(%rip),%rdi        # 4074a8 <buf_offset>
  4019d8:	e8 a5 0f 00 00       	call   402982 <launch>
  4019dd:	b8 00 00 00 00       	mov    $0x0,%eax
  4019e2:	48 8b 4c 24 58       	mov    0x58(%rsp),%rcx
  4019e7:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  4019ee:	00 00 
  4019f0:	75 0d                	jne    4019ff <main+0x266>
  4019f2:	48 83 c4 60          	add    $0x60,%rsp
  4019f6:	5b                   	pop    %rbx
  4019f7:	5d                   	pop    %rbp
  4019f8:	41 5c                	pop    %r12
  4019fa:	41 5d                	pop    %r13
  4019fc:	41 5e                	pop    %r14
  4019fe:	c3                   	ret    
  4019ff:	e8 24 0f 00 00       	call   402928 <__stack_chk_fail>

0000000000401a04 <scramble>:
  401a04:	f3 0f 1e fa          	endbr64 
  401a08:	48 83 ec 38          	sub    $0x38,%rsp
  401a0c:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401a13:	00 00 
  401a15:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
  401a1a:	31 c0                	xor    %eax,%eax
  401a1c:	83 f8 09             	cmp    $0x9,%eax
  401a1f:	77 12                	ja     401a33 <scramble+0x2f>
  401a21:	69 d0 53 a5 00 00    	imul   $0xa553,%eax,%edx
  401a27:	01 fa                	add    %edi,%edx
  401a29:	89 c1                	mov    %eax,%ecx
  401a2b:	89 14 8c             	mov    %edx,(%rsp,%rcx,4)
  401a2e:	83 c0 01             	add    $0x1,%eax
  401a31:	eb e9                	jmp    401a1c <scramble+0x18>
  401a33:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401a37:	69 c0 08 19 00 00    	imul   $0x1908,%eax,%eax
  401a3d:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401a41:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401a45:	69 c0 a8 d9 00 00    	imul   $0xd9a8,%eax,%eax
  401a4b:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401a4f:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401a53:	69 c0 86 1e 00 00    	imul   $0x1e86,%eax,%eax
  401a59:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401a5d:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401a61:	69 c0 41 81 00 00    	imul   $0x8141,%eax,%eax
  401a67:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401a6b:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401a6f:	69 c0 ac 8e 00 00    	imul   $0x8eac,%eax,%eax
  401a75:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401a79:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401a7d:	69 c0 20 76 00 00    	imul   $0x7620,%eax,%eax
  401a83:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401a87:	8b 44 24 08          	mov    0x8(%rsp),%eax
  401a8b:	69 c0 54 56 00 00    	imul   $0x5654,%eax,%eax
  401a91:	89 44 24 08          	mov    %eax,0x8(%rsp)
  401a95:	8b 04 24             	mov    (%rsp),%eax
  401a98:	69 c0 8e fa 00 00    	imul   $0xfa8e,%eax,%eax
  401a9e:	89 04 24             	mov    %eax,(%rsp)
  401aa1:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401aa5:	6b c0 5a             	imul   $0x5a,%eax,%eax
  401aa8:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401aac:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401ab0:	69 c0 05 25 00 00    	imul   $0x2505,%eax,%eax
  401ab6:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401aba:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401abe:	69 c0 69 3a 00 00    	imul   $0x3a69,%eax,%eax
  401ac4:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401ac8:	8b 44 24 04          	mov    0x4(%rsp),%eax
  401acc:	69 c0 59 9d 00 00    	imul   $0x9d59,%eax,%eax
  401ad2:	89 44 24 04          	mov    %eax,0x4(%rsp)
  401ad6:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401ada:	69 c0 39 64 00 00    	imul   $0x6439,%eax,%eax
  401ae0:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401ae4:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401ae8:	69 c0 68 7c 00 00    	imul   $0x7c68,%eax,%eax
  401aee:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401af2:	8b 04 24             	mov    (%rsp),%eax
  401af5:	69 c0 6f 67 00 00    	imul   $0x676f,%eax,%eax
  401afb:	89 04 24             	mov    %eax,(%rsp)
  401afe:	8b 04 24             	mov    (%rsp),%eax
  401b01:	69 c0 73 ad 00 00    	imul   $0xad73,%eax,%eax
  401b07:	89 04 24             	mov    %eax,(%rsp)
  401b0a:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401b0e:	69 c0 47 dd 00 00    	imul   $0xdd47,%eax,%eax
  401b14:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401b18:	8b 44 24 04          	mov    0x4(%rsp),%eax
  401b1c:	69 c0 ee 49 00 00    	imul   $0x49ee,%eax,%eax
  401b22:	89 44 24 04          	mov    %eax,0x4(%rsp)
  401b26:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401b2a:	69 c0 12 64 00 00    	imul   $0x6412,%eax,%eax
  401b30:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401b34:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401b38:	69 c0 4a 2f 00 00    	imul   $0x2f4a,%eax,%eax
  401b3e:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401b42:	8b 44 24 08          	mov    0x8(%rsp),%eax
  401b46:	69 c0 df dc 00 00    	imul   $0xdcdf,%eax,%eax
  401b4c:	89 44 24 08          	mov    %eax,0x8(%rsp)
  401b50:	8b 44 24 04          	mov    0x4(%rsp),%eax
  401b54:	69 c0 76 30 00 00    	imul   $0x3076,%eax,%eax
  401b5a:	89 44 24 04          	mov    %eax,0x4(%rsp)
  401b5e:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401b62:	69 c0 0a 9b 00 00    	imul   $0x9b0a,%eax,%eax
  401b68:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401b6c:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401b70:	69 c0 87 8d 00 00    	imul   $0x8d87,%eax,%eax
  401b76:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401b7a:	8b 04 24             	mov    (%rsp),%eax
  401b7d:	69 c0 78 56 00 00    	imul   $0x5678,%eax,%eax
  401b83:	89 04 24             	mov    %eax,(%rsp)
  401b86:	8b 44 24 04          	mov    0x4(%rsp),%eax
  401b8a:	69 c0 c5 db 00 00    	imul   $0xdbc5,%eax,%eax
  401b90:	89 44 24 04          	mov    %eax,0x4(%rsp)
  401b94:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401b98:	69 c0 53 1a 00 00    	imul   $0x1a53,%eax,%eax
  401b9e:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401ba2:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401ba6:	69 c0 a8 64 00 00    	imul   $0x64a8,%eax,%eax
  401bac:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401bb0:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401bb4:	69 c0 04 ae 00 00    	imul   $0xae04,%eax,%eax
  401bba:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401bbe:	8b 04 24             	mov    (%rsp),%eax
  401bc1:	69 c0 ac 86 00 00    	imul   $0x86ac,%eax,%eax
  401bc7:	89 04 24             	mov    %eax,(%rsp)
  401bca:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401bce:	69 c0 95 28 00 00    	imul   $0x2895,%eax,%eax
  401bd4:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401bd8:	8b 44 24 08          	mov    0x8(%rsp),%eax
  401bdc:	69 c0 ec 95 00 00    	imul   $0x95ec,%eax,%eax
  401be2:	89 44 24 08          	mov    %eax,0x8(%rsp)
  401be6:	8b 04 24             	mov    (%rsp),%eax
  401be9:	69 c0 3a bb 00 00    	imul   $0xbb3a,%eax,%eax
  401bef:	89 04 24             	mov    %eax,(%rsp)
  401bf2:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401bf6:	69 c0 aa 01 00 00    	imul   $0x1aa,%eax,%eax
  401bfc:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401c00:	8b 04 24             	mov    (%rsp),%eax
  401c03:	69 c0 09 ab 00 00    	imul   $0xab09,%eax,%eax
  401c09:	89 04 24             	mov    %eax,(%rsp)
  401c0c:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401c10:	69 c0 0a 12 00 00    	imul   $0x120a,%eax,%eax
  401c16:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401c1a:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401c1e:	69 c0 5e d6 00 00    	imul   $0xd65e,%eax,%eax
  401c24:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401c28:	8b 44 24 08          	mov    0x8(%rsp),%eax
  401c2c:	69 c0 1b bb 00 00    	imul   $0xbb1b,%eax,%eax
  401c32:	89 44 24 08          	mov    %eax,0x8(%rsp)
  401c36:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401c3a:	69 c0 85 6d 00 00    	imul   $0x6d85,%eax,%eax
  401c40:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401c44:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401c48:	69 c0 cc 0c 00 00    	imul   $0xccc,%eax,%eax
  401c4e:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401c52:	8b 44 24 04          	mov    0x4(%rsp),%eax
  401c56:	69 c0 2e fb 00 00    	imul   $0xfb2e,%eax,%eax
  401c5c:	89 44 24 04          	mov    %eax,0x4(%rsp)
  401c60:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401c64:	69 c0 de 54 00 00    	imul   $0x54de,%eax,%eax
  401c6a:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401c6e:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401c72:	69 c0 af 61 00 00    	imul   $0x61af,%eax,%eax
  401c78:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401c7c:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401c80:	69 c0 0d 94 00 00    	imul   $0x940d,%eax,%eax
  401c86:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401c8a:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401c8e:	69 c0 97 9a 00 00    	imul   $0x9a97,%eax,%eax
  401c94:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401c98:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401c9c:	69 c0 28 25 00 00    	imul   $0x2528,%eax,%eax
  401ca2:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401ca6:	8b 04 24             	mov    (%rsp),%eax
  401ca9:	69 c0 d8 4e 00 00    	imul   $0x4ed8,%eax,%eax
  401caf:	89 04 24             	mov    %eax,(%rsp)
  401cb2:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401cb6:	69 c0 09 c9 00 00    	imul   $0xc909,%eax,%eax
  401cbc:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401cc0:	8b 44 24 14          	mov    0x14(%rsp),%eax
  401cc4:	69 c0 ee 9a 00 00    	imul   $0x9aee,%eax,%eax
  401cca:	89 44 24 14          	mov    %eax,0x14(%rsp)
  401cce:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401cd2:	69 c0 5e 29 00 00    	imul   $0x295e,%eax,%eax
  401cd8:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401cdc:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401ce0:	69 c0 a7 fb 00 00    	imul   $0xfba7,%eax,%eax
  401ce6:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401cea:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401cee:	69 c0 df cd 00 00    	imul   $0xcddf,%eax,%eax
  401cf4:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401cf8:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401cfc:	69 c0 e9 7d 00 00    	imul   $0x7de9,%eax,%eax
  401d02:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401d06:	8b 04 24             	mov    (%rsp),%eax
  401d09:	69 c0 6d 43 00 00    	imul   $0x436d,%eax,%eax
  401d0f:	89 04 24             	mov    %eax,(%rsp)
  401d12:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401d16:	69 c0 9c d1 00 00    	imul   $0xd19c,%eax,%eax
  401d1c:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401d20:	8b 04 24             	mov    (%rsp),%eax
  401d23:	69 c0 6b af 00 00    	imul   $0xaf6b,%eax,%eax
  401d29:	89 04 24             	mov    %eax,(%rsp)
  401d2c:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401d30:	69 c0 ca 38 00 00    	imul   $0x38ca,%eax,%eax
  401d36:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401d3a:	8b 44 24 04          	mov    0x4(%rsp),%eax
  401d3e:	69 c0 4b e2 00 00    	imul   $0xe24b,%eax,%eax
  401d44:	89 44 24 04          	mov    %eax,0x4(%rsp)
  401d48:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401d4c:	69 c0 cf bd 00 00    	imul   $0xbdcf,%eax,%eax
  401d52:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401d56:	8b 44 24 04          	mov    0x4(%rsp),%eax
  401d5a:	69 c0 2d aa 00 00    	imul   $0xaa2d,%eax,%eax
  401d60:	89 44 24 04          	mov    %eax,0x4(%rsp)
  401d64:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401d68:	69 c0 11 91 00 00    	imul   $0x9111,%eax,%eax
  401d6e:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401d72:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401d76:	69 c0 93 1b 00 00    	imul   $0x1b93,%eax,%eax
  401d7c:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401d80:	8b 04 24             	mov    (%rsp),%eax
  401d83:	69 c0 69 8a 00 00    	imul   $0x8a69,%eax,%eax
  401d89:	89 04 24             	mov    %eax,(%rsp)
  401d8c:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401d90:	69 c0 fb e9 00 00    	imul   $0xe9fb,%eax,%eax
  401d96:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401d9a:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401d9e:	69 c0 4f af 00 00    	imul   $0xaf4f,%eax,%eax
  401da4:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401da8:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401dac:	69 c0 4e 6b 00 00    	imul   $0x6b4e,%eax,%eax
  401db2:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401db6:	8b 44 24 14          	mov    0x14(%rsp),%eax
  401dba:	69 c0 c1 4e 00 00    	imul   $0x4ec1,%eax,%eax
  401dc0:	89 44 24 14          	mov    %eax,0x14(%rsp)
  401dc4:	8b 44 24 08          	mov    0x8(%rsp),%eax
  401dc8:	69 c0 fb 7c 00 00    	imul   $0x7cfb,%eax,%eax
  401dce:	89 44 24 08          	mov    %eax,0x8(%rsp)
  401dd2:	8b 44 24 10          	mov    0x10(%rsp),%eax
  401dd6:	69 c0 27 c2 00 00    	imul   $0xc227,%eax,%eax
  401ddc:	89 44 24 10          	mov    %eax,0x10(%rsp)
  401de0:	8b 44 24 24          	mov    0x24(%rsp),%eax
  401de4:	69 c0 18 b8 00 00    	imul   $0xb818,%eax,%eax
  401dea:	89 44 24 24          	mov    %eax,0x24(%rsp)
  401dee:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
  401df2:	69 c0 a1 10 00 00    	imul   $0x10a1,%eax,%eax
  401df8:	89 44 24 1c          	mov    %eax,0x1c(%rsp)
  401dfc:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401e00:	69 c0 8d 60 00 00    	imul   $0x608d,%eax,%eax
  401e06:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401e0a:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401e0e:	69 c0 cc 6b 00 00    	imul   $0x6bcc,%eax,%eax
  401e14:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401e18:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401e1c:	69 c0 e5 e3 00 00    	imul   $0xe3e5,%eax,%eax
  401e22:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401e26:	8b 44 24 18          	mov    0x18(%rsp),%eax
  401e2a:	69 c0 30 b9 00 00    	imul   $0xb930,%eax,%eax
  401e30:	89 44 24 18          	mov    %eax,0x18(%rsp)
  401e34:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401e38:	69 c0 03 82 00 00    	imul   $0x8203,%eax,%eax
  401e3e:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401e42:	8b 04 24             	mov    (%rsp),%eax
  401e45:	69 c0 68 5d 00 00    	imul   $0x5d68,%eax,%eax
  401e4b:	89 04 24             	mov    %eax,(%rsp)
  401e4e:	8b 44 24 14          	mov    0x14(%rsp),%eax
  401e52:	69 c0 2a 2a 00 00    	imul   $0x2a2a,%eax,%eax
  401e58:	89 44 24 14          	mov    %eax,0x14(%rsp)
  401e5c:	8b 44 24 14          	mov    0x14(%rsp),%eax
  401e60:	69 c0 33 82 00 00    	imul   $0x8233,%eax,%eax
  401e66:	89 44 24 14          	mov    %eax,0x14(%rsp)
  401e6a:	8b 44 24 08          	mov    0x8(%rsp),%eax
  401e6e:	69 c0 29 0d 00 00    	imul   $0xd29,%eax,%eax
  401e74:	89 44 24 08          	mov    %eax,0x8(%rsp)
  401e78:	8b 44 24 0c          	mov    0xc(%rsp),%eax
  401e7c:	69 c0 7e 27 00 00    	imul   $0x277e,%eax,%eax
  401e82:	89 44 24 0c          	mov    %eax,0xc(%rsp)
  401e86:	8b 44 24 20          	mov    0x20(%rsp),%eax
  401e8a:	69 c0 79 dc 00 00    	imul   $0xdc79,%eax,%eax
  401e90:	89 44 24 20          	mov    %eax,0x20(%rsp)
  401e94:	b8 00 00 00 00       	mov    $0x0,%eax
  401e99:	ba 00 00 00 00       	mov    $0x0,%edx
  401e9e:	83 f8 09             	cmp    $0x9,%eax
  401ea1:	77 0c                	ja     401eaf <scramble+0x4ab>
  401ea3:	89 c1                	mov    %eax,%ecx
  401ea5:	8b 0c 8c             	mov    (%rsp,%rcx,4),%ecx
  401ea8:	01 ca                	add    %ecx,%edx
  401eaa:	83 c0 01             	add    $0x1,%eax
  401ead:	eb ef                	jmp    401e9e <scramble+0x49a>
  401eaf:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
  401eb4:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  401ebb:	00 00 
  401ebd:	75 07                	jne    401ec6 <scramble+0x4c2>
  401ebf:	89 d0                	mov    %edx,%eax
  401ec1:	48 83 c4 38          	add    $0x38,%rsp
  401ec5:	c3                   	ret    
  401ec6:	e8 5d 0a 00 00       	call   402928 <__stack_chk_fail>

0000000000401ecb <getbuf>:
  401ecb:	f3 0f 1e fa          	endbr64 
  401ecf:	48 83 ec 38          	sub    $0x38,%rsp
  401ed3:	48 89 e7             	mov    %rsp,%rdi
  401ed6:	e8 69 05 00 00       	call   402444 <Gets>
  401edb:	b8 01 00 00 00       	mov    $0x1,%eax
  401ee0:	48 83 c4 38          	add    $0x38,%rsp
  401ee4:	c3                   	ret    

0000000000401ee5 <touch1>:
  401ee5:	f3 0f 1e fa          	endbr64 
  401ee9:	50                   	push   %rax
  401eea:	58                   	pop    %rax
  401eeb:	48 83 ec 08          	sub    $0x8,%rsp
  401eef:	c7 05 23 56 00 00 01 	movl   $0x1,0x5623(%rip)        # 40751c <vlevel>
  401ef6:	00 00 00 
  401ef9:	48 8d 3d 16 24 00 00 	lea    0x2416(%rip),%rdi        # 404316 <_IO_stdin_used+0x316>
  401f00:	e8 ab f3 ff ff       	call   4012b0 <puts@plt>
  401f05:	bf 01 00 00 00       	mov    $0x1,%edi
  401f0a:	e8 a7 07 00 00       	call   4026b6 <validate>
  401f0f:	bf 00 00 00 00       	mov    $0x0,%edi
  401f14:	e8 f7 f4 ff ff       	call   401410 <exit@plt>

0000000000401f19 <touch2>:
  401f19:	f3 0f 1e fa          	endbr64 
  401f1d:	50                   	push   %rax
  401f1e:	58                   	pop    %rax
  401f1f:	48 83 ec 08          	sub    $0x8,%rsp
  401f23:	89 fa                	mov    %edi,%edx
  401f25:	c7 05 ed 55 00 00 02 	movl   $0x2,0x55ed(%rip)        # 40751c <vlevel>
  401f2c:	00 00 00 
  401f2f:	39 3d ef 55 00 00    	cmp    %edi,0x55ef(%rip)        # 407524 <cookie>
  401f35:	74 2a                	je     401f61 <touch2+0x48>
  401f37:	48 8d 35 22 24 00 00 	lea    0x2422(%rip),%rsi        # 404360 <_IO_stdin_used+0x360>
  401f3e:	bf 01 00 00 00       	mov    $0x1,%edi
  401f43:	b8 00 00 00 00       	mov    $0x0,%eax
  401f48:	e8 73 f4 ff ff       	call   4013c0 <__printf_chk@plt>
  401f4d:	bf 02 00 00 00       	mov    $0x2,%edi
  401f52:	e8 3a 08 00 00       	call   402791 <fail>
  401f57:	bf 00 00 00 00       	mov    $0x0,%edi
  401f5c:	e8 af f4 ff ff       	call   401410 <exit@plt>
  401f61:	48 8d 35 d0 23 00 00 	lea    0x23d0(%rip),%rsi        # 404338 <_IO_stdin_used+0x338>
  401f68:	bf 01 00 00 00       	mov    $0x1,%edi
  401f6d:	b8 00 00 00 00       	mov    $0x0,%eax
  401f72:	e8 49 f4 ff ff       	call   4013c0 <__printf_chk@plt>
  401f77:	bf 02 00 00 00       	mov    $0x2,%edi
  401f7c:	e8 35 07 00 00       	call   4026b6 <validate>
  401f81:	eb d4                	jmp    401f57 <touch2+0x3e>

0000000000401f83 <hexmatch>:
  401f83:	f3 0f 1e fa          	endbr64 
  401f87:	41 55                	push   %r13
  401f89:	41 54                	push   %r12
  401f8b:	55                   	push   %rbp
  401f8c:	53                   	push   %rbx
  401f8d:	48 81 ec 88 00 00 00 	sub    $0x88,%rsp
  401f94:	89 fd                	mov    %edi,%ebp
  401f96:	48 89 f3             	mov    %rsi,%rbx
  401f99:	41 bc 28 00 00 00    	mov    $0x28,%r12d
  401f9f:	64 49 8b 04 24       	mov    %fs:(%r12),%rax
  401fa4:	48 89 44 24 78       	mov    %rax,0x78(%rsp)
  401fa9:	31 c0                	xor    %eax,%eax
  401fab:	e8 e0 f3 ff ff       	call   401390 <random@plt>
  401fb0:	48 89 c1             	mov    %rax,%rcx
  401fb3:	48 ba 0b d7 a3 70 3d 	movabs $0xa3d70a3d70a3d70b,%rdx
  401fba:	0a d7 a3 
  401fbd:	48 f7 ea             	imul   %rdx
  401fc0:	48 01 ca             	add    %rcx,%rdx
  401fc3:	48 c1 fa 06          	sar    $0x6,%rdx
  401fc7:	48 89 c8             	mov    %rcx,%rax
  401fca:	48 c1 f8 3f          	sar    $0x3f,%rax
  401fce:	48 29 c2             	sub    %rax,%rdx
  401fd1:	48 8d 04 92          	lea    (%rdx,%rdx,4),%rax
  401fd5:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401fd9:	48 c1 e0 02          	shl    $0x2,%rax
  401fdd:	48 29 c1             	sub    %rax,%rcx
  401fe0:	4c 8d 2c 0c          	lea    (%rsp,%rcx,1),%r13
  401fe4:	41 89 e8             	mov    %ebp,%r8d
  401fe7:	48 8d 0d 45 23 00 00 	lea    0x2345(%rip),%rcx        # 404333 <_IO_stdin_used+0x333>
  401fee:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  401ff5:	be 01 00 00 00       	mov    $0x1,%esi
  401ffa:	4c 89 ef             	mov    %r13,%rdi
  401ffd:	b8 00 00 00 00       	mov    $0x0,%eax
  402002:	e8 49 f4 ff ff       	call   401450 <__sprintf_chk@plt>
  402007:	ba 09 00 00 00       	mov    $0x9,%edx
  40200c:	4c 89 ee             	mov    %r13,%rsi
  40200f:	48 89 df             	mov    %rbx,%rdi
  402012:	e8 79 f2 ff ff       	call   401290 <strncmp@plt>
  402017:	85 c0                	test   %eax,%eax
  402019:	0f 94 c0             	sete   %al
  40201c:	48 8b 5c 24 78       	mov    0x78(%rsp),%rbx
  402021:	64 49 33 1c 24       	xor    %fs:(%r12),%rbx
  402026:	75 11                	jne    402039 <hexmatch+0xb6>
  402028:	0f b6 c0             	movzbl %al,%eax
  40202b:	48 81 c4 88 00 00 00 	add    $0x88,%rsp
  402032:	5b                   	pop    %rbx
  402033:	5d                   	pop    %rbp
  402034:	41 5c                	pop    %r12
  402036:	41 5d                	pop    %r13
  402038:	c3                   	ret    
  402039:	e8 ea 08 00 00       	call   402928 <__stack_chk_fail>

000000000040203e <touch3>:
  40203e:	f3 0f 1e fa          	endbr64 
  402042:	53                   	push   %rbx
  402043:	48 89 fb             	mov    %rdi,%rbx
  402046:	c7 05 cc 54 00 00 03 	movl   $0x3,0x54cc(%rip)        # 40751c <vlevel>
  40204d:	00 00 00 
  402050:	48 89 fe             	mov    %rdi,%rsi
  402053:	8b 3d cb 54 00 00    	mov    0x54cb(%rip),%edi        # 407524 <cookie>
  402059:	e8 25 ff ff ff       	call   401f83 <hexmatch>
  40205e:	85 c0                	test   %eax,%eax
  402060:	74 2d                	je     40208f <touch3+0x51>
  402062:	48 89 da             	mov    %rbx,%rdx
  402065:	48 8d 35 1c 23 00 00 	lea    0x231c(%rip),%rsi        # 404388 <_IO_stdin_used+0x388>
  40206c:	bf 01 00 00 00       	mov    $0x1,%edi
  402071:	b8 00 00 00 00       	mov    $0x0,%eax
  402076:	e8 45 f3 ff ff       	call   4013c0 <__printf_chk@plt>
  40207b:	bf 03 00 00 00       	mov    $0x3,%edi
  402080:	e8 31 06 00 00       	call   4026b6 <validate>
  402085:	bf 00 00 00 00       	mov    $0x0,%edi
  40208a:	e8 81 f3 ff ff       	call   401410 <exit@plt>
  40208f:	48 89 da             	mov    %rbx,%rdx
  402092:	48 8d 35 17 23 00 00 	lea    0x2317(%rip),%rsi        # 4043b0 <_IO_stdin_used+0x3b0>
  402099:	bf 01 00 00 00       	mov    $0x1,%edi
  40209e:	b8 00 00 00 00       	mov    $0x0,%eax
  4020a3:	e8 18 f3 ff ff       	call   4013c0 <__printf_chk@plt>
  4020a8:	bf 03 00 00 00       	mov    $0x3,%edi
  4020ad:	e8 df 06 00 00       	call   402791 <fail>
  4020b2:	eb d1                	jmp    402085 <touch3+0x47>

00000000004020b4 <test>:
  4020b4:	f3 0f 1e fa          	endbr64 
  4020b8:	48 83 ec 08          	sub    $0x8,%rsp
  4020bc:	b8 00 00 00 00       	mov    $0x0,%eax
  4020c1:	e8 05 fe ff ff       	call   401ecb <getbuf>
  4020c6:	89 c2                	mov    %eax,%edx
  4020c8:	48 8d 35 09 23 00 00 	lea    0x2309(%rip),%rsi        # 4043d8 <_IO_stdin_used+0x3d8>
  4020cf:	bf 01 00 00 00       	mov    $0x1,%edi
  4020d4:	b8 00 00 00 00       	mov    $0x0,%eax
  4020d9:	e8 e2 f2 ff ff       	call   4013c0 <__printf_chk@plt>
  4020de:	48 83 c4 08          	add    $0x8,%rsp
  4020e2:	c3                   	ret    

00000000004020e3 <test2>:
  4020e3:	f3 0f 1e fa          	endbr64 
  4020e7:	48 83 ec 08          	sub    $0x8,%rsp
  4020eb:	b8 00 00 00 00       	mov    $0x0,%eax
  4020f0:	e8 1d 00 00 00       	call   402112 <getbuf_withcanary>
  4020f5:	89 c2                	mov    %eax,%edx
  4020f7:	48 8d 35 02 23 00 00 	lea    0x2302(%rip),%rsi        # 404400 <_IO_stdin_used+0x400>
  4020fe:	bf 01 00 00 00       	mov    $0x1,%edi
  402103:	b8 00 00 00 00       	mov    $0x0,%eax
  402108:	e8 b3 f2 ff ff       	call   4013c0 <__printf_chk@plt>
  40210d:	48 83 c4 08          	add    $0x8,%rsp
  402111:	c3                   	ret    

0000000000402112 <getbuf_withcanary>:
  402112:	f3 0f 1e fa          	endbr64 
  402116:	55                   	push   %rbp
  402117:	48 89 e5             	mov    %rsp,%rbp
  40211a:	48 81 ec 90 01 00 00 	sub    $0x190,%rsp
  402121:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402128:	00 00 
  40212a:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40212e:	31 c0                	xor    %eax,%eax
  402130:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%rbp)
  402137:	00 00 00 
  40213a:	8b 85 74 ff ff ff    	mov    -0x8c(%rbp),%eax
  402140:	89 85 70 ff ff ff    	mov    %eax,-0x90(%rbp)
  402146:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  40214d:	48 89 c7             	mov    %rax,%rdi
  402150:	e8 ef 02 00 00       	call   402444 <Gets>
  402155:	8b 85 70 ff ff ff    	mov    -0x90(%rbp),%eax
  40215b:	48 63 d0             	movslq %eax,%rdx
  40215e:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  402165:	48 8d 88 08 01 00 00 	lea    0x108(%rax),%rcx
  40216c:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  402173:	48 89 ce             	mov    %rcx,%rsi
  402176:	48 89 c7             	mov    %rax,%rdi
  402179:	e8 f2 f1 ff ff       	call   401370 <memcpy@plt>
  40217e:	8b 85 74 ff ff ff    	mov    -0x8c(%rbp),%eax
  402184:	48 63 d0             	movslq %eax,%rdx
  402187:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  40218e:	48 8d 8d 70 fe ff ff 	lea    -0x190(%rbp),%rcx
  402195:	48 81 c1 08 01 00 00 	add    $0x108,%rcx
  40219c:	48 89 c6             	mov    %rax,%rsi
  40219f:	48 89 cf             	mov    %rcx,%rdi
  4021a2:	e8 c9 f1 ff ff       	call   401370 <memcpy@plt>
  4021a7:	b8 01 00 00 00       	mov    $0x1,%eax
  4021ac:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4021b0:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  4021b7:	00 00 
  4021b9:	74 05                	je     4021c0 <getbuf_withcanary+0xae>
  4021bb:	e8 68 07 00 00       	call   402928 <__stack_chk_fail>
  4021c0:	c9                   	leave  
  4021c1:	c3                   	ret    

00000000004021c2 <start_farm>:
  4021c2:	f3 0f 1e fa          	endbr64 
  4021c6:	b8 01 00 00 00       	mov    $0x1,%eax
  4021cb:	c3                   	ret    

00000000004021cc <addval_432>:
  4021cc:	f3 0f 1e fa          	endbr64 
  4021d0:	8d 87 48 89 c7 c7    	lea    -0x383876b8(%rdi),%eax
  4021d6:	c3                   	ret    

00000000004021d7 <addval_153>:
  4021d7:	f3 0f 1e fa          	endbr64 
  4021db:	8d 87 48 89 c7 c3    	lea    -0x3c3876b8(%rdi),%eax
  ;48 89 c7: movq %rax, %rdi
  ;c3: ret
  4021e1:	c3                   	ret    

00000000004021e2 <addval_366>:
  4021e2:	f3 0f 1e fa          	endbr64 
  4021e6:	8d 87 c1 58 90 c3    	lea    -0x3c6fa73f(%rdi),%eax
  ;4021e9
  ;58: popq %rax
  ;90: nop
  ;c3: ret
  4021ec:	c3                   	ret    

00000000004021ed <getval_307>:
  4021ed:	f3 0f 1e fa          	endbr64 
  4021f1:	b8 c7 58 90 c3       	mov    $0xc39058c7,%eax
  4021f6:	c3                   	ret    

00000000004021f7 <setval_359>:
  4021f7:	f3 0f 1e fa          	endbr64 
  4021fb:	c7 07 48 89 c7 c1    	movl   $0xc1c78948,(%rdi)
  402201:	c3                   	ret    

0000000000402202 <setval_468>:
  402202:	f3 0f 1e fa          	endbr64 
  402206:	c7 07 48 90 90 c3    	movl   $0xc3909048,(%rdi)
  40220c:	c3                   	ret    

000000000040220d <addval_145>:
  40220d:	f3 0f 1e fa          	endbr64 
  402211:	8d 87 45 58 94 90    	lea    -0x6f6ba7bb(%rdi),%eax
  402217:	c3                   	ret    

0000000000402218 <addval_406>:
  402218:	f3 0f 1e fa          	endbr64 
  40221c:	8d 87 26 48 89 c7    	lea    -0x3876b7da(%rdi),%eax
  402222:	c3                   	ret    

0000000000402223 <mid_farm>:
  402223:	f3 0f 1e fa          	endbr64 
  402227:	b8 01 00 00 00       	mov    $0x1,%eax
  40222c:	c3                   	ret    

000000000040222d <add_xy>:
  ;40222d
  ;%rax=%rdi+%rsi
  40222d:	f3 0f 1e fa          	endbr64 
  402231:	48 8d 04 37          	lea    (%rdi,%rsi,1),%rax
  402235:	c3                   	ret    

0000000000402236 <addval_407>:
  402236:	f3 0f 1e fa          	endbr64 
  40223a:	8d 87 48 89 e0 91    	lea    -0x6e1f76b8(%rdi),%eax
  402240:	c3                   	ret    

0000000000402241 <getval_416>:
  402241:	f3 0f 1e fa          	endbr64 
  402245:	b8 88 c1 90 90       	mov    $0x9090c188,%eax
  40224a:	c3                   	ret    

000000000040224b <setval_346>:
  40224b:	f3 0f 1e fa          	endbr64 
  40224f:	c7 07 89 ca 20 c9    	movl   $0xc920ca89,(%rdi)
  ;402251
  ;89 ca: movl %ecx, %edx
  ;20 c9: nop
  402255:	c3                   	ret    

0000000000402256 <addval_341>:
  402256:	f3 0f 1e fa          	endbr64 
  40225a:	8d 87 89 d6 08 d2    	lea    -0x2df72977(%rdi),%eax
  ;40225c
  ;89 d6: movl %edx, %esi
  ;08 d2: nop
  402260:	c3                   	ret    

0000000000402261 <setval_324>:
  402261:	f3 0f 1e fa          	endbr64 
  402265:	c7 07 89 d6 30 c9    	movl   $0xc930d689,(%rdi)
  40226b:	c3                   	ret    

000000000040226c <addval_329>:
  40226c:	f3 0f 1e fa          	endbr64 
  402270:	8d 87 89 c1 90 c2    	lea    -0x3d6f3e77(%rdi),%eax
  402276:	c3                   	ret    

0000000000402277 <getval_201>:
  402277:	f3 0f 1e fa          	endbr64 
  40227b:	b8 89 d6 91 90       	mov    $0x9091d689,%eax
  402280:	c3                   	ret    

0000000000402281 <addval_240>:
  402281:	f3 0f 1e fa          	endbr64 
  402285:	8d 87 89 ca 28 db    	lea    -0x24d73577(%rdi),%eax
  40228b:	c3                   	ret    

000000000040228c <getval_347>:
  40228c:	f3 0f 1e fa          	endbr64 
  402290:	b8 89 c1 38 c0       	mov    $0xc038c189,%eax
  ;402291
  ;89 c1: movl %eax, %ecx
  ;38 c0: nop
  402295:	c3                   	ret    

0000000000402296 <getval_358>:
  402296:	f3 0f 1e fa          	endbr64 
  40229a:	b8 89 ca 18 db       	mov    $0xdb18ca89,%eax
  40229f:	c3                   	ret    

00000000004022a0 <setval_270>:
  4022a0:	f3 0f 1e fa          	endbr64 
  4022a4:	c7 07 29 a9 c1 c3    	movl   $0xc3c1a929,(%rdi)
  4022aa:	c3                   	ret    

00000000004022ab <getval_355>:
  4022ab:	f3 0f 1e fa          	endbr64 
  4022af:	b8 89 d6 08 c9       	mov    $0xc908d689,%eax
  ;89 d6: movl %edx, %esi
  ;08 c9: nop
  4022b4:	c3                   	ret    

00000000004022b5 <setval_328>:
  4022b5:	f3 0f 1e fa          	endbr64 
  4022b9:	c7 07 89 ca 08 c9    	movl   $0xc908ca89,(%rdi)
  4022bf:	c3                   	ret    

00000000004022c0 <addval_265>:
  4022c0:	f3 0f 1e fa          	endbr64 
  4022c4:	8d 87 a9 ca 38 c0    	lea    -0x3fc73557(%rdi),%eax
  4022ca:	c3                   	ret    

00000000004022cb <setval_283>:
  4022cb:	f3 0f 1e fa          	endbr64 
  4022cf:	c7 07 48 89 e0 c1    	movl   $0xc1e08948,(%rdi)
  4022d5:	c3                   	ret    

00000000004022d6 <setval_414>:
  4022d6:	f3 0f 1e fa          	endbr64 
  4022da:	c7 07 89 c1 28 d2    	movl   $0xd228c189,(%rdi)
  4022e0:	c3                   	ret    

00000000004022e1 <addval_286>:
  4022e1:	f3 0f 1e fa          	endbr64 
  4022e5:	8d 87 48 89 e0 c3    	lea    -0x3c1f76b8(%rdi),%eax
  ;4022e7
  ;48 89 e0: movq %rsp, %rax
  4022eb:	c3                   	ret    

00000000004022ec <setval_345>:
  4022ec:	f3 0f 1e fa          	endbr64 
  4022f0:	c7 07 89 c1 38 d2    	movl   $0xd238c189,(%rdi)
  ;89 c1: movl %eax, %ecx
  ;38 d2:nop
  4022f6:	c3                   	ret    

00000000004022f7 <setval_164>:
  4022f7:	f3 0f 1e fa          	endbr64 
  4022fb:	c7 07 f3 48 81 e0    	movl   $0xe08148f3,(%rdi)
  402301:	c3                   	ret    

0000000000402302 <setval_100>:
  402302:	f3 0f 1e fa          	endbr64 
  402306:	c7 07 88 d6 08 db    	movl   $0xdb08d688,(%rdi)
  40230c:	c3                   	ret    

000000000040230d <setval_186>:
  40230d:	f3 0f 1e fa          	endbr64 
  402311:	c7 07 81 c1 38 c0    	movl   $0xc038c181,(%rdi)
  402317:	c3                   	ret    

0000000000402318 <getval_321>:
  402318:	f3 0f 1e fa          	endbr64 
  40231c:	b8 48 89 e0 91       	mov    $0x91e08948,%eax
  402321:	c3                   	ret    

0000000000402322 <addval_260>:
  402322:	f3 0f 1e fa          	endbr64 
  402326:	8d 87 89 d6 a4 c9    	lea    -0x365b2977(%rdi),%eax
  40232c:	c3                   	ret    

000000000040232d <getval_220>:
  40232d:	f3 0f 1e fa          	endbr64 
  402331:	b8 48 89 e0 c3       	mov    $0xc3e08948,%eax
  ;48 89 e0: movq %rsp, %rax
  402336:	c3                   	ret    

0000000000402337 <setval_290>:
  402337:	f3 0f 1e fa          	endbr64 
  40233b:	c7 07 48 89 e0 c7    	movl   $0xc7e08948,(%rdi)
  402341:	c3                   	ret    

0000000000402342 <getval_486>:
  402342:	f3 0f 1e fa          	endbr64 
  402346:	b8 48 89 e0 c1       	mov    $0xc1e08948,%eax
  40234b:	c3                   	ret    

000000000040234c <setval_247>:
  40234c:	f3 0f 1e fa          	endbr64 
  402350:	c7 07 89 ca 91 c3    	movl   $0xc391ca89,(%rdi)
  402356:	c3                   	ret    

0000000000402357 <setval_427>:
  402357:	f3 0f 1e fa          	endbr64 
  40235b:	c7 07 88 c1 90 90    	movl   $0x9090c188,(%rdi)
  402361:	c3                   	ret    

0000000000402362 <addval_441>:
  402362:	f3 0f 1e fa          	endbr64 
  402366:	8d 87 8d ca c3 31    	lea    0x31c3ca8d(%rdi),%eax
  40236c:	c3                   	ret    

000000000040236d <getval_193>:
  40236d:	f3 0f 1e fa          	endbr64 
  402371:	b8 09 ca 90 90       	mov    $0x9090ca09,%eax
  402376:	c3                   	ret    

0000000000402377 <setval_489>:
  402377:	f3 0f 1e fa          	endbr64 
  40237b:	c7 07 a9 d6 38 d2    	movl   $0xd238d6a9,(%rdi)
  402381:	c3                   	ret    

0000000000402382 <addval_405>:
  402382:	f3 0f 1e fa          	endbr64 
  402386:	8d 87 88 d6 38 db    	lea    -0x24c72978(%rdi),%eax
  40238c:	c3                   	ret    

000000000040238d <end_farm>:
  40238d:	f3 0f 1e fa          	endbr64 
  402391:	b8 01 00 00 00       	mov    $0x1,%eax
  402396:	c3                   	ret    

0000000000402397 <save_char>:
  402397:	8b 05 a7 5d 00 00    	mov    0x5da7(%rip),%eax        # 408144 <gets_cnt>
  40239d:	3d ff 03 00 00       	cmp    $0x3ff,%eax
  4023a2:	7f 4a                	jg     4023ee <save_char+0x57>
  4023a4:	89 f9                	mov    %edi,%ecx
  4023a6:	c0 e9 04             	shr    $0x4,%cl
  4023a9:	8d 14 40             	lea    (%rax,%rax,2),%edx
  4023ac:	4c 8d 05 bd 23 00 00 	lea    0x23bd(%rip),%r8        # 404770 <trans_char>
  4023b3:	83 e1 0f             	and    $0xf,%ecx
  4023b6:	45 0f b6 0c 08       	movzbl (%r8,%rcx,1),%r9d
  4023bb:	48 8d 0d 7e 51 00 00 	lea    0x517e(%rip),%rcx        # 407540 <gets_buf>
  4023c2:	48 63 f2             	movslq %edx,%rsi
  4023c5:	44 88 0c 31          	mov    %r9b,(%rcx,%rsi,1)
  4023c9:	8d 72 01             	lea    0x1(%rdx),%esi
  4023cc:	83 e7 0f             	and    $0xf,%edi
  4023cf:	41 0f b6 3c 38       	movzbl (%r8,%rdi,1),%edi
  4023d4:	48 63 f6             	movslq %esi,%rsi
  4023d7:	40 88 3c 31          	mov    %dil,(%rcx,%rsi,1)
  4023db:	83 c2 02             	add    $0x2,%edx
  4023de:	48 63 d2             	movslq %edx,%rdx
  4023e1:	c6 04 11 20          	movb   $0x20,(%rcx,%rdx,1)
  4023e5:	83 c0 01             	add    $0x1,%eax
  4023e8:	89 05 56 5d 00 00    	mov    %eax,0x5d56(%rip)        # 408144 <gets_cnt>
  4023ee:	c3                   	ret    

00000000004023ef <save_term>:
  4023ef:	8b 05 4f 5d 00 00    	mov    0x5d4f(%rip),%eax        # 408144 <gets_cnt>
  4023f5:	8d 04 40             	lea    (%rax,%rax,2),%eax
  4023f8:	48 98                	cltq   
  4023fa:	48 8d 15 3f 51 00 00 	lea    0x513f(%rip),%rdx        # 407540 <gets_buf>
  402401:	c6 04 02 00          	movb   $0x0,(%rdx,%rax,1)
  402405:	c3                   	ret    

0000000000402406 <check_fail>:
  402406:	f3 0f 1e fa          	endbr64 
  40240a:	50                   	push   %rax
  40240b:	58                   	pop    %rax
  40240c:	48 83 ec 08          	sub    $0x8,%rsp
  402410:	0f be 15 31 5d 00 00 	movsbl 0x5d31(%rip),%edx        # 408148 <target_prefix>
  402417:	4c 8d 05 22 51 00 00 	lea    0x5122(%rip),%r8        # 407540 <gets_buf>
  40241e:	8b 0d f4 50 00 00    	mov    0x50f4(%rip),%ecx        # 407518 <check_level>
  402424:	48 8d 35 03 20 00 00 	lea    0x2003(%rip),%rsi        # 40442e <_IO_stdin_used+0x42e>
  40242b:	bf 01 00 00 00       	mov    $0x1,%edi
  402430:	b8 00 00 00 00       	mov    $0x0,%eax
  402435:	e8 86 ef ff ff       	call   4013c0 <__printf_chk@plt>
  40243a:	bf 01 00 00 00       	mov    $0x1,%edi
  40243f:	e8 cc ef ff ff       	call   401410 <exit@plt>

0000000000402444 <Gets>:
  402444:	f3 0f 1e fa          	endbr64 
  402448:	41 54                	push   %r12
  40244a:	55                   	push   %rbp
  40244b:	53                   	push   %rbx
  40244c:	49 89 fc             	mov    %rdi,%r12
  40244f:	c7 05 eb 5c 00 00 00 	movl   $0x0,0x5ceb(%rip)        # 408144 <gets_cnt>
  402456:	00 00 00 
  402459:	48 89 fb             	mov    %rdi,%rbx
  40245c:	48 8b 3d ad 50 00 00 	mov    0x50ad(%rip),%rdi        # 407510 <infile>
  402463:	e8 d8 ef ff ff       	call   401440 <getc@plt>
  402468:	83 f8 ff             	cmp    $0xffffffff,%eax
  40246b:	74 18                	je     402485 <Gets+0x41>
  40246d:	83 f8 0a             	cmp    $0xa,%eax
  402470:	74 13                	je     402485 <Gets+0x41>
  402472:	48 8d 6b 01          	lea    0x1(%rbx),%rbp
  402476:	88 03                	mov    %al,(%rbx)
  402478:	0f b6 f8             	movzbl %al,%edi
  40247b:	e8 17 ff ff ff       	call   402397 <save_char>
  402480:	48 89 eb             	mov    %rbp,%rbx
  402483:	eb d7                	jmp    40245c <Gets+0x18>
  402485:	c6 03 00             	movb   $0x0,(%rbx)
  402488:	b8 00 00 00 00       	mov    $0x0,%eax
  40248d:	e8 5d ff ff ff       	call   4023ef <save_term>
  402492:	4c 89 e0             	mov    %r12,%rax
  402495:	5b                   	pop    %rbx
  402496:	5d                   	pop    %rbp
  402497:	41 5c                	pop    %r12
  402499:	c3                   	ret    

000000000040249a <notify_server>:
  40249a:	f3 0f 1e fa          	endbr64 
  40249e:	55                   	push   %rbp
  40249f:	53                   	push   %rbx
  4024a0:	4c 8d 9c 24 00 c0 ff 	lea    -0x4000(%rsp),%r11
  4024a7:	ff 
  4024a8:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  4024af:	48 83 0c 24 00       	orq    $0x0,(%rsp)
  4024b4:	4c 39 dc             	cmp    %r11,%rsp
  4024b7:	75 ef                	jne    4024a8 <notify_server+0xe>
  4024b9:	48 83 ec 18          	sub    $0x18,%rsp
  4024bd:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4024c4:	00 00 
  4024c6:	48 89 84 24 08 40 00 	mov    %rax,0x4008(%rsp)
  4024cd:	00 
  4024ce:	31 c0                	xor    %eax,%eax
  4024d0:	83 3d 51 50 00 00 00 	cmpl   $0x0,0x5051(%rip)        # 407528 <is_checker>
  4024d7:	0f 85 b7 01 00 00    	jne    402694 <notify_server+0x1fa>
  4024dd:	89 fb                	mov    %edi,%ebx
  4024df:	81 3d 5b 5c 00 00 9c 	cmpl   $0x1f9c,0x5c5b(%rip)        # 408144 <gets_cnt>
  4024e6:	1f 00 00 
  4024e9:	7f 18                	jg     402503 <notify_server+0x69>
  4024eb:	0f be 05 56 5c 00 00 	movsbl 0x5c56(%rip),%eax        # 408148 <target_prefix>
  4024f2:	83 3d a7 4f 00 00 00 	cmpl   $0x0,0x4fa7(%rip)        # 4074a0 <notify>
  4024f9:	74 23                	je     40251e <notify_server+0x84>
  4024fb:	8b 15 1f 50 00 00    	mov    0x501f(%rip),%edx        # 407520 <authkey>
  402501:	eb 20                	jmp    402523 <notify_server+0x89>
  402503:	48 8d 35 4e 20 00 00 	lea    0x204e(%rip),%rsi        # 404558 <_IO_stdin_used+0x558>
  40250a:	bf 01 00 00 00       	mov    $0x1,%edi
  40250f:	e8 ac ee ff ff       	call   4013c0 <__printf_chk@plt>
  402514:	bf 01 00 00 00       	mov    $0x1,%edi
  402519:	e8 f2 ee ff ff       	call   401410 <exit@plt>
  40251e:	ba ff ff ff ff       	mov    $0xffffffff,%edx
  402523:	85 db                	test   %ebx,%ebx
  402525:	0f 84 9b 00 00 00    	je     4025c6 <notify_server+0x12c>
  40252b:	48 8d 2d 17 1f 00 00 	lea    0x1f17(%rip),%rbp        # 404449 <_IO_stdin_used+0x449>
  402532:	48 89 e7             	mov    %rsp,%rdi
  402535:	48 8d 0d 04 50 00 00 	lea    0x5004(%rip),%rcx        # 407540 <gets_buf>
  40253c:	51                   	push   %rcx
  40253d:	56                   	push   %rsi
  40253e:	50                   	push   %rax
  40253f:	52                   	push   %rdx
  402540:	49 89 e9             	mov    %rbp,%r9
  402543:	44 8b 05 06 4c 00 00 	mov    0x4c06(%rip),%r8d        # 407150 <target_id>
  40254a:	48 8d 0d fd 1e 00 00 	lea    0x1efd(%rip),%rcx        # 40444e <_IO_stdin_used+0x44e>
  402551:	ba 00 20 00 00       	mov    $0x2000,%edx
  402556:	be 01 00 00 00       	mov    $0x1,%esi
  40255b:	b8 00 00 00 00       	mov    $0x0,%eax
  402560:	e8 eb ee ff ff       	call   401450 <__sprintf_chk@plt>
  402565:	48 83 c4 20          	add    $0x20,%rsp
  402569:	83 3d 30 4f 00 00 00 	cmpl   $0x0,0x4f30(%rip)        # 4074a0 <notify>
  402570:	0f 84 95 00 00 00    	je     40260b <notify_server+0x171>
  402576:	48 89 e1             	mov    %rsp,%rcx
  402579:	4c 8d 8c 24 00 20 00 	lea    0x2000(%rsp),%r9
  402580:	00 
  402581:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  402587:	48 8b 15 da 4b 00 00 	mov    0x4bda(%rip),%rdx        # 407168 <lab>
  40258e:	48 8b 35 db 4b 00 00 	mov    0x4bdb(%rip),%rsi        # 407170 <course>
  402595:	48 8b 3d c4 4b 00 00 	mov    0x4bc4(%rip),%rdi        # 407160 <user_id>
  40259c:	e8 7f 12 00 00       	call   403820 <driver_post>
  4025a1:	85 c0                	test   %eax,%eax
  4025a3:	78 2d                	js     4025d2 <notify_server+0x138>
  4025a5:	85 db                	test   %ebx,%ebx
  4025a7:	74 51                	je     4025fa <notify_server+0x160>
  4025a9:	48 8d 3d d8 1f 00 00 	lea    0x1fd8(%rip),%rdi        # 404588 <_IO_stdin_used+0x588>
  4025b0:	e8 fb ec ff ff       	call   4012b0 <puts@plt>
  4025b5:	48 8d 3d ba 1e 00 00 	lea    0x1eba(%rip),%rdi        # 404476 <_IO_stdin_used+0x476>
  4025bc:	e8 ef ec ff ff       	call   4012b0 <puts@plt>
  4025c1:	e9 ce 00 00 00       	jmp    402694 <notify_server+0x1fa>
  4025c6:	48 8d 2d 77 1e 00 00 	lea    0x1e77(%rip),%rbp        # 404444 <_IO_stdin_used+0x444>
  4025cd:	e9 60 ff ff ff       	jmp    402532 <notify_server+0x98>
  4025d2:	48 8d 94 24 00 20 00 	lea    0x2000(%rsp),%rdx
  4025d9:	00 
  4025da:	48 8d 35 89 1e 00 00 	lea    0x1e89(%rip),%rsi        # 40446a <_IO_stdin_used+0x46a>
  4025e1:	bf 01 00 00 00       	mov    $0x1,%edi
  4025e6:	b8 00 00 00 00       	mov    $0x0,%eax
  4025eb:	e8 d0 ed ff ff       	call   4013c0 <__printf_chk@plt>
  4025f0:	bf 01 00 00 00       	mov    $0x1,%edi
  4025f5:	e8 16 ee ff ff       	call   401410 <exit@plt>
  4025fa:	48 8d 3d 7f 1e 00 00 	lea    0x1e7f(%rip),%rdi        # 404480 <_IO_stdin_used+0x480>
  402601:	e8 aa ec ff ff       	call   4012b0 <puts@plt>
  402606:	e9 89 00 00 00       	jmp    402694 <notify_server+0x1fa>
  40260b:	48 89 ea             	mov    %rbp,%rdx
  40260e:	48 8d 35 ab 1f 00 00 	lea    0x1fab(%rip),%rsi        # 4045c0 <_IO_stdin_used+0x5c0>
  402615:	bf 01 00 00 00       	mov    $0x1,%edi
  40261a:	b8 00 00 00 00       	mov    $0x0,%eax
  40261f:	e8 9c ed ff ff       	call   4013c0 <__printf_chk@plt>
  402624:	48 8b 15 35 4b 00 00 	mov    0x4b35(%rip),%rdx        # 407160 <user_id>
  40262b:	48 8d 35 55 1e 00 00 	lea    0x1e55(%rip),%rsi        # 404487 <_IO_stdin_used+0x487>
  402632:	bf 01 00 00 00       	mov    $0x1,%edi
  402637:	b8 00 00 00 00       	mov    $0x0,%eax
  40263c:	e8 7f ed ff ff       	call   4013c0 <__printf_chk@plt>
  402641:	48 8b 15 28 4b 00 00 	mov    0x4b28(%rip),%rdx        # 407170 <course>
  402648:	48 8d 35 45 1e 00 00 	lea    0x1e45(%rip),%rsi        # 404494 <_IO_stdin_used+0x494>
  40264f:	bf 01 00 00 00       	mov    $0x1,%edi
  402654:	b8 00 00 00 00       	mov    $0x0,%eax
  402659:	e8 62 ed ff ff       	call   4013c0 <__printf_chk@plt>
  40265e:	48 8b 15 03 4b 00 00 	mov    0x4b03(%rip),%rdx        # 407168 <lab>
  402665:	48 8d 35 34 1e 00 00 	lea    0x1e34(%rip),%rsi        # 4044a0 <_IO_stdin_used+0x4a0>
  40266c:	bf 01 00 00 00       	mov    $0x1,%edi
  402671:	b8 00 00 00 00       	mov    $0x0,%eax
  402676:	e8 45 ed ff ff       	call   4013c0 <__printf_chk@plt>
  40267b:	48 89 e2             	mov    %rsp,%rdx
  40267e:	48 8d 35 24 1e 00 00 	lea    0x1e24(%rip),%rsi        # 4044a9 <_IO_stdin_used+0x4a9>
  402685:	bf 01 00 00 00       	mov    $0x1,%edi
  40268a:	b8 00 00 00 00       	mov    $0x0,%eax
  40268f:	e8 2c ed ff ff       	call   4013c0 <__printf_chk@plt>
  402694:	48 8b 84 24 08 40 00 	mov    0x4008(%rsp),%rax
  40269b:	00 
  40269c:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  4026a3:	00 00 
  4026a5:	75 0a                	jne    4026b1 <notify_server+0x217>
  4026a7:	48 81 c4 18 40 00 00 	add    $0x4018,%rsp
  4026ae:	5b                   	pop    %rbx
  4026af:	5d                   	pop    %rbp
  4026b0:	c3                   	ret    
  4026b1:	e8 72 02 00 00       	call   402928 <__stack_chk_fail>

00000000004026b6 <validate>:
  4026b6:	f3 0f 1e fa          	endbr64 
  4026ba:	53                   	push   %rbx
  4026bb:	89 fb                	mov    %edi,%ebx
  4026bd:	83 3d 64 4e 00 00 00 	cmpl   $0x0,0x4e64(%rip)        # 407528 <is_checker>
  4026c4:	74 79                	je     40273f <validate+0x89>
  4026c6:	39 3d 50 4e 00 00    	cmp    %edi,0x4e50(%rip)        # 40751c <vlevel>
  4026cc:	75 39                	jne    402707 <validate+0x51>
  4026ce:	8b 15 44 4e 00 00    	mov    0x4e44(%rip),%edx        # 407518 <check_level>
  4026d4:	39 fa                	cmp    %edi,%edx
  4026d6:	75 45                	jne    40271d <validate+0x67>
  4026d8:	0f be 0d 69 5a 00 00 	movsbl 0x5a69(%rip),%ecx        # 408148 <target_prefix>
  4026df:	4c 8d 0d 5a 4e 00 00 	lea    0x4e5a(%rip),%r9        # 407540 <gets_buf>
  4026e6:	41 89 f8             	mov    %edi,%r8d
  4026e9:	8b 15 31 4e 00 00    	mov    0x4e31(%rip),%edx        # 407520 <authkey>
  4026ef:	48 8d 35 1a 1f 00 00 	lea    0x1f1a(%rip),%rsi        # 404610 <_IO_stdin_used+0x610>
  4026f6:	bf 01 00 00 00       	mov    $0x1,%edi
  4026fb:	b8 00 00 00 00       	mov    $0x0,%eax
  402700:	e8 bb ec ff ff       	call   4013c0 <__printf_chk@plt>
  402705:	5b                   	pop    %rbx
  402706:	c3                   	ret    
  402707:	48 8d 3d a7 1d 00 00 	lea    0x1da7(%rip),%rdi        # 4044b5 <_IO_stdin_used+0x4b5>
  40270e:	e8 9d eb ff ff       	call   4012b0 <puts@plt>
  402713:	b8 00 00 00 00       	mov    $0x0,%eax
  402718:	e8 e9 fc ff ff       	call   402406 <check_fail>
  40271d:	89 f9                	mov    %edi,%ecx
  40271f:	48 8d 35 c2 1e 00 00 	lea    0x1ec2(%rip),%rsi        # 4045e8 <_IO_stdin_used+0x5e8>
  402726:	bf 01 00 00 00       	mov    $0x1,%edi
  40272b:	b8 00 00 00 00       	mov    $0x0,%eax
  402730:	e8 8b ec ff ff       	call   4013c0 <__printf_chk@plt>
  402735:	b8 00 00 00 00       	mov    $0x0,%eax
  40273a:	e8 c7 fc ff ff       	call   402406 <check_fail>
  40273f:	39 3d d7 4d 00 00    	cmp    %edi,0x4dd7(%rip)        # 40751c <vlevel>
  402745:	74 1a                	je     402761 <validate+0xab>
  402747:	48 8d 3d 67 1d 00 00 	lea    0x1d67(%rip),%rdi        # 4044b5 <_IO_stdin_used+0x4b5>
  40274e:	e8 5d eb ff ff       	call   4012b0 <puts@plt>
  402753:	89 de                	mov    %ebx,%esi
  402755:	bf 00 00 00 00       	mov    $0x0,%edi
  40275a:	e8 3b fd ff ff       	call   40249a <notify_server>
  40275f:	eb a4                	jmp    402705 <validate+0x4f>
  402761:	0f be 0d e0 59 00 00 	movsbl 0x59e0(%rip),%ecx        # 408148 <target_prefix>
  402768:	89 fa                	mov    %edi,%edx
  40276a:	48 8d 35 c7 1e 00 00 	lea    0x1ec7(%rip),%rsi        # 404638 <_IO_stdin_used+0x638>
  402771:	bf 01 00 00 00       	mov    $0x1,%edi
  402776:	b8 00 00 00 00       	mov    $0x0,%eax
  40277b:	e8 40 ec ff ff       	call   4013c0 <__printf_chk@plt>
  402780:	89 de                	mov    %ebx,%esi
  402782:	bf 01 00 00 00       	mov    $0x1,%edi
  402787:	e8 0e fd ff ff       	call   40249a <notify_server>
  40278c:	e9 74 ff ff ff       	jmp    402705 <validate+0x4f>

0000000000402791 <fail>:
  402791:	f3 0f 1e fa          	endbr64 
  402795:	48 83 ec 08          	sub    $0x8,%rsp
  402799:	83 3d 88 4d 00 00 00 	cmpl   $0x0,0x4d88(%rip)        # 407528 <is_checker>
  4027a0:	75 11                	jne    4027b3 <fail+0x22>
  4027a2:	89 fe                	mov    %edi,%esi
  4027a4:	bf 00 00 00 00       	mov    $0x0,%edi
  4027a9:	e8 ec fc ff ff       	call   40249a <notify_server>
  4027ae:	48 83 c4 08          	add    $0x8,%rsp
  4027b2:	c3                   	ret    
  4027b3:	b8 00 00 00 00       	mov    $0x0,%eax
  4027b8:	e8 49 fc ff ff       	call   402406 <check_fail>

00000000004027bd <bushandler>:
  4027bd:	f3 0f 1e fa          	endbr64 
  4027c1:	50                   	push   %rax
  4027c2:	58                   	pop    %rax
  4027c3:	48 83 ec 08          	sub    $0x8,%rsp
  4027c7:	83 3d 5a 4d 00 00 00 	cmpl   $0x0,0x4d5a(%rip)        # 407528 <is_checker>
  4027ce:	74 16                	je     4027e6 <bushandler+0x29>
  4027d0:	48 8d 3d fc 1c 00 00 	lea    0x1cfc(%rip),%rdi        # 4044d3 <_IO_stdin_used+0x4d3>
  4027d7:	e8 d4 ea ff ff       	call   4012b0 <puts@plt>
  4027dc:	b8 00 00 00 00       	mov    $0x0,%eax
  4027e1:	e8 20 fc ff ff       	call   402406 <check_fail>
  4027e6:	48 8d 3d 83 1e 00 00 	lea    0x1e83(%rip),%rdi        # 404670 <_IO_stdin_used+0x670>
  4027ed:	e8 be ea ff ff       	call   4012b0 <puts@plt>
  4027f2:	48 8d 3d e4 1c 00 00 	lea    0x1ce4(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  4027f9:	e8 b2 ea ff ff       	call   4012b0 <puts@plt>
  4027fe:	be 00 00 00 00       	mov    $0x0,%esi
  402803:	bf 00 00 00 00       	mov    $0x0,%edi
  402808:	e8 8d fc ff ff       	call   40249a <notify_server>
  40280d:	bf 01 00 00 00       	mov    $0x1,%edi
  402812:	e8 f9 eb ff ff       	call   401410 <exit@plt>

0000000000402817 <seghandler>:
  402817:	f3 0f 1e fa          	endbr64 
  40281b:	50                   	push   %rax
  40281c:	58                   	pop    %rax
  40281d:	48 83 ec 08          	sub    $0x8,%rsp
  402821:	83 3d 00 4d 00 00 00 	cmpl   $0x0,0x4d00(%rip)        # 407528 <is_checker>
  402828:	74 16                	je     402840 <seghandler+0x29>
  40282a:	48 8d 3d c2 1c 00 00 	lea    0x1cc2(%rip),%rdi        # 4044f3 <_IO_stdin_used+0x4f3>
  402831:	e8 7a ea ff ff       	call   4012b0 <puts@plt>
  402836:	b8 00 00 00 00       	mov    $0x0,%eax
  40283b:	e8 c6 fb ff ff       	call   402406 <check_fail>
  402840:	48 8d 3d 49 1e 00 00 	lea    0x1e49(%rip),%rdi        # 404690 <_IO_stdin_used+0x690>
  402847:	e8 64 ea ff ff       	call   4012b0 <puts@plt>
  40284c:	48 8d 3d 8a 1c 00 00 	lea    0x1c8a(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  402853:	e8 58 ea ff ff       	call   4012b0 <puts@plt>
  402858:	be 00 00 00 00       	mov    $0x0,%esi
  40285d:	bf 00 00 00 00       	mov    $0x0,%edi
  402862:	e8 33 fc ff ff       	call   40249a <notify_server>
  402867:	bf 01 00 00 00       	mov    $0x1,%edi
  40286c:	e8 9f eb ff ff       	call   401410 <exit@plt>

0000000000402871 <illegalhandler>:
  402871:	f3 0f 1e fa          	endbr64 
  402875:	50                   	push   %rax
  402876:	58                   	pop    %rax
  402877:	48 83 ec 08          	sub    $0x8,%rsp
  40287b:	83 3d a6 4c 00 00 00 	cmpl   $0x0,0x4ca6(%rip)        # 407528 <is_checker>
  402882:	74 16                	je     40289a <illegalhandler+0x29>
  402884:	48 8d 3d 7b 1c 00 00 	lea    0x1c7b(%rip),%rdi        # 404506 <_IO_stdin_used+0x506>
  40288b:	e8 20 ea ff ff       	call   4012b0 <puts@plt>
  402890:	b8 00 00 00 00       	mov    $0x0,%eax
  402895:	e8 6c fb ff ff       	call   402406 <check_fail>
  40289a:	48 8d 3d 17 1e 00 00 	lea    0x1e17(%rip),%rdi        # 4046b8 <_IO_stdin_used+0x6b8>
  4028a1:	e8 0a ea ff ff       	call   4012b0 <puts@plt>
  4028a6:	48 8d 3d 30 1c 00 00 	lea    0x1c30(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  4028ad:	e8 fe e9 ff ff       	call   4012b0 <puts@plt>
  4028b2:	be 00 00 00 00       	mov    $0x0,%esi
  4028b7:	bf 00 00 00 00       	mov    $0x0,%edi
  4028bc:	e8 d9 fb ff ff       	call   40249a <notify_server>
  4028c1:	bf 01 00 00 00       	mov    $0x1,%edi
  4028c6:	e8 45 eb ff ff       	call   401410 <exit@plt>

00000000004028cb <sigalrmhandler>:
  4028cb:	f3 0f 1e fa          	endbr64 
  4028cf:	50                   	push   %rax
  4028d0:	58                   	pop    %rax
  4028d1:	48 83 ec 08          	sub    $0x8,%rsp
  4028d5:	83 3d 4c 4c 00 00 00 	cmpl   $0x0,0x4c4c(%rip)        # 407528 <is_checker>
  4028dc:	74 16                	je     4028f4 <sigalrmhandler+0x29>
  4028de:	48 8d 3d 35 1c 00 00 	lea    0x1c35(%rip),%rdi        # 40451a <_IO_stdin_used+0x51a>
  4028e5:	e8 c6 e9 ff ff       	call   4012b0 <puts@plt>
  4028ea:	b8 00 00 00 00       	mov    $0x0,%eax
  4028ef:	e8 12 fb ff ff       	call   402406 <check_fail>
  4028f4:	ba 02 00 00 00       	mov    $0x2,%edx
  4028f9:	48 8d 35 e8 1d 00 00 	lea    0x1de8(%rip),%rsi        # 4046e8 <_IO_stdin_used+0x6e8>
  402900:	bf 01 00 00 00       	mov    $0x1,%edi
  402905:	b8 00 00 00 00       	mov    $0x0,%eax
  40290a:	e8 b1 ea ff ff       	call   4013c0 <__printf_chk@plt>
  40290f:	be 00 00 00 00       	mov    $0x0,%esi
  402914:	bf 00 00 00 00       	mov    $0x0,%edi
  402919:	e8 7c fb ff ff       	call   40249a <notify_server>
  40291e:	bf 01 00 00 00       	mov    $0x1,%edi
  402923:	e8 e8 ea ff ff       	call   401410 <exit@plt>

0000000000402928 <__stack_chk_fail>:
  402928:	f3 0f 1e fa          	endbr64 
  40292c:	50                   	push   %rax
  40292d:	58                   	pop    %rax
  40292e:	48 83 ec 08          	sub    $0x8,%rsp
  402932:	83 3d ef 4b 00 00 00 	cmpl   $0x0,0x4bef(%rip)        # 407528 <is_checker>
  402939:	74 16                	je     402951 <__stack_chk_fail+0x29>
  40293b:	48 8d 3d e0 1b 00 00 	lea    0x1be0(%rip),%rdi        # 404522 <_IO_stdin_used+0x522>
  402942:	e8 69 e9 ff ff       	call   4012b0 <puts@plt>
  402947:	b8 00 00 00 00       	mov    $0x0,%eax
  40294c:	e8 b5 fa ff ff       	call   402406 <check_fail>
  402951:	48 8d 3d c8 1d 00 00 	lea    0x1dc8(%rip),%rdi        # 404720 <_IO_stdin_used+0x720>
  402958:	e8 53 e9 ff ff       	call   4012b0 <puts@plt>
  40295d:	48 8d 3d 79 1b 00 00 	lea    0x1b79(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  402964:	e8 47 e9 ff ff       	call   4012b0 <puts@plt>
  402969:	be 00 00 00 00       	mov    $0x0,%esi
  40296e:	bf 00 00 00 00       	mov    $0x0,%edi
  402973:	e8 22 fb ff ff       	call   40249a <notify_server>
  402978:	bf 01 00 00 00       	mov    $0x1,%edi
  40297d:	e8 8e ea ff ff       	call   401410 <exit@plt>

0000000000402982 <launch>:
  402982:	f3 0f 1e fa          	endbr64 
  402986:	55                   	push   %rbp
  402987:	48 89 e5             	mov    %rsp,%rbp
  40298a:	53                   	push   %rbx
  40298b:	48 83 ec 18          	sub    $0x18,%rsp
  40298f:	48 89 fa             	mov    %rdi,%rdx
  402992:	89 f3                	mov    %esi,%ebx
  402994:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40299b:	00 00 
  40299d:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  4029a1:	31 c0                	xor    %eax,%eax
  4029a3:	48 8d 47 17          	lea    0x17(%rdi),%rax
  4029a7:	48 89 c1             	mov    %rax,%rcx
  4029aa:	48 83 e1 f0          	and    $0xfffffffffffffff0,%rcx
  4029ae:	48 25 00 f0 ff ff    	and    $0xfffffffffffff000,%rax
  4029b4:	48 89 e6             	mov    %rsp,%rsi
  4029b7:	48 29 c6             	sub    %rax,%rsi
  4029ba:	48 89 f0             	mov    %rsi,%rax
  4029bd:	48 39 c4             	cmp    %rax,%rsp
  4029c0:	74 12                	je     4029d4 <launch+0x52>
  4029c2:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  4029c9:	48 83 8c 24 f8 0f 00 	orq    $0x0,0xff8(%rsp)
  4029d0:	00 00 
  4029d2:	eb e9                	jmp    4029bd <launch+0x3b>
  4029d4:	48 89 c8             	mov    %rcx,%rax
  4029d7:	25 ff 0f 00 00       	and    $0xfff,%eax
  4029dc:	48 29 c4             	sub    %rax,%rsp
  4029df:	48 85 c0             	test   %rax,%rax
  4029e2:	74 06                	je     4029ea <launch+0x68>
  4029e4:	48 83 4c 04 f8 00    	orq    $0x0,-0x8(%rsp,%rax,1)
  4029ea:	48 8d 7c 24 0f       	lea    0xf(%rsp),%rdi
  4029ef:	48 83 e7 f0          	and    $0xfffffffffffffff0,%rdi
  4029f3:	be f4 00 00 00       	mov    $0xf4,%esi
  4029f8:	e8 e3 e8 ff ff       	call   4012e0 <memset@plt>
  4029fd:	48 8b 05 bc 4a 00 00 	mov    0x4abc(%rip),%rax        # 4074c0 <stdin@GLIBC_2.2.5>
  402a04:	48 39 05 05 4b 00 00 	cmp    %rax,0x4b05(%rip)        # 407510 <infile>
  402a0b:	74 42                	je     402a4f <launch+0xcd>
  402a0d:	c7 05 05 4b 00 00 00 	movl   $0x0,0x4b05(%rip)        # 40751c <vlevel>
  402a14:	00 00 00 
  402a17:	85 db                	test   %ebx,%ebx
  402a19:	75 4c                	jne    402a67 <launch+0xe5>
  402a1b:	b8 00 00 00 00       	mov    $0x0,%eax
  402a20:	e8 8f f6 ff ff       	call   4020b4 <test>
  402a25:	83 3d fc 4a 00 00 00 	cmpl   $0x0,0x4afc(%rip)        # 407528 <is_checker>
  402a2c:	75 45                	jne    402a73 <launch+0xf1>
  402a2e:	48 8d 3d 14 1b 00 00 	lea    0x1b14(%rip),%rdi        # 404549 <_IO_stdin_used+0x549>
  402a35:	e8 76 e8 ff ff       	call   4012b0 <puts@plt>
  402a3a:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402a3e:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  402a45:	00 00 
  402a47:	75 40                	jne    402a89 <launch+0x107>
  402a49:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
  402a4d:	c9                   	leave  
  402a4e:	c3                   	ret    
  402a4f:	48 8d 35 db 1a 00 00 	lea    0x1adb(%rip),%rsi        # 404531 <_IO_stdin_used+0x531>
  402a56:	bf 01 00 00 00       	mov    $0x1,%edi
  402a5b:	b8 00 00 00 00       	mov    $0x0,%eax
  402a60:	e8 5b e9 ff ff       	call   4013c0 <__printf_chk@plt>
  402a65:	eb a6                	jmp    402a0d <launch+0x8b>
  402a67:	b8 00 00 00 00       	mov    $0x0,%eax
  402a6c:	e8 72 f6 ff ff       	call   4020e3 <test2>
  402a71:	eb b2                	jmp    402a25 <launch+0xa3>
  402a73:	48 8d 3d c4 1a 00 00 	lea    0x1ac4(%rip),%rdi        # 40453e <_IO_stdin_used+0x53e>
  402a7a:	e8 31 e8 ff ff       	call   4012b0 <puts@plt>
  402a7f:	b8 00 00 00 00       	mov    $0x0,%eax
  402a84:	e8 7d f9 ff ff       	call   402406 <check_fail>
  402a89:	e8 9a fe ff ff       	call   402928 <__stack_chk_fail>

0000000000402a8e <stable_launch>:
  402a8e:	f3 0f 1e fa          	endbr64 
  402a92:	55                   	push   %rbp
  402a93:	53                   	push   %rbx
  402a94:	48 83 ec 08          	sub    $0x8,%rsp
  402a98:	89 f5                	mov    %esi,%ebp
  402a9a:	48 89 3d 67 4a 00 00 	mov    %rdi,0x4a67(%rip)        # 407508 <global_offset>
  402aa1:	41 b9 00 00 00 00    	mov    $0x0,%r9d
  402aa7:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  402aad:	b9 32 01 00 00       	mov    $0x132,%ecx
  402ab2:	ba 07 00 00 00       	mov    $0x7,%edx
  402ab7:	be 00 00 10 00       	mov    $0x100000,%esi
  402abc:	bf 00 60 58 55       	mov    $0x55586000,%edi
  402ac1:	e8 0a e8 ff ff       	call   4012d0 <mmap@plt>
  402ac6:	48 89 c3             	mov    %rax,%rbx
  402ac9:	48 3d 00 60 58 55    	cmp    $0x55586000,%rax
  402acf:	75 4a                	jne    402b1b <stable_launch+0x8d>
  402ad1:	48 8d 90 f8 ff 0f 00 	lea    0xffff8(%rax),%rdx
  402ad8:	48 89 15 71 56 00 00 	mov    %rdx,0x5671(%rip)        # 408150 <stack_top>
  402adf:	48 89 e0             	mov    %rsp,%rax
  402ae2:	48 89 d4             	mov    %rdx,%rsp
  402ae5:	48 89 c2             	mov    %rax,%rdx
  402ae8:	48 89 15 11 4a 00 00 	mov    %rdx,0x4a11(%rip)        # 407500 <global_save_stack>
  402aef:	89 ee                	mov    %ebp,%esi
  402af1:	48 8b 3d 10 4a 00 00 	mov    0x4a10(%rip),%rdi        # 407508 <global_offset>
  402af8:	e8 85 fe ff ff       	call   402982 <launch>
  402afd:	48 8b 05 fc 49 00 00 	mov    0x49fc(%rip),%rax        # 407500 <global_save_stack>
  402b04:	48 89 c4             	mov    %rax,%rsp
  402b07:	be 00 00 10 00       	mov    $0x100000,%esi
  402b0c:	48 89 df             	mov    %rbx,%rdi
  402b0f:	e8 9c e8 ff ff       	call   4013b0 <munmap@plt>
  402b14:	48 83 c4 08          	add    $0x8,%rsp
  402b18:	5b                   	pop    %rbx
  402b19:	5d                   	pop    %rbp
  402b1a:	c3                   	ret    
  402b1b:	be 00 00 10 00       	mov    $0x100000,%esi
  402b20:	48 89 c7             	mov    %rax,%rdi
  402b23:	e8 88 e8 ff ff       	call   4013b0 <munmap@plt>
  402b28:	b9 00 60 58 55       	mov    $0x55586000,%ecx
  402b2d:	48 8d 15 14 1c 00 00 	lea    0x1c14(%rip),%rdx        # 404748 <_IO_stdin_used+0x748>
  402b34:	be 01 00 00 00       	mov    $0x1,%esi
  402b39:	48 8b 3d a0 49 00 00 	mov    0x49a0(%rip),%rdi        # 4074e0 <stderr@GLIBC_2.2.5>
  402b40:	b8 00 00 00 00       	mov    $0x0,%eax
  402b45:	e8 e6 e8 ff ff       	call   401430 <__fprintf_chk@plt>
  402b4a:	bf 01 00 00 00       	mov    $0x1,%edi
  402b4f:	e8 bc e8 ff ff       	call   401410 <exit@plt>

0000000000402b54 <rio_readinitb>:
  402b54:	89 37                	mov    %esi,(%rdi)
  402b56:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%rdi)
  402b5d:	48 8d 47 10          	lea    0x10(%rdi),%rax
  402b61:	48 89 47 08          	mov    %rax,0x8(%rdi)
  402b65:	c3                   	ret    

0000000000402b66 <sigalrm_handler>:
  402b66:	f3 0f 1e fa          	endbr64 
  402b6a:	50                   	push   %rax
  402b6b:	58                   	pop    %rax
  402b6c:	48 83 ec 08          	sub    $0x8,%rsp
  402b70:	b9 00 00 00 00       	mov    $0x0,%ecx
  402b75:	48 8d 15 04 1c 00 00 	lea    0x1c04(%rip),%rdx        # 404780 <trans_char+0x10>
  402b7c:	be 01 00 00 00       	mov    $0x1,%esi
  402b81:	48 8b 3d 58 49 00 00 	mov    0x4958(%rip),%rdi        # 4074e0 <stderr@GLIBC_2.2.5>
  402b88:	b8 00 00 00 00       	mov    $0x0,%eax
  402b8d:	e8 9e e8 ff ff       	call   401430 <__fprintf_chk@plt>
  402b92:	bf 01 00 00 00       	mov    $0x1,%edi
  402b97:	e8 74 e8 ff ff       	call   401410 <exit@plt>

0000000000402b9c <rio_writen>:
  402b9c:	41 55                	push   %r13
  402b9e:	41 54                	push   %r12
  402ba0:	55                   	push   %rbp
  402ba1:	53                   	push   %rbx
  402ba2:	48 83 ec 08          	sub    $0x8,%rsp
  402ba6:	41 89 fc             	mov    %edi,%r12d
  402ba9:	48 89 f5             	mov    %rsi,%rbp
  402bac:	49 89 d5             	mov    %rdx,%r13
  402baf:	48 89 d3             	mov    %rdx,%rbx
  402bb2:	eb 06                	jmp    402bba <rio_writen+0x1e>
  402bb4:	48 29 c3             	sub    %rax,%rbx
  402bb7:	48 01 c5             	add    %rax,%rbp
  402bba:	48 85 db             	test   %rbx,%rbx
  402bbd:	74 24                	je     402be3 <rio_writen+0x47>
  402bbf:	48 89 da             	mov    %rbx,%rdx
  402bc2:	48 89 ee             	mov    %rbp,%rsi
  402bc5:	44 89 e7             	mov    %r12d,%edi
  402bc8:	e8 f3 e6 ff ff       	call   4012c0 <write@plt>
  402bcd:	48 85 c0             	test   %rax,%rax
  402bd0:	7f e2                	jg     402bb4 <rio_writen+0x18>
  402bd2:	e8 89 e6 ff ff       	call   401260 <__errno_location@plt>
  402bd7:	83 38 04             	cmpl   $0x4,(%rax)
  402bda:	75 15                	jne    402bf1 <rio_writen+0x55>
  402bdc:	b8 00 00 00 00       	mov    $0x0,%eax
  402be1:	eb d1                	jmp    402bb4 <rio_writen+0x18>
  402be3:	4c 89 e8             	mov    %r13,%rax
  402be6:	48 83 c4 08          	add    $0x8,%rsp
  402bea:	5b                   	pop    %rbx
  402beb:	5d                   	pop    %rbp
  402bec:	41 5c                	pop    %r12
  402bee:	41 5d                	pop    %r13
  402bf0:	c3                   	ret    
  402bf1:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402bf8:	eb ec                	jmp    402be6 <rio_writen+0x4a>

0000000000402bfa <rio_read>:
  402bfa:	41 55                	push   %r13
  402bfc:	41 54                	push   %r12
  402bfe:	55                   	push   %rbp
  402bff:	53                   	push   %rbx
  402c00:	48 83 ec 08          	sub    $0x8,%rsp
  402c04:	48 89 fb             	mov    %rdi,%rbx
  402c07:	49 89 f5             	mov    %rsi,%r13
  402c0a:	49 89 d4             	mov    %rdx,%r12
  402c0d:	eb 17                	jmp    402c26 <rio_read+0x2c>
  402c0f:	e8 4c e6 ff ff       	call   401260 <__errno_location@plt>
  402c14:	83 38 04             	cmpl   $0x4,(%rax)
  402c17:	74 0d                	je     402c26 <rio_read+0x2c>
  402c19:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402c20:	eb 54                	jmp    402c76 <rio_read+0x7c>
  402c22:	48 89 6b 08          	mov    %rbp,0x8(%rbx)
  402c26:	8b 6b 04             	mov    0x4(%rbx),%ebp
  402c29:	85 ed                	test   %ebp,%ebp
  402c2b:	7f 23                	jg     402c50 <rio_read+0x56>
  402c2d:	48 8d 6b 10          	lea    0x10(%rbx),%rbp
  402c31:	8b 3b                	mov    (%rbx),%edi
  402c33:	ba 00 20 00 00       	mov    $0x2000,%edx
  402c38:	48 89 ee             	mov    %rbp,%rsi
  402c3b:	e8 d0 e6 ff ff       	call   401310 <read@plt>
  402c40:	89 43 04             	mov    %eax,0x4(%rbx)
  402c43:	85 c0                	test   %eax,%eax
  402c45:	78 c8                	js     402c0f <rio_read+0x15>
  402c47:	75 d9                	jne    402c22 <rio_read+0x28>
  402c49:	b8 00 00 00 00       	mov    $0x0,%eax
  402c4e:	eb 26                	jmp    402c76 <rio_read+0x7c>
  402c50:	89 e8                	mov    %ebp,%eax
  402c52:	4c 39 e0             	cmp    %r12,%rax
  402c55:	72 03                	jb     402c5a <rio_read+0x60>
  402c57:	44 89 e5             	mov    %r12d,%ebp
  402c5a:	4c 63 e5             	movslq %ebp,%r12
  402c5d:	48 8b 73 08          	mov    0x8(%rbx),%rsi
  402c61:	4c 89 e2             	mov    %r12,%rdx
  402c64:	4c 89 ef             	mov    %r13,%rdi
  402c67:	e8 04 e7 ff ff       	call   401370 <memcpy@plt>
  402c6c:	4c 01 63 08          	add    %r12,0x8(%rbx)
  402c70:	29 6b 04             	sub    %ebp,0x4(%rbx)
  402c73:	4c 89 e0             	mov    %r12,%rax
  402c76:	48 83 c4 08          	add    $0x8,%rsp
  402c7a:	5b                   	pop    %rbx
  402c7b:	5d                   	pop    %rbp
  402c7c:	41 5c                	pop    %r12
  402c7e:	41 5d                	pop    %r13
  402c80:	c3                   	ret    

0000000000402c81 <rio_readlineb>:
  402c81:	41 55                	push   %r13
  402c83:	41 54                	push   %r12
  402c85:	55                   	push   %rbp
  402c86:	53                   	push   %rbx
  402c87:	48 83 ec 18          	sub    $0x18,%rsp
  402c8b:	49 89 fd             	mov    %rdi,%r13
  402c8e:	48 89 f5             	mov    %rsi,%rbp
  402c91:	49 89 d4             	mov    %rdx,%r12
  402c94:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402c9b:	00 00 
  402c9d:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  402ca2:	31 c0                	xor    %eax,%eax
  402ca4:	bb 01 00 00 00       	mov    $0x1,%ebx
  402ca9:	eb 18                	jmp    402cc3 <rio_readlineb+0x42>
  402cab:	85 c0                	test   %eax,%eax
  402cad:	75 65                	jne    402d14 <rio_readlineb+0x93>
  402caf:	48 83 fb 01          	cmp    $0x1,%rbx
  402cb3:	75 3d                	jne    402cf2 <rio_readlineb+0x71>
  402cb5:	b8 00 00 00 00       	mov    $0x0,%eax
  402cba:	eb 3d                	jmp    402cf9 <rio_readlineb+0x78>
  402cbc:	48 83 c3 01          	add    $0x1,%rbx
  402cc0:	48 89 d5             	mov    %rdx,%rbp
  402cc3:	4c 39 e3             	cmp    %r12,%rbx
  402cc6:	73 2a                	jae    402cf2 <rio_readlineb+0x71>
  402cc8:	48 8d 74 24 07       	lea    0x7(%rsp),%rsi
  402ccd:	ba 01 00 00 00       	mov    $0x1,%edx
  402cd2:	4c 89 ef             	mov    %r13,%rdi
  402cd5:	e8 20 ff ff ff       	call   402bfa <rio_read>
  402cda:	83 f8 01             	cmp    $0x1,%eax
  402cdd:	75 cc                	jne    402cab <rio_readlineb+0x2a>
  402cdf:	48 8d 55 01          	lea    0x1(%rbp),%rdx
  402ce3:	0f b6 44 24 07       	movzbl 0x7(%rsp),%eax
  402ce8:	88 45 00             	mov    %al,0x0(%rbp)
  402ceb:	3c 0a                	cmp    $0xa,%al
  402ced:	75 cd                	jne    402cbc <rio_readlineb+0x3b>
  402cef:	48 89 d5             	mov    %rdx,%rbp
  402cf2:	c6 45 00 00          	movb   $0x0,0x0(%rbp)
  402cf6:	48 89 d8             	mov    %rbx,%rax
  402cf9:	48 8b 4c 24 08       	mov    0x8(%rsp),%rcx
  402cfe:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  402d05:	00 00 
  402d07:	75 14                	jne    402d1d <rio_readlineb+0x9c>
  402d09:	48 83 c4 18          	add    $0x18,%rsp
  402d0d:	5b                   	pop    %rbx
  402d0e:	5d                   	pop    %rbp
  402d0f:	41 5c                	pop    %r12
  402d11:	41 5d                	pop    %r13
  402d13:	c3                   	ret    
  402d14:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402d1b:	eb dc                	jmp    402cf9 <rio_readlineb+0x78>
  402d1d:	e8 06 fc ff ff       	call   402928 <__stack_chk_fail>

0000000000402d22 <urlencode>:
  402d22:	41 54                	push   %r12
  402d24:	55                   	push   %rbp
  402d25:	53                   	push   %rbx
  402d26:	48 83 ec 10          	sub    $0x10,%rsp
  402d2a:	48 89 fb             	mov    %rdi,%rbx
  402d2d:	48 89 f5             	mov    %rsi,%rbp
  402d30:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402d37:	00 00 
  402d39:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  402d3e:	31 c0                	xor    %eax,%eax
  402d40:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  402d47:	f2 ae                	repnz scas %es:(%rdi),%al
  402d49:	48 f7 d1             	not    %rcx
  402d4c:	8d 41 ff             	lea    -0x1(%rcx),%eax
  402d4f:	eb 0f                	jmp    402d60 <urlencode+0x3e>
  402d51:	44 88 45 00          	mov    %r8b,0x0(%rbp)
  402d55:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  402d59:	48 83 c3 01          	add    $0x1,%rbx
  402d5d:	44 89 e0             	mov    %r12d,%eax
  402d60:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
  402d64:	85 c0                	test   %eax,%eax
  402d66:	0f 84 a8 00 00 00    	je     402e14 <urlencode+0xf2>
  402d6c:	44 0f b6 03          	movzbl (%rbx),%r8d
  402d70:	41 80 f8 2a          	cmp    $0x2a,%r8b
  402d74:	0f 94 c2             	sete   %dl
  402d77:	41 80 f8 2d          	cmp    $0x2d,%r8b
  402d7b:	0f 94 c0             	sete   %al
  402d7e:	08 c2                	or     %al,%dl
  402d80:	75 cf                	jne    402d51 <urlencode+0x2f>
  402d82:	41 80 f8 2e          	cmp    $0x2e,%r8b
  402d86:	74 c9                	je     402d51 <urlencode+0x2f>
  402d88:	41 80 f8 5f          	cmp    $0x5f,%r8b
  402d8c:	74 c3                	je     402d51 <urlencode+0x2f>
  402d8e:	41 8d 40 d0          	lea    -0x30(%r8),%eax
  402d92:	3c 09                	cmp    $0x9,%al
  402d94:	76 bb                	jbe    402d51 <urlencode+0x2f>
  402d96:	41 8d 40 bf          	lea    -0x41(%r8),%eax
  402d9a:	3c 19                	cmp    $0x19,%al
  402d9c:	76 b3                	jbe    402d51 <urlencode+0x2f>
  402d9e:	41 8d 40 9f          	lea    -0x61(%r8),%eax
  402da2:	3c 19                	cmp    $0x19,%al
  402da4:	76 ab                	jbe    402d51 <urlencode+0x2f>
  402da6:	41 80 f8 20          	cmp    $0x20,%r8b
  402daa:	74 56                	je     402e02 <urlencode+0xe0>
  402dac:	41 8d 40 e0          	lea    -0x20(%r8),%eax
  402db0:	3c 5f                	cmp    $0x5f,%al
  402db2:	0f 96 c2             	setbe  %dl
  402db5:	41 80 f8 09          	cmp    $0x9,%r8b
  402db9:	0f 94 c0             	sete   %al
  402dbc:	08 c2                	or     %al,%dl
  402dbe:	74 4f                	je     402e0f <urlencode+0xed>
  402dc0:	48 89 e7             	mov    %rsp,%rdi
  402dc3:	45 0f b6 c0          	movzbl %r8b,%r8d
  402dc7:	48 8d 0d 67 1a 00 00 	lea    0x1a67(%rip),%rcx        # 404835 <trans_char+0xc5>
  402dce:	ba 08 00 00 00       	mov    $0x8,%edx
  402dd3:	be 01 00 00 00       	mov    $0x1,%esi
  402dd8:	b8 00 00 00 00       	mov    $0x0,%eax
  402ddd:	e8 6e e6 ff ff       	call   401450 <__sprintf_chk@plt>
  402de2:	0f b6 04 24          	movzbl (%rsp),%eax
  402de6:	88 45 00             	mov    %al,0x0(%rbp)
  402de9:	0f b6 44 24 01       	movzbl 0x1(%rsp),%eax
  402dee:	88 45 01             	mov    %al,0x1(%rbp)
  402df1:	0f b6 44 24 02       	movzbl 0x2(%rsp),%eax
  402df6:	88 45 02             	mov    %al,0x2(%rbp)
  402df9:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
  402dfd:	e9 57 ff ff ff       	jmp    402d59 <urlencode+0x37>
  402e02:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
  402e06:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  402e0a:	e9 4a ff ff ff       	jmp    402d59 <urlencode+0x37>
  402e0f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402e14:	48 8b 74 24 08       	mov    0x8(%rsp),%rsi
  402e19:	64 48 33 34 25 28 00 	xor    %fs:0x28,%rsi
  402e20:	00 00 
  402e22:	75 09                	jne    402e2d <urlencode+0x10b>
  402e24:	48 83 c4 10          	add    $0x10,%rsp
  402e28:	5b                   	pop    %rbx
  402e29:	5d                   	pop    %rbp
  402e2a:	41 5c                	pop    %r12
  402e2c:	c3                   	ret    
  402e2d:	e8 f6 fa ff ff       	call   402928 <__stack_chk_fail>

0000000000402e32 <submitr>:
  402e32:	f3 0f 1e fa          	endbr64 
  402e36:	41 57                	push   %r15
  402e38:	41 56                	push   %r14
  402e3a:	41 55                	push   %r13
  402e3c:	41 54                	push   %r12
  402e3e:	55                   	push   %rbp
  402e3f:	53                   	push   %rbx
  402e40:	4c 8d 9c 24 00 60 ff 	lea    -0xa000(%rsp),%r11
  402e47:	ff 
  402e48:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  402e4f:	48 83 0c 24 00       	orq    $0x0,(%rsp)
  402e54:	4c 39 dc             	cmp    %r11,%rsp
  402e57:	75 ef                	jne    402e48 <submitr+0x16>
  402e59:	48 83 ec 68          	sub    $0x68,%rsp
  402e5d:	49 89 fc             	mov    %rdi,%r12
  402e60:	89 74 24 1c          	mov    %esi,0x1c(%rsp)
  402e64:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
  402e69:	49 89 cd             	mov    %rcx,%r13
  402e6c:	4c 89 44 24 10       	mov    %r8,0x10(%rsp)
  402e71:	4d 89 ce             	mov    %r9,%r14
  402e74:	48 8b ac 24 a0 a0 00 	mov    0xa0a0(%rsp),%rbp
  402e7b:	00 
  402e7c:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402e83:	00 00 
  402e85:	48 89 84 24 58 a0 00 	mov    %rax,0xa058(%rsp)
  402e8c:	00 
  402e8d:	31 c0                	xor    %eax,%eax
  402e8f:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%rsp)
  402e96:	00 
  402e97:	ba 00 00 00 00       	mov    $0x0,%edx
  402e9c:	be 01 00 00 00       	mov    $0x1,%esi
  402ea1:	bf 02 00 00 00       	mov    $0x2,%edi
  402ea6:	e8 b5 e5 ff ff       	call   401460 <socket@plt>
  402eab:	85 c0                	test   %eax,%eax
  402ead:	0f 88 a5 02 00 00    	js     403158 <submitr+0x326>
  402eb3:	89 c3                	mov    %eax,%ebx
  402eb5:	4c 89 e7             	mov    %r12,%rdi
  402eb8:	e8 83 e4 ff ff       	call   401340 <gethostbyname@plt>
  402ebd:	48 85 c0             	test   %rax,%rax
  402ec0:	0f 84 de 02 00 00    	je     4031a4 <submitr+0x372>
  402ec6:	4c 8d 7c 24 30       	lea    0x30(%rsp),%r15
  402ecb:	48 c7 44 24 30 00 00 	movq   $0x0,0x30(%rsp)
  402ed2:	00 00 
  402ed4:	48 c7 44 24 38 00 00 	movq   $0x0,0x38(%rsp)
  402edb:	00 00 
  402edd:	66 c7 44 24 30 02 00 	movw   $0x2,0x30(%rsp)
  402ee4:	48 63 50 14          	movslq 0x14(%rax),%rdx
  402ee8:	48 8b 40 18          	mov    0x18(%rax),%rax
  402eec:	48 8b 30             	mov    (%rax),%rsi
  402eef:	48 8d 7c 24 34       	lea    0x34(%rsp),%rdi
  402ef4:	b9 0c 00 00 00       	mov    $0xc,%ecx
  402ef9:	e8 52 e4 ff ff       	call   401350 <__memmove_chk@plt>
  402efe:	0f b7 74 24 1c       	movzwl 0x1c(%rsp),%esi
  402f03:	66 c1 c6 08          	rol    $0x8,%si
  402f07:	66 89 74 24 32       	mov    %si,0x32(%rsp)
  402f0c:	ba 10 00 00 00       	mov    $0x10,%edx
  402f11:	4c 89 fe             	mov    %r15,%rsi
  402f14:	89 df                	mov    %ebx,%edi
  402f16:	e8 05 e5 ff ff       	call   401420 <connect@plt>
  402f1b:	85 c0                	test   %eax,%eax
  402f1d:	0f 88 f7 02 00 00    	js     40321a <submitr+0x3e8>
  402f23:	48 c7 c6 ff ff ff ff 	mov    $0xffffffffffffffff,%rsi
  402f2a:	b8 00 00 00 00       	mov    $0x0,%eax
  402f2f:	48 89 f1             	mov    %rsi,%rcx
  402f32:	4c 89 f7             	mov    %r14,%rdi
  402f35:	f2 ae                	repnz scas %es:(%rdi),%al
  402f37:	48 89 ca             	mov    %rcx,%rdx
  402f3a:	48 f7 d2             	not    %rdx
  402f3d:	48 89 f1             	mov    %rsi,%rcx
  402f40:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
  402f45:	f2 ae                	repnz scas %es:(%rdi),%al
  402f47:	48 f7 d1             	not    %rcx
  402f4a:	49 89 c8             	mov    %rcx,%r8
  402f4d:	48 89 f1             	mov    %rsi,%rcx
  402f50:	4c 89 ef             	mov    %r13,%rdi
  402f53:	f2 ae                	repnz scas %es:(%rdi),%al
  402f55:	48 f7 d1             	not    %rcx
  402f58:	4d 8d 44 08 fe       	lea    -0x2(%r8,%rcx,1),%r8
  402f5d:	48 89 f1             	mov    %rsi,%rcx
  402f60:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
  402f65:	f2 ae                	repnz scas %es:(%rdi),%al
  402f67:	48 89 c8             	mov    %rcx,%rax
  402f6a:	48 f7 d0             	not    %rax
  402f6d:	49 8d 4c 00 ff       	lea    -0x1(%r8,%rax,1),%rcx
  402f72:	48 8d 44 52 fd       	lea    -0x3(%rdx,%rdx,2),%rax
  402f77:	48 8d 84 01 80 00 00 	lea    0x80(%rcx,%rax,1),%rax
  402f7e:	00 
  402f7f:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
  402f85:	0f 87 f7 02 00 00    	ja     403282 <submitr+0x450>
  402f8b:	48 8d b4 24 50 40 00 	lea    0x4050(%rsp),%rsi
  402f92:	00 
  402f93:	b9 00 04 00 00       	mov    $0x400,%ecx
  402f98:	b8 00 00 00 00       	mov    $0x0,%eax
  402f9d:	48 89 f7             	mov    %rsi,%rdi
  402fa0:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  402fa3:	4c 89 f7             	mov    %r14,%rdi
  402fa6:	e8 77 fd ff ff       	call   402d22 <urlencode>
  402fab:	85 c0                	test   %eax,%eax
  402fad:	0f 88 42 03 00 00    	js     4032f5 <submitr+0x4c3>
  402fb3:	4c 8d bc 24 50 20 00 	lea    0x2050(%rsp),%r15
  402fba:	00 
  402fbb:	48 83 ec 08          	sub    $0x8,%rsp
  402fbf:	41 54                	push   %r12
  402fc1:	48 8d 84 24 60 40 00 	lea    0x4060(%rsp),%rax
  402fc8:	00 
  402fc9:	50                   	push   %rax
  402fca:	41 55                	push   %r13
  402fcc:	4c 8b 4c 24 30       	mov    0x30(%rsp),%r9
  402fd1:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
  402fd6:	48 8d 0d cb 17 00 00 	lea    0x17cb(%rip),%rcx        # 4047a8 <trans_char+0x38>
  402fdd:	ba 00 20 00 00       	mov    $0x2000,%edx
  402fe2:	be 01 00 00 00       	mov    $0x1,%esi
  402fe7:	4c 89 ff             	mov    %r15,%rdi
  402fea:	b8 00 00 00 00       	mov    $0x0,%eax
  402fef:	e8 5c e4 ff ff       	call   401450 <__sprintf_chk@plt>
  402ff4:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  402ffb:	b8 00 00 00 00       	mov    $0x0,%eax
  403000:	4c 89 ff             	mov    %r15,%rdi
  403003:	f2 ae                	repnz scas %es:(%rdi),%al
  403005:	48 f7 d1             	not    %rcx
  403008:	48 8d 51 ff          	lea    -0x1(%rcx),%rdx
  40300c:	48 83 c4 20          	add    $0x20,%rsp
  403010:	4c 89 fe             	mov    %r15,%rsi
  403013:	89 df                	mov    %ebx,%edi
  403015:	e8 82 fb ff ff       	call   402b9c <rio_writen>
  40301a:	48 85 c0             	test   %rax,%rax
  40301d:	0f 88 5d 03 00 00    	js     403380 <submitr+0x54e>
  403023:	4c 8d 64 24 40       	lea    0x40(%rsp),%r12
  403028:	89 de                	mov    %ebx,%esi
  40302a:	4c 89 e7             	mov    %r12,%rdi
  40302d:	e8 22 fb ff ff       	call   402b54 <rio_readinitb>
  403032:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  403039:	00 
  40303a:	ba 00 20 00 00       	mov    $0x2000,%edx
  40303f:	4c 89 e7             	mov    %r12,%rdi
  403042:	e8 3a fc ff ff       	call   402c81 <rio_readlineb>
  403047:	48 85 c0             	test   %rax,%rax
  40304a:	0f 8e 9c 03 00 00    	jle    4033ec <submitr+0x5ba>
  403050:	48 8d 4c 24 2c       	lea    0x2c(%rsp),%rcx
  403055:	48 8d 94 24 50 60 00 	lea    0x6050(%rsp),%rdx
  40305c:	00 
  40305d:	48 8d bc 24 50 20 00 	lea    0x2050(%rsp),%rdi
  403064:	00 
  403065:	4c 8d 84 24 50 80 00 	lea    0x8050(%rsp),%r8
  40306c:	00 
  40306d:	48 8d 35 c8 17 00 00 	lea    0x17c8(%rip),%rsi        # 40483c <trans_char+0xcc>
  403074:	b8 00 00 00 00       	mov    $0x0,%eax
  403079:	e8 22 e3 ff ff       	call   4013a0 <__isoc99_sscanf@plt>
  40307e:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  403085:	00 
  403086:	b9 03 00 00 00       	mov    $0x3,%ecx
  40308b:	48 8d 3d c1 17 00 00 	lea    0x17c1(%rip),%rdi        # 404853 <trans_char+0xe3>
  403092:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  403094:	0f 97 c0             	seta   %al
  403097:	1c 00                	sbb    $0x0,%al
  403099:	84 c0                	test   %al,%al
  40309b:	0f 84 cb 03 00 00    	je     40346c <submitr+0x63a>
  4030a1:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  4030a8:	00 
  4030a9:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  4030ae:	ba 00 20 00 00       	mov    $0x2000,%edx
  4030b3:	e8 c9 fb ff ff       	call   402c81 <rio_readlineb>
  4030b8:	48 85 c0             	test   %rax,%rax
  4030bb:	7f c1                	jg     40307e <submitr+0x24c>
  4030bd:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4030c4:	3a 20 43 
  4030c7:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  4030ce:	20 75 6e 
  4030d1:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4030d5:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  4030d9:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4030e0:	74 6f 20 
  4030e3:	48 ba 72 65 61 64 20 	movabs $0x6165682064616572,%rdx
  4030ea:	68 65 61 
  4030ed:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4030f1:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  4030f5:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
  4030fc:	66 72 6f 
  4030ff:	48 ba 6d 20 41 75 74 	movabs $0x616c6f747541206d,%rdx
  403106:	6f 6c 61 
  403109:	48 89 45 20          	mov    %rax,0x20(%rbp)
  40310d:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  403111:	48 b8 62 20 73 65 72 	movabs $0x7265767265732062,%rax
  403118:	76 65 72 
  40311b:	48 89 45 30          	mov    %rax,0x30(%rbp)
  40311f:	c6 45 38 00          	movb   $0x0,0x38(%rbp)
  403123:	89 df                	mov    %ebx,%edi
  403125:	e8 d6 e1 ff ff       	call   401300 <close@plt>
  40312a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40312f:	48 8b 9c 24 58 a0 00 	mov    0xa058(%rsp),%rbx
  403136:	00 
  403137:	64 48 33 1c 25 28 00 	xor    %fs:0x28,%rbx
  40313e:	00 00 
  403140:	0f 85 96 04 00 00    	jne    4035dc <submitr+0x7aa>
  403146:	48 81 c4 68 a0 00 00 	add    $0xa068,%rsp
  40314d:	5b                   	pop    %rbx
  40314e:	5d                   	pop    %rbp
  40314f:	41 5c                	pop    %r12
  403151:	41 5d                	pop    %r13
  403153:	41 5e                	pop    %r14
  403155:	41 5f                	pop    %r15
  403157:	c3                   	ret    
  403158:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40315f:	3a 20 43 
  403162:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  403169:	20 75 6e 
  40316c:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403170:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403174:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40317b:	74 6f 20 
  40317e:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
  403185:	65 20 73 
  403188:	48 89 45 10          	mov    %rax,0x10(%rbp)
  40318c:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403190:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  403197:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  40319d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4031a2:	eb 8b                	jmp    40312f <submitr+0x2fd>
  4031a4:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  4031ab:	3a 20 44 
  4031ae:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
  4031b5:	20 75 6e 
  4031b8:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4031bc:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  4031c0:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4031c7:	74 6f 20 
  4031ca:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
  4031d1:	76 65 20 
  4031d4:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4031d8:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  4031dc:	48 b8 41 75 74 6f 6c 	movabs $0x2062616c6f747541,%rax
  4031e3:	61 62 20 
  4031e6:	48 ba 73 65 72 76 65 	movabs $0x6120726576726573,%rdx
  4031ed:	72 20 61 
  4031f0:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4031f4:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  4031f8:	c7 45 30 64 64 72 65 	movl   $0x65726464,0x30(%rbp)
  4031ff:	66 c7 45 34 73 73    	movw   $0x7373,0x34(%rbp)
  403205:	c6 45 36 00          	movb   $0x0,0x36(%rbp)
  403209:	89 df                	mov    %ebx,%edi
  40320b:	e8 f0 e0 ff ff       	call   401300 <close@plt>
  403210:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403215:	e9 15 ff ff ff       	jmp    40312f <submitr+0x2fd>
  40321a:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  403221:	3a 20 55 
  403224:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
  40322b:	20 74 6f 
  40322e:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403232:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403236:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  40323d:	65 63 74 
  403240:	48 ba 20 74 6f 20 74 	movabs $0x20656874206f7420,%rdx
  403247:	68 65 20 
  40324a:	48 89 45 10          	mov    %rax,0x10(%rbp)
  40324e:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403252:	48 b8 41 75 74 6f 6c 	movabs $0x2062616c6f747541,%rax
  403259:	61 62 20 
  40325c:	48 89 45 20          	mov    %rax,0x20(%rbp)
  403260:	c7 45 28 73 65 72 76 	movl   $0x76726573,0x28(%rbp)
  403267:	66 c7 45 2c 65 72    	movw   $0x7265,0x2c(%rbp)
  40326d:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  403271:	89 df                	mov    %ebx,%edi
  403273:	e8 88 e0 ff ff       	call   401300 <close@plt>
  403278:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40327d:	e9 ad fe ff ff       	jmp    40312f <submitr+0x2fd>
  403282:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  403289:	3a 20 52 
  40328c:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
  403293:	20 73 74 
  403296:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40329a:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40329e:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
  4032a5:	74 6f 6f 
  4032a8:	48 ba 20 6c 61 72 67 	movabs $0x202e656772616c20,%rdx
  4032af:	65 2e 20 
  4032b2:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4032b6:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  4032ba:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
  4032c1:	61 73 65 
  4032c4:	48 ba 20 53 55 42 4d 	movabs $0x5254494d42555320,%rdx
  4032cb:	49 54 52 
  4032ce:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4032d2:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  4032d6:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
  4032dd:	55 46 00 
  4032e0:	48 89 45 30          	mov    %rax,0x30(%rbp)
  4032e4:	89 df                	mov    %ebx,%edi
  4032e6:	e8 15 e0 ff ff       	call   401300 <close@plt>
  4032eb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4032f0:	e9 3a fe ff ff       	jmp    40312f <submitr+0x2fd>
  4032f5:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  4032fc:	3a 20 52 
  4032ff:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
  403306:	20 73 74 
  403309:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40330d:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403311:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
  403318:	63 6f 6e 
  40331b:	48 ba 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rdx
  403322:	20 61 6e 
  403325:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403329:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  40332d:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
  403334:	67 61 6c 
  403337:	48 ba 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rdx
  40333e:	6e 70 72 
  403341:	48 89 45 20          	mov    %rax,0x20(%rbp)
  403345:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  403349:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
  403350:	6c 65 20 
  403353:	48 ba 63 68 61 72 61 	movabs $0x6574636172616863,%rdx
  40335a:	63 74 65 
  40335d:	48 89 45 30          	mov    %rax,0x30(%rbp)
  403361:	48 89 55 38          	mov    %rdx,0x38(%rbp)
  403365:	66 c7 45 40 72 2e    	movw   $0x2e72,0x40(%rbp)
  40336b:	c6 45 42 00          	movb   $0x0,0x42(%rbp)
  40336f:	89 df                	mov    %ebx,%edi
  403371:	e8 8a df ff ff       	call   401300 <close@plt>
  403376:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40337b:	e9 af fd ff ff       	jmp    40312f <submitr+0x2fd>
  403380:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  403387:	3a 20 43 
  40338a:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  403391:	20 75 6e 
  403394:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403398:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40339c:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4033a3:	74 6f 20 
  4033a6:	48 ba 77 72 69 74 65 	movabs $0x6f74206574697277,%rdx
  4033ad:	20 74 6f 
  4033b0:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4033b4:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  4033b8:	48 b8 20 74 68 65 20 	movabs $0x7475412065687420,%rax
  4033bf:	41 75 74 
  4033c2:	48 ba 6f 6c 61 62 20 	movabs $0x7265732062616c6f,%rdx
  4033c9:	73 65 72 
  4033cc:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4033d0:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  4033d4:	c7 45 30 76 65 72 00 	movl   $0x726576,0x30(%rbp)
  4033db:	89 df                	mov    %ebx,%edi
  4033dd:	e8 1e df ff ff       	call   401300 <close@plt>
  4033e2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4033e7:	e9 43 fd ff ff       	jmp    40312f <submitr+0x2fd>
  4033ec:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4033f3:	3a 20 43 
  4033f6:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  4033fd:	20 75 6e 
  403400:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403404:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403408:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40340f:	74 6f 20 
  403412:	48 ba 72 65 61 64 20 	movabs $0x7269662064616572,%rdx
  403419:	66 69 72 
  40341c:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403420:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403424:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
  40342b:	61 64 65 
  40342e:	48 ba 72 20 66 72 6f 	movabs $0x41206d6f72662072,%rdx
  403435:	6d 20 41 
  403438:	48 89 45 20          	mov    %rax,0x20(%rbp)
  40343c:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  403440:	48 b8 75 74 6f 6c 61 	movabs $0x732062616c6f7475,%rax
  403447:	62 20 73 
  40344a:	48 89 45 30          	mov    %rax,0x30(%rbp)
  40344e:	c7 45 38 65 72 76 65 	movl   $0x65767265,0x38(%rbp)
  403455:	66 c7 45 3c 72 00    	movw   $0x72,0x3c(%rbp)
  40345b:	89 df                	mov    %ebx,%edi
  40345d:	e8 9e de ff ff       	call   401300 <close@plt>
  403462:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403467:	e9 c3 fc ff ff       	jmp    40312f <submitr+0x2fd>
  40346c:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  403473:	00 
  403474:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  403479:	ba 00 20 00 00       	mov    $0x2000,%edx
  40347e:	e8 fe f7 ff ff       	call   402c81 <rio_readlineb>
  403483:	48 85 c0             	test   %rax,%rax
  403486:	0f 8e 96 00 00 00    	jle    403522 <submitr+0x6f0>
  40348c:	44 8b 44 24 2c       	mov    0x2c(%rsp),%r8d
  403491:	41 81 f8 c8 00 00 00 	cmp    $0xc8,%r8d
  403498:	0f 85 05 01 00 00    	jne    4035a3 <submitr+0x771>
  40349e:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  4034a5:	00 
  4034a6:	48 89 ef             	mov    %rbp,%rdi
  4034a9:	e8 f2 dd ff ff       	call   4012a0 <strcpy@plt>
  4034ae:	89 df                	mov    %ebx,%edi
  4034b0:	e8 4b de ff ff       	call   401300 <close@plt>
  4034b5:	b9 04 00 00 00       	mov    $0x4,%ecx
  4034ba:	48 8d 3d 8c 13 00 00 	lea    0x138c(%rip),%rdi        # 40484d <trans_char+0xdd>
  4034c1:	48 89 ee             	mov    %rbp,%rsi
  4034c4:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  4034c6:	0f 97 c0             	seta   %al
  4034c9:	1c 00                	sbb    $0x0,%al
  4034cb:	0f be c0             	movsbl %al,%eax
  4034ce:	85 c0                	test   %eax,%eax
  4034d0:	0f 84 59 fc ff ff    	je     40312f <submitr+0x2fd>
  4034d6:	b9 05 00 00 00       	mov    $0x5,%ecx
  4034db:	48 8d 3d 6f 13 00 00 	lea    0x136f(%rip),%rdi        # 404851 <trans_char+0xe1>
  4034e2:	48 89 ee             	mov    %rbp,%rsi
  4034e5:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  4034e7:	0f 97 c0             	seta   %al
  4034ea:	1c 00                	sbb    $0x0,%al
  4034ec:	0f be c0             	movsbl %al,%eax
  4034ef:	85 c0                	test   %eax,%eax
  4034f1:	0f 84 38 fc ff ff    	je     40312f <submitr+0x2fd>
  4034f7:	b9 03 00 00 00       	mov    $0x3,%ecx
  4034fc:	48 8d 3d 53 13 00 00 	lea    0x1353(%rip),%rdi        # 404856 <trans_char+0xe6>
  403503:	48 89 ee             	mov    %rbp,%rsi
  403506:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  403508:	0f 97 c0             	seta   %al
  40350b:	1c 00                	sbb    $0x0,%al
  40350d:	0f be c0             	movsbl %al,%eax
  403510:	85 c0                	test   %eax,%eax
  403512:	0f 84 17 fc ff ff    	je     40312f <submitr+0x2fd>
  403518:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40351d:	e9 0d fc ff ff       	jmp    40312f <submitr+0x2fd>
  403522:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  403529:	3a 20 43 
  40352c:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  403533:	20 75 6e 
  403536:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40353a:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40353e:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  403545:	74 6f 20 
  403548:	48 ba 72 65 61 64 20 	movabs $0x6174732064616572,%rdx
  40354f:	73 74 61 
  403552:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403556:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  40355a:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
  403561:	65 73 73 
  403564:	48 ba 61 67 65 20 66 	movabs $0x6d6f726620656761,%rdx
  40356b:	72 6f 6d 
  40356e:	48 89 45 20          	mov    %rax,0x20(%rbp)
  403572:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  403576:	48 b8 20 41 75 74 6f 	movabs $0x62616c6f74754120,%rax
  40357d:	6c 61 62 
  403580:	48 ba 20 73 65 72 76 	movabs $0x72657672657320,%rdx
  403587:	65 72 00 
  40358a:	48 89 45 30          	mov    %rax,0x30(%rbp)
  40358e:	48 89 55 38          	mov    %rdx,0x38(%rbp)
  403592:	89 df                	mov    %ebx,%edi
  403594:	e8 67 dd ff ff       	call   401300 <close@plt>
  403599:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40359e:	e9 8c fb ff ff       	jmp    40312f <submitr+0x2fd>
  4035a3:	4c 8d 8c 24 50 80 00 	lea    0x8050(%rsp),%r9
  4035aa:	00 
  4035ab:	48 8d 0d 56 12 00 00 	lea    0x1256(%rip),%rcx        # 404808 <trans_char+0x98>
  4035b2:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  4035b9:	be 01 00 00 00       	mov    $0x1,%esi
  4035be:	48 89 ef             	mov    %rbp,%rdi
  4035c1:	b8 00 00 00 00       	mov    $0x0,%eax
  4035c6:	e8 85 de ff ff       	call   401450 <__sprintf_chk@plt>
  4035cb:	89 df                	mov    %ebx,%edi
  4035cd:	e8 2e dd ff ff       	call   401300 <close@plt>
  4035d2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4035d7:	e9 53 fb ff ff       	jmp    40312f <submitr+0x2fd>
  4035dc:	e8 47 f3 ff ff       	call   402928 <__stack_chk_fail>

00000000004035e1 <init_timeout>:
  4035e1:	f3 0f 1e fa          	endbr64 
  4035e5:	85 ff                	test   %edi,%edi
  4035e7:	74 26                	je     40360f <init_timeout+0x2e>
  4035e9:	53                   	push   %rbx
  4035ea:	89 fb                	mov    %edi,%ebx
  4035ec:	78 1a                	js     403608 <init_timeout+0x27>
  4035ee:	48 8d 35 71 f5 ff ff 	lea    -0xa8f(%rip),%rsi        # 402b66 <sigalrm_handler>
  4035f5:	bf 0e 00 00 00       	mov    $0xe,%edi
  4035fa:	e8 31 dd ff ff       	call   401330 <signal@plt>
  4035ff:	89 df                	mov    %ebx,%edi
  403601:	e8 ea dc ff ff       	call   4012f0 <alarm@plt>
  403606:	5b                   	pop    %rbx
  403607:	c3                   	ret    
  403608:	bb 00 00 00 00       	mov    $0x0,%ebx
  40360d:	eb df                	jmp    4035ee <init_timeout+0xd>
  40360f:	c3                   	ret    

0000000000403610 <init_driver>:
  403610:	f3 0f 1e fa          	endbr64 
  403614:	41 54                	push   %r12
  403616:	55                   	push   %rbp
  403617:	53                   	push   %rbx
  403618:	48 83 ec 20          	sub    $0x20,%rsp
  40361c:	48 89 fd             	mov    %rdi,%rbp
  40361f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  403626:	00 00 
  403628:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
  40362d:	31 c0                	xor    %eax,%eax
  40362f:	be 01 00 00 00       	mov    $0x1,%esi
  403634:	bf 0d 00 00 00       	mov    $0xd,%edi
  403639:	e8 f2 dc ff ff       	call   401330 <signal@plt>
  40363e:	be 01 00 00 00       	mov    $0x1,%esi
  403643:	bf 1d 00 00 00       	mov    $0x1d,%edi
  403648:	e8 e3 dc ff ff       	call   401330 <signal@plt>
  40364d:	be 01 00 00 00       	mov    $0x1,%esi
  403652:	bf 1d 00 00 00       	mov    $0x1d,%edi
  403657:	e8 d4 dc ff ff       	call   401330 <signal@plt>
  40365c:	ba 00 00 00 00       	mov    $0x0,%edx
  403661:	be 01 00 00 00       	mov    $0x1,%esi
  403666:	bf 02 00 00 00       	mov    $0x2,%edi
  40366b:	e8 f0 dd ff ff       	call   401460 <socket@plt>
  403670:	85 c0                	test   %eax,%eax
  403672:	0f 88 9c 00 00 00    	js     403714 <init_driver+0x104>
  403678:	89 c3                	mov    %eax,%ebx
  40367a:	48 8d 3d d8 11 00 00 	lea    0x11d8(%rip),%rdi        # 404859 <trans_char+0xe9>
  403681:	e8 ba dc ff ff       	call   401340 <gethostbyname@plt>
  403686:	48 85 c0             	test   %rax,%rax
  403689:	0f 84 d1 00 00 00    	je     403760 <init_driver+0x150>
  40368f:	49 89 e4             	mov    %rsp,%r12
  403692:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  403699:	00 
  40369a:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
  4036a1:	00 00 
  4036a3:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
  4036a9:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4036ad:	48 8b 40 18          	mov    0x18(%rax),%rax
  4036b1:	48 8b 30             	mov    (%rax),%rsi
  4036b4:	48 8d 7c 24 04       	lea    0x4(%rsp),%rdi
  4036b9:	b9 0c 00 00 00       	mov    $0xc,%ecx
  4036be:	e8 8d dc ff ff       	call   401350 <__memmove_chk@plt>
  4036c3:	66 c7 44 24 02 30 39 	movw   $0x3930,0x2(%rsp)
  4036ca:	ba 10 00 00 00       	mov    $0x10,%edx
  4036cf:	4c 89 e6             	mov    %r12,%rsi
  4036d2:	89 df                	mov    %ebx,%edi
  4036d4:	e8 47 dd ff ff       	call   401420 <connect@plt>
  4036d9:	85 c0                	test   %eax,%eax
  4036db:	0f 88 e7 00 00 00    	js     4037c8 <init_driver+0x1b8>
  4036e1:	89 df                	mov    %ebx,%edi
  4036e3:	e8 18 dc ff ff       	call   401300 <close@plt>
  4036e8:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
  4036ee:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
  4036f2:	b8 00 00 00 00       	mov    $0x0,%eax
  4036f7:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
  4036fc:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  403703:	00 00 
  403705:	0f 85 10 01 00 00    	jne    40381b <init_driver+0x20b>
  40370b:	48 83 c4 20          	add    $0x20,%rsp
  40370f:	5b                   	pop    %rbx
  403710:	5d                   	pop    %rbp
  403711:	41 5c                	pop    %r12
  403713:	c3                   	ret    
  403714:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40371b:	3a 20 43 
  40371e:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  403725:	20 75 6e 
  403728:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40372c:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403730:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  403737:	74 6f 20 
  40373a:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
  403741:	65 20 73 
  403744:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403748:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  40374c:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  403753:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  403759:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40375e:	eb 97                	jmp    4036f7 <init_driver+0xe7>
  403760:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  403767:	3a 20 44 
  40376a:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
  403771:	20 75 6e 
  403774:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403778:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40377c:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  403783:	74 6f 20 
  403786:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
  40378d:	76 65 20 
  403790:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403794:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403798:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  40379f:	72 20 61 
  4037a2:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4037a6:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
  4037ad:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
  4037b3:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  4037b7:	89 df                	mov    %ebx,%edi
  4037b9:	e8 42 db ff ff       	call   401300 <close@plt>
  4037be:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4037c3:	e9 2f ff ff ff       	jmp    4036f7 <init_driver+0xe7>
  4037c8:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  4037cf:	3a 20 55 
  4037d2:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
  4037d9:	20 74 6f 
  4037dc:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4037e0:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  4037e4:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  4037eb:	65 63 74 
  4037ee:	48 ba 20 74 6f 20 73 	movabs $0x76726573206f7420,%rdx
  4037f5:	65 72 76 
  4037f8:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4037fc:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403800:	66 c7 45 20 65 72    	movw   $0x7265,0x20(%rbp)
  403806:	c6 45 22 00          	movb   $0x0,0x22(%rbp)
  40380a:	89 df                	mov    %ebx,%edi
  40380c:	e8 ef da ff ff       	call   401300 <close@plt>
  403811:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403816:	e9 dc fe ff ff       	jmp    4036f7 <init_driver+0xe7>
  40381b:	e8 08 f1 ff ff       	call   402928 <__stack_chk_fail>

0000000000403820 <driver_post>:
  403820:	f3 0f 1e fa          	endbr64 
  403824:	53                   	push   %rbx
  403825:	4c 89 cb             	mov    %r9,%rbx
  403828:	45 85 c0             	test   %r8d,%r8d
  40382b:	75 18                	jne    403845 <driver_post+0x25>
  40382d:	48 85 ff             	test   %rdi,%rdi
  403830:	74 05                	je     403837 <driver_post+0x17>
  403832:	80 3f 00             	cmpb   $0x0,(%rdi)
  403835:	75 37                	jne    40386e <driver_post+0x4e>
  403837:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  40383c:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  403840:	44 89 c0             	mov    %r8d,%eax
  403843:	5b                   	pop    %rbx
  403844:	c3                   	ret    
  403845:	48 89 ca             	mov    %rcx,%rdx
  403848:	48 8d 35 1a 10 00 00 	lea    0x101a(%rip),%rsi        # 404869 <trans_char+0xf9>
  40384f:	bf 01 00 00 00       	mov    $0x1,%edi
  403854:	b8 00 00 00 00       	mov    $0x0,%eax
  403859:	e8 62 db ff ff       	call   4013c0 <__printf_chk@plt>
  40385e:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  403863:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  403867:	b8 00 00 00 00       	mov    $0x0,%eax
  40386c:	eb d5                	jmp    403843 <driver_post+0x23>
  40386e:	48 83 ec 08          	sub    $0x8,%rsp
  403872:	41 51                	push   %r9
  403874:	49 89 c9             	mov    %rcx,%r9
  403877:	49 89 d0             	mov    %rdx,%r8
  40387a:	48 89 f9             	mov    %rdi,%rcx
  40387d:	48 89 f2             	mov    %rsi,%rdx
  403880:	be 39 30 00 00       	mov    $0x3039,%esi
  403885:	48 8d 3d cd 0f 00 00 	lea    0xfcd(%rip),%rdi        # 404859 <trans_char+0xe9>
  40388c:	e8 a1 f5 ff ff       	call   402e32 <submitr>
  403891:	48 83 c4 10          	add    $0x10,%rsp
  403895:	eb ac                	jmp    403843 <driver_post+0x23>

0000000000403897 <check>:
  403897:	f3 0f 1e fa          	endbr64 
  40389b:	89 f8                	mov    %edi,%eax
  40389d:	c1 e8 1c             	shr    $0x1c,%eax
  4038a0:	74 1d                	je     4038bf <check+0x28>
  4038a2:	b9 00 00 00 00       	mov    $0x0,%ecx
  4038a7:	83 f9 1f             	cmp    $0x1f,%ecx
  4038aa:	7f 0d                	jg     4038b9 <check+0x22>
  4038ac:	89 f8                	mov    %edi,%eax
  4038ae:	d3 e8                	shr    %cl,%eax
  4038b0:	3c 0a                	cmp    $0xa,%al
  4038b2:	74 11                	je     4038c5 <check+0x2e>
  4038b4:	83 c1 08             	add    $0x8,%ecx
  4038b7:	eb ee                	jmp    4038a7 <check+0x10>
  4038b9:	b8 01 00 00 00       	mov    $0x1,%eax
  4038be:	c3                   	ret    
  4038bf:	b8 00 00 00 00       	mov    $0x0,%eax
  4038c4:	c3                   	ret    
  4038c5:	b8 00 00 00 00       	mov    $0x0,%eax
  4038ca:	c3                   	ret    

00000000004038cb <gencookie>:
  4038cb:	f3 0f 1e fa          	endbr64 
  4038cf:	53                   	push   %rbx
  4038d0:	83 c7 01             	add    $0x1,%edi
  4038d3:	e8 98 d9 ff ff       	call   401270 <srandom@plt>
  4038d8:	e8 b3 da ff ff       	call   401390 <random@plt>
  4038dd:	48 89 c7             	mov    %rax,%rdi
  4038e0:	89 c3                	mov    %eax,%ebx
  4038e2:	e8 b0 ff ff ff       	call   403897 <check>
  4038e7:	85 c0                	test   %eax,%eax
  4038e9:	74 ed                	je     4038d8 <gencookie+0xd>
  4038eb:	89 d8                	mov    %ebx,%eax
  4038ed:	5b                   	pop    %rbx
  4038ee:	c3                   	ret    
  4038ef:	90                   	nop

00000000004038f0 <__libc_csu_init>:
  4038f0:	f3 0f 1e fa          	endbr64 
  4038f4:	41 57                	push   %r15
  4038f6:	4c 8d 3d 13 35 00 00 	lea    0x3513(%rip),%r15        # 406e10 <__frame_dummy_init_array_entry>
  4038fd:	41 56                	push   %r14
  4038ff:	49 89 d6             	mov    %rdx,%r14
  403902:	41 55                	push   %r13
  403904:	49 89 f5             	mov    %rsi,%r13
  403907:	41 54                	push   %r12
  403909:	41 89 fc             	mov    %edi,%r12d
  40390c:	55                   	push   %rbp
  40390d:	48 8d 2d 04 35 00 00 	lea    0x3504(%rip),%rbp        # 406e18 <__do_global_dtors_aux_fini_array_entry>
  403914:	53                   	push   %rbx
  403915:	4c 29 fd             	sub    %r15,%rbp
  403918:	48 83 ec 08          	sub    $0x8,%rsp
  40391c:	e8 df d6 ff ff       	call   401000 <_init>
  403921:	48 c1 fd 03          	sar    $0x3,%rbp
  403925:	74 1f                	je     403946 <__libc_csu_init+0x56>
  403927:	31 db                	xor    %ebx,%ebx
  403929:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
  403930:	4c 89 f2             	mov    %r14,%rdx
  403933:	4c 89 ee             	mov    %r13,%rsi
  403936:	44 89 e7             	mov    %r12d,%edi
  403939:	41 ff 14 df          	call   *(%r15,%rbx,8)
  40393d:	48 83 c3 01          	add    $0x1,%rbx
  403941:	48 39 dd             	cmp    %rbx,%rbp
  403944:	75 ea                	jne    403930 <__libc_csu_init+0x40>
  403946:	48 83 c4 08          	add    $0x8,%rsp
  40394a:	5b                   	pop    %rbx
  40394b:	5d                   	pop    %rbp
  40394c:	41 5c                	pop    %r12
  40394e:	41 5d                	pop    %r13
  403950:	41 5e                	pop    %r14
  403952:	41 5f                	pop    %r15
  403954:	c3                   	ret    
  403955:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
  40395c:	00 00 00 00 

0000000000403960 <__libc_csu_fini>:
  403960:	f3 0f 1e fa          	endbr64 
  403964:	c3                   	ret    

Disassembly of section .fini:

0000000000403968 <_fini>:
  403968:	f3 0f 1e fa          	endbr64 
  40396c:	48 83 ec 08          	sub    $0x8,%rsp
  403970:	48 83 c4 08          	add    $0x8,%rsp
  403974:	c3                   	ret    
