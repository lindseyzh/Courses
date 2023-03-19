
ctarget:     file format elf64-x86-64


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
  401483:	49 c7 c0 90 37 40 00 	mov    $0x403790,%r8
  40148a:	48 c7 c1 20 37 40 00 	mov    $0x403720,%rcx
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
  401636:	e8 bb 20 00 00       	call   4036f6 <gencookie>
  40163b:	89 c7                	mov    %eax,%edi
  40163d:	89 05 e1 5e 00 00    	mov    %eax,0x5ee1(%rip)        # 407524 <cookie>
  401643:	e8 ae 20 00 00       	call   4036f6 <gencookie>
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
  401689:	c6 05 b8 6a 00 00 63 	movb   $0x63,0x6ab8(%rip)        # 408148 <target_prefix>
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
  40173c:	e8 fa 1c 00 00       	call   40343b <init_driver>
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
  401794:	e8 ba 0f 00 00       	call   402753 <__stack_chk_fail>

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
  4017e0:	48 c7 c6 42 26 40 00 	mov    $0x402642,%rsi
  4017e7:	bf 0b 00 00 00       	mov    $0xb,%edi
  4017ec:	e8 3f fb ff ff       	call   401330 <signal@plt>
  4017f1:	48 c7 c6 e8 25 40 00 	mov    $0x4025e8,%rsi
  4017f8:	bf 07 00 00 00       	mov    $0x7,%edi
  4017fd:	e8 2e fb ff ff       	call   401330 <signal@plt>
  401802:	48 c7 c6 9c 26 40 00 	mov    $0x40269c,%rsi
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
  401842:	48 c7 c6 f6 26 40 00 	mov    $0x4026f6,%rsi
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
  40195b:	be 00 00 00 00       	mov    $0x0,%esi
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
  4019ab:	e8 81 08 00 00       	call   402231 <check_fail>
  4019b0:	8b 15 6e 5b 00 00    	mov    0x5b6e(%rip),%edx        # 407524 <cookie>
  4019b6:	48 8d 35 bf 28 00 00 	lea    0x28bf(%rip),%rsi        # 40427c <_IO_stdin_used+0x27c>
  4019bd:	bf 01 00 00 00       	mov    $0x1,%edi
  4019c2:	b8 00 00 00 00       	mov    $0x0,%eax
  4019c7:	e8 f4 f9 ff ff       	call   4013c0 <__printf_chk@plt>
  4019cc:	be 00 00 00 00       	mov    $0x0,%esi
  4019d1:	48 8b 3d d0 5a 00 00 	mov    0x5ad0(%rip),%rdi        # 4074a8 <buf_offset>
  4019d8:	e8 dc 0e 00 00       	call   4028b9 <stable_launch>
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
  4019ff:	e8 4f 0d 00 00       	call   402753 <__stack_chk_fail>

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
  401ec6:	e8 88 08 00 00       	call   402753 <__stack_chk_fail>

0000000000401ecb <getbuf>:
  401ecb:	f3 0f 1e fa          	endbr64 
  401ecf:	48 83 ec 38          	sub    $0x38,%rsp
  401ed3:	48 89 e7             	mov    %rsp,%rdi
  401ed6:	e8 94 03 00 00       	call   40226f <Gets>
  401edb:	b8 01 00 00 00       	mov    $0x1,%eax ;b *getbuf+16
  401ee0:	48 83 c4 38          	add    $0x38,%rsp
  401ee4:	c3                   	ret    

0000000000401ee5 <getbuf_withcanary>:
  401ee5:	f3 0f 1e fa          	endbr64 
  401ee9:	55                   	push   %rbp
  401eea:	48 89 e5             	mov    %rsp,%rbp
  401eed:	48 81 ec 90 01 00 00 	sub    $0x190,%rsp
  401ef4:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401efb:	00 00 
  401efd:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  401f01:	31 c0                	xor    %eax,%eax
  401f03:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%rbp)
  401f0a:	00 00 00 
  401f0d:	8b 85 74 ff ff ff    	mov    -0x8c(%rbp),%eax
  401f13:	89 85 70 ff ff ff    	mov    %eax,-0x90(%rbp)
  401f19:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  401f20:	48 89 c7             	mov    %rax,%rdi
  401f23:	e8 47 03 00 00       	call   40226f <Gets>
  401f28:	8b 85 70 ff ff ff    	mov    -0x90(%rbp),%eax
  401f2e:	48 63 d0             	movslq %eax,%rdx
  401f31:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  401f38:	48 8d 88 08 01 00 00 	lea    0x108(%rax),%rcx
  401f3f:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  401f46:	48 89 ce             	mov    %rcx,%rsi
  401f49:	48 89 c7             	mov    %rax,%rdi
  401f4c:	e8 1f f4 ff ff       	call   401370 <memcpy@plt>
  401f51:	8b 85 74 ff ff ff    	mov    -0x8c(%rbp),%eax
  401f57:	48 63 d0             	movslq %eax,%rdx
  401f5a:	48 8d 85 70 fe ff ff 	lea    -0x190(%rbp),%rax
  401f61:	48 8d 8d 70 fe ff ff 	lea    -0x190(%rbp),%rcx
  401f68:	48 81 c1 08 01 00 00 	add    $0x108,%rcx
  401f6f:	48 89 c6             	mov    %rax,%rsi
  401f72:	48 89 cf             	mov    %rcx,%rdi
  401f75:	e8 f6 f3 ff ff       	call   401370 <memcpy@plt>
  401f7a:	b8 01 00 00 00       	mov    $0x1,%eax
  401f7f:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  401f83:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  401f8a:	00 00 
  401f8c:	74 05                	je     401f93 <getbuf_withcanary+0xae>
  401f8e:	e8 c0 07 00 00       	call   402753 <__stack_chk_fail>
  401f93:	c9                   	leave  
  401f94:	c3                   	ret    

0000000000401f95 <touch1>:
  401f95:	f3 0f 1e fa          	endbr64 
  401f99:	50                   	push   %rax
  401f9a:	58                   	pop    %rax
  401f9b:	48 83 ec 08          	sub    $0x8,%rsp
  401f9f:	c7 05 73 55 00 00 01 	movl   $0x1,0x5573(%rip)        # 40751c <vlevel>
  401fa6:	00 00 00 
  401fa9:	48 8d 3d 66 23 00 00 	lea    0x2366(%rip),%rdi        # 404316 <_IO_stdin_used+0x316>
  401fb0:	e8 fb f2 ff ff       	call   4012b0 <puts@plt>
  401fb5:	bf 01 00 00 00       	mov    $0x1,%edi
  401fba:	e8 22 05 00 00       	call   4024e1 <validate>
  401fbf:	bf 00 00 00 00       	mov    $0x0,%edi
  401fc4:	e8 47 f4 ff ff       	call   401410 <exit@plt>

0000000000401fc9 <touch2>:
  401fc9:	f3 0f 1e fa          	endbr64 
  401fcd:	50                   	push   %rax
  401fce:	58                   	pop    %rax
  401fcf:	48 83 ec 08          	sub    $0x8,%rsp
  401fd3:	89 fa                	mov    %edi,%edx
  401fd5:	c7 05 3d 55 00 00 02 	movl   $0x2,0x553d(%rip)        # 40751c <vlevel>
  401fdc:	00 00 00 
  401fdf:	39 3d 3f 55 00 00    	cmp    %edi,0x553f(%rip)        # 407524 <cookie>
  401fe5:	74 2a                	je     402011 <touch2+0x48>
  401fe7:	48 8d 35 72 23 00 00 	lea    0x2372(%rip),%rsi        # 404360 <_IO_stdin_used+0x360>
  401fee:	bf 01 00 00 00       	mov    $0x1,%edi
  401ff3:	b8 00 00 00 00       	mov    $0x0,%eax
  401ff8:	e8 c3 f3 ff ff       	call   4013c0 <__printf_chk@plt>
  401ffd:	bf 02 00 00 00       	mov    $0x2,%edi
  402002:	e8 b5 05 00 00       	call   4025bc <fail>
  402007:	bf 00 00 00 00       	mov    $0x0,%edi
  40200c:	e8 ff f3 ff ff       	call   401410 <exit@plt>
  402011:	48 8d 35 20 23 00 00 	lea    0x2320(%rip),%rsi        # 404338 <_IO_stdin_used+0x338>
  402018:	bf 01 00 00 00       	mov    $0x1,%edi
  40201d:	b8 00 00 00 00       	mov    $0x0,%eax
  402022:	e8 99 f3 ff ff       	call   4013c0 <__printf_chk@plt>
  402027:	bf 02 00 00 00       	mov    $0x2,%edi
  40202c:	e8 b0 04 00 00       	call   4024e1 <validate>
  402031:	eb d4                	jmp    402007 <touch2+0x3e>

0000000000402033 <hexmatch>:
  402033:	f3 0f 1e fa          	endbr64 
  402037:	41 55                	push   %r13
  402039:	41 54                	push   %r12
  40203b:	55                   	push   %rbp
  40203c:	53                   	push   %rbx
  40203d:	48 81 ec 88 00 00 00 	sub    $0x88,%rsp ;0x88=17*8
  402044:	89 fd                	mov    %edi,%ebp
  402046:	48 89 f3             	mov    %rsi,%rbx
  402049:	41 bc 28 00 00 00    	mov    $0x28,%r12d
  40204f:	64 49 8b 04 24       	mov    %fs:(%r12),%rax
  402054:	48 89 44 24 78       	mov    %rax,0x78(%rsp)
  402059:	31 c0                	xor    %eax,%eax
  40205b:	e8 30 f3 ff ff       	call   401390 <random@plt> ;no impact on the stack
  402060:	48 89 c1             	mov    %rax,%rcx
  402063:	48 ba 0b d7 a3 70 3d 	movabs $0xa3d70a3d70a3d70b,%rdx
  40206a:	0a d7 a3 
  40206d:	48 f7 ea             	imul   %rdx
  402070:	48 01 ca             	add    %rcx,%rdx
  402073:	48 c1 fa 06          	sar    $0x6,%rdx
  402077:	48 89 c8             	mov    %rcx,%rax
  40207a:	48 c1 f8 3f          	sar    $0x3f,%rax
  40207e:	48 29 c2             	sub    %rax,%rdx
  402081:	48 8d 04 92          	lea    (%rdx,%rdx,4),%rax
  402085:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  402089:	48 c1 e0 02          	shl    $0x2,%rax
  40208d:	48 29 c1             	sub    %rax,%rcx
  402090:	4c 8d 2c 0c          	lea    (%rsp,%rcx,1),%r13
  402094:	41 89 e8             	mov    %ebp,%r8d
  402097:	48 8d 0d 95 22 00 00 	lea    0x2295(%rip),%rcx        # 404333 <_IO_stdin_used+0x333>
  40209e:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  4020a5:	be 01 00 00 00       	mov    $0x1,%esi
  4020aa:	4c 89 ef             	mov    %r13,%rdi
  4020ad:	b8 00 00 00 00       	mov    $0x0,%eax
  4020b2:	e8 99 f3 ff ff       	call   401450 <__sprintf_chk@plt>
  4020b7:	ba 09 00 00 00       	mov    $0x9,%edx
  4020bc:	4c 89 ee             	mov    %r13,%rsi
  4020bf:	48 89 df             	mov    %rbx,%rdi
  4020c2:	e8 c9 f1 ff ff       	call   401290 <strncmp@plt> ;no impact on the stack
  4020c7:	85 c0                	test   %eax,%eax
  4020c9:	0f 94 c0             	sete   %al
  4020cc:	48 8b 5c 24 78       	mov    0x78(%rsp),%rbx
  4020d1:	64 49 33 1c 24       	xor    %fs:(%r12),%rbx
  4020d6:	75 11                	jne    4020e9 <hexmatch+0xb6>
  4020d8:	0f b6 c0             	movzbl %al,%eax
  4020db:	48 81 c4 88 00 00 00 	add    $0x88,%rsp
  4020e2:	5b                   	pop    %rbx
  4020e3:	5d                   	pop    %rbp
  4020e4:	41 5c                	pop    %r12
  4020e6:	41 5d                	pop    %r13
  4020e8:	c3                   	ret    
  4020e9:	e8 65 06 00 00       	call   402753 <__stack_chk_fail>

00000000004020ee <touch3>:
  4020ee:	f3 0f 1e fa          	endbr64 
  4020f2:	53                   	push   %rbx
  4020f3:	48 89 fb             	mov    %rdi,%rbx
  4020f6:	c7 05 1c 54 00 00 03 	movl   $0x3,0x541c(%rip)        # 40751c <vlevel>
  4020fd:	00 00 00 
  402100:	48 89 fe             	mov    %rdi,%rsi
  402103:	8b 3d 1b 54 00 00    	mov    0x541b(%rip),%edi        # 407524 <cookie>
  402109:	e8 25 ff ff ff       	call   402033 <hexmatch>
  40210e:	85 c0                	test   %eax,%eax
  402110:	74 2d                	je     40213f <touch3+0x51>
  402112:	48 89 da             	mov    %rbx,%rdx
  402115:	48 8d 35 6c 22 00 00 	lea    0x226c(%rip),%rsi        # 404388 <_IO_stdin_used+0x388>
  40211c:	bf 01 00 00 00       	mov    $0x1,%edi
  402121:	b8 00 00 00 00       	mov    $0x0,%eax
  402126:	e8 95 f2 ff ff       	call   4013c0 <__printf_chk@plt>
  40212b:	bf 03 00 00 00       	mov    $0x3,%edi
  402130:	e8 ac 03 00 00       	call   4024e1 <validate>
  402135:	bf 00 00 00 00       	mov    $0x0,%edi
  40213a:	e8 d1 f2 ff ff       	call   401410 <exit@plt>
  40213f:	48 89 da             	mov    %rbx,%rdx
  402142:	48 8d 35 67 22 00 00 	lea    0x2267(%rip),%rsi        # 4043b0 <_IO_stdin_used+0x3b0>
  402149:	bf 01 00 00 00       	mov    $0x1,%edi
  40214e:	b8 00 00 00 00       	mov    $0x0,%eax
  402153:	e8 68 f2 ff ff       	call   4013c0 <__printf_chk@plt>
  402158:	bf 03 00 00 00       	mov    $0x3,%edi
  40215d:	e8 5a 04 00 00       	call   4025bc <fail>
  402162:	eb d1                	jmp    402135 <touch3+0x47>

0000000000402164 <test>:
  402164:	f3 0f 1e fa          	endbr64 
  402168:	48 83 ec 08          	sub    $0x8,%rsp
  40216c:	b8 00 00 00 00       	mov    $0x0,%eax
  402171:	e8 55 fd ff ff       	call   401ecb <getbuf>
  402176:	89 c2                	mov    %eax,%edx
  402178:	48 8d 35 59 22 00 00 	lea    0x2259(%rip),%rsi        # 4043d8 <_IO_stdin_used+0x3d8>
  40217f:	bf 01 00 00 00       	mov    $0x1,%edi
  402184:	b8 00 00 00 00       	mov    $0x0,%eax
  402189:	e8 32 f2 ff ff       	call   4013c0 <__printf_chk@plt>
  40218e:	48 83 c4 08          	add    $0x8,%rsp
  402192:	c3                   	ret    

0000000000402193 <test2>:
  402193:	f3 0f 1e fa          	endbr64 
  402197:	48 83 ec 08          	sub    $0x8,%rsp
  40219b:	b8 00 00 00 00       	mov    $0x0,%eax
  4021a0:	e8 40 fd ff ff       	call   401ee5 <getbuf_withcanary>
  4021a5:	89 c2                	mov    %eax,%edx
  4021a7:	48 8d 35 52 22 00 00 	lea    0x2252(%rip),%rsi        # 404400 <_IO_stdin_used+0x400>
  4021ae:	bf 01 00 00 00       	mov    $0x1,%edi
  4021b3:	b8 00 00 00 00       	mov    $0x0,%eax
  4021b8:	e8 03 f2 ff ff       	call   4013c0 <__printf_chk@plt>
  4021bd:	48 83 c4 08          	add    $0x8,%rsp
  4021c1:	c3                   	ret    

00000000004021c2 <save_char>:
  4021c2:	8b 05 7c 5f 00 00    	mov    0x5f7c(%rip),%eax        # 408144 <gets_cnt>
  4021c8:	3d ff 03 00 00       	cmp    $0x3ff,%eax
  4021cd:	7f 4a                	jg     402219 <save_char+0x57>
  4021cf:	89 f9                	mov    %edi,%ecx
  4021d1:	c0 e9 04             	shr    $0x4,%cl
  4021d4:	8d 14 40             	lea    (%rax,%rax,2),%edx
  4021d7:	4c 8d 05 92 25 00 00 	lea    0x2592(%rip),%r8        # 404770 <trans_char>
  4021de:	83 e1 0f             	and    $0xf,%ecx
  4021e1:	45 0f b6 0c 08       	movzbl (%r8,%rcx,1),%r9d
  4021e6:	48 8d 0d 53 53 00 00 	lea    0x5353(%rip),%rcx        # 407540 <gets_buf>
  4021ed:	48 63 f2             	movslq %edx,%rsi
  4021f0:	44 88 0c 31          	mov    %r9b,(%rcx,%rsi,1)
  4021f4:	8d 72 01             	lea    0x1(%rdx),%esi
  4021f7:	83 e7 0f             	and    $0xf,%edi
  4021fa:	41 0f b6 3c 38       	movzbl (%r8,%rdi,1),%edi
  4021ff:	48 63 f6             	movslq %esi,%rsi
  402202:	40 88 3c 31          	mov    %dil,(%rcx,%rsi,1)
  402206:	83 c2 02             	add    $0x2,%edx
  402209:	48 63 d2             	movslq %edx,%rdx
  40220c:	c6 04 11 20          	movb   $0x20,(%rcx,%rdx,1)
  402210:	83 c0 01             	add    $0x1,%eax
  402213:	89 05 2b 5f 00 00    	mov    %eax,0x5f2b(%rip)        # 408144 <gets_cnt>
  402219:	c3                   	ret    

000000000040221a <save_term>:
  40221a:	8b 05 24 5f 00 00    	mov    0x5f24(%rip),%eax        # 408144 <gets_cnt>
  402220:	8d 04 40             	lea    (%rax,%rax,2),%eax
  402223:	48 98                	cltq   
  402225:	48 8d 15 14 53 00 00 	lea    0x5314(%rip),%rdx        # 407540 <gets_buf>
  40222c:	c6 04 02 00          	movb   $0x0,(%rdx,%rax,1)
  402230:	c3                   	ret    

0000000000402231 <check_fail>:
  402231:	f3 0f 1e fa          	endbr64 
  402235:	50                   	push   %rax
  402236:	58                   	pop    %rax
  402237:	48 83 ec 08          	sub    $0x8,%rsp
  40223b:	0f be 15 06 5f 00 00 	movsbl 0x5f06(%rip),%edx        # 408148 <target_prefix>
  402242:	4c 8d 05 f7 52 00 00 	lea    0x52f7(%rip),%r8        # 407540 <gets_buf>
  402249:	8b 0d c9 52 00 00    	mov    0x52c9(%rip),%ecx        # 407518 <check_level>
  40224f:	48 8d 35 d8 21 00 00 	lea    0x21d8(%rip),%rsi        # 40442e <_IO_stdin_used+0x42e>
  402256:	bf 01 00 00 00       	mov    $0x1,%edi
  40225b:	b8 00 00 00 00       	mov    $0x0,%eax
  402260:	e8 5b f1 ff ff       	call   4013c0 <__printf_chk@plt>
  402265:	bf 01 00 00 00       	mov    $0x1,%edi
  40226a:	e8 a1 f1 ff ff       	call   401410 <exit@plt>

000000000040226f <Gets>:
  40226f:	f3 0f 1e fa          	endbr64 
  402273:	41 54                	push   %r12
  402275:	55                   	push   %rbp
  402276:	53                   	push   %rbx
  402277:	49 89 fc             	mov    %rdi,%r12
  40227a:	c7 05 c0 5e 00 00 00 	movl   $0x0,0x5ec0(%rip)        # 408144 <gets_cnt>
  402281:	00 00 00 
  402284:	48 89 fb             	mov    %rdi,%rbx
  402287:	48 8b 3d 82 52 00 00 	mov    0x5282(%rip),%rdi        # 407510 <infile>
  40228e:	e8 ad f1 ff ff       	call   401440 <getc@plt>
  402293:	83 f8 ff             	cmp    $0xffffffff,%eax
  402296:	74 18                	je     4022b0 <Gets+0x41>
  402298:	83 f8 0a             	cmp    $0xa,%eax
  40229b:	74 13                	je     4022b0 <Gets+0x41>
  40229d:	48 8d 6b 01          	lea    0x1(%rbx),%rbp
  4022a1:	88 03                	mov    %al,(%rbx)
  4022a3:	0f b6 f8             	movzbl %al,%edi
  4022a6:	e8 17 ff ff ff       	call   4021c2 <save_char>
  4022ab:	48 89 eb             	mov    %rbp,%rbx
  4022ae:	eb d7                	jmp    402287 <Gets+0x18>
  4022b0:	c6 03 00             	movb   $0x0,(%rbx)
  4022b3:	b8 00 00 00 00       	mov    $0x0,%eax
  4022b8:	e8 5d ff ff ff       	call   40221a <save_term>
  4022bd:	4c 89 e0             	mov    %r12,%rax
  4022c0:	5b                   	pop    %rbx
  4022c1:	5d                   	pop    %rbp
  4022c2:	41 5c                	pop    %r12
  4022c4:	c3                   	ret    

00000000004022c5 <notify_server>:
  4022c5:	f3 0f 1e fa          	endbr64 
  4022c9:	55                   	push   %rbp
  4022ca:	53                   	push   %rbx
  4022cb:	4c 8d 9c 24 00 c0 ff 	lea    -0x4000(%rsp),%r11
  4022d2:	ff 
  4022d3:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  4022da:	48 83 0c 24 00       	orq    $0x0,(%rsp)
  4022df:	4c 39 dc             	cmp    %r11,%rsp
  4022e2:	75 ef                	jne    4022d3 <notify_server+0xe>
  4022e4:	48 83 ec 18          	sub    $0x18,%rsp
  4022e8:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4022ef:	00 00 
  4022f1:	48 89 84 24 08 40 00 	mov    %rax,0x4008(%rsp)
  4022f8:	00 
  4022f9:	31 c0                	xor    %eax,%eax
  4022fb:	83 3d 26 52 00 00 00 	cmpl   $0x0,0x5226(%rip)        # 407528 <is_checker>
  402302:	0f 85 b7 01 00 00    	jne    4024bf <notify_server+0x1fa>
  402308:	89 fb                	mov    %edi,%ebx
  40230a:	81 3d 30 5e 00 00 9c 	cmpl   $0x1f9c,0x5e30(%rip)        # 408144 <gets_cnt>
  402311:	1f 00 00 
  402314:	7f 18                	jg     40232e <notify_server+0x69>
  402316:	0f be 05 2b 5e 00 00 	movsbl 0x5e2b(%rip),%eax        # 408148 <target_prefix>
  40231d:	83 3d 7c 51 00 00 00 	cmpl   $0x0,0x517c(%rip)        # 4074a0 <notify>
  402324:	74 23                	je     402349 <notify_server+0x84>
  402326:	8b 15 f4 51 00 00    	mov    0x51f4(%rip),%edx        # 407520 <authkey>
  40232c:	eb 20                	jmp    40234e <notify_server+0x89>
  40232e:	48 8d 35 23 22 00 00 	lea    0x2223(%rip),%rsi        # 404558 <_IO_stdin_used+0x558>
  402335:	bf 01 00 00 00       	mov    $0x1,%edi
  40233a:	e8 81 f0 ff ff       	call   4013c0 <__printf_chk@plt>
  40233f:	bf 01 00 00 00       	mov    $0x1,%edi
  402344:	e8 c7 f0 ff ff       	call   401410 <exit@plt>
  402349:	ba ff ff ff ff       	mov    $0xffffffff,%edx
  40234e:	85 db                	test   %ebx,%ebx
  402350:	0f 84 9b 00 00 00    	je     4023f1 <notify_server+0x12c>
  402356:	48 8d 2d ec 20 00 00 	lea    0x20ec(%rip),%rbp        # 404449 <_IO_stdin_used+0x449>
  40235d:	48 89 e7             	mov    %rsp,%rdi
  402360:	48 8d 0d d9 51 00 00 	lea    0x51d9(%rip),%rcx        # 407540 <gets_buf>
  402367:	51                   	push   %rcx
  402368:	56                   	push   %rsi
  402369:	50                   	push   %rax
  40236a:	52                   	push   %rdx
  40236b:	49 89 e9             	mov    %rbp,%r9
  40236e:	44 8b 05 db 4d 00 00 	mov    0x4ddb(%rip),%r8d        # 407150 <target_id>
  402375:	48 8d 0d d2 20 00 00 	lea    0x20d2(%rip),%rcx        # 40444e <_IO_stdin_used+0x44e>
  40237c:	ba 00 20 00 00       	mov    $0x2000,%edx
  402381:	be 01 00 00 00       	mov    $0x1,%esi
  402386:	b8 00 00 00 00       	mov    $0x0,%eax
  40238b:	e8 c0 f0 ff ff       	call   401450 <__sprintf_chk@plt>
  402390:	48 83 c4 20          	add    $0x20,%rsp
  402394:	83 3d 05 51 00 00 00 	cmpl   $0x0,0x5105(%rip)        # 4074a0 <notify>
  40239b:	0f 84 95 00 00 00    	je     402436 <notify_server+0x171>
  4023a1:	48 89 e1             	mov    %rsp,%rcx
  4023a4:	4c 8d 8c 24 00 20 00 	lea    0x2000(%rsp),%r9
  4023ab:	00 
  4023ac:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  4023b2:	48 8b 15 af 4d 00 00 	mov    0x4daf(%rip),%rdx        # 407168 <lab>
  4023b9:	48 8b 35 b0 4d 00 00 	mov    0x4db0(%rip),%rsi        # 407170 <course>
  4023c0:	48 8b 3d 99 4d 00 00 	mov    0x4d99(%rip),%rdi        # 407160 <user_id>
  4023c7:	e8 7f 12 00 00       	call   40364b <driver_post>
  4023cc:	85 c0                	test   %eax,%eax
  4023ce:	78 2d                	js     4023fd <notify_server+0x138>
  4023d0:	85 db                	test   %ebx,%ebx
  4023d2:	74 51                	je     402425 <notify_server+0x160>
  4023d4:	48 8d 3d ad 21 00 00 	lea    0x21ad(%rip),%rdi        # 404588 <_IO_stdin_used+0x588>
  4023db:	e8 d0 ee ff ff       	call   4012b0 <puts@plt>
  4023e0:	48 8d 3d 8f 20 00 00 	lea    0x208f(%rip),%rdi        # 404476 <_IO_stdin_used+0x476>
  4023e7:	e8 c4 ee ff ff       	call   4012b0 <puts@plt>
  4023ec:	e9 ce 00 00 00       	jmp    4024bf <notify_server+0x1fa>
  4023f1:	48 8d 2d 4c 20 00 00 	lea    0x204c(%rip),%rbp        # 404444 <_IO_stdin_used+0x444>
  4023f8:	e9 60 ff ff ff       	jmp    40235d <notify_server+0x98>
  4023fd:	48 8d 94 24 00 20 00 	lea    0x2000(%rsp),%rdx
  402404:	00 
  402405:	48 8d 35 5e 20 00 00 	lea    0x205e(%rip),%rsi        # 40446a <_IO_stdin_used+0x46a>
  40240c:	bf 01 00 00 00       	mov    $0x1,%edi
  402411:	b8 00 00 00 00       	mov    $0x0,%eax
  402416:	e8 a5 ef ff ff       	call   4013c0 <__printf_chk@plt>
  40241b:	bf 01 00 00 00       	mov    $0x1,%edi
  402420:	e8 eb ef ff ff       	call   401410 <exit@plt>
  402425:	48 8d 3d 54 20 00 00 	lea    0x2054(%rip),%rdi        # 404480 <_IO_stdin_used+0x480>
  40242c:	e8 7f ee ff ff       	call   4012b0 <puts@plt>
  402431:	e9 89 00 00 00       	jmp    4024bf <notify_server+0x1fa>
  402436:	48 89 ea             	mov    %rbp,%rdx
  402439:	48 8d 35 80 21 00 00 	lea    0x2180(%rip),%rsi        # 4045c0 <_IO_stdin_used+0x5c0>
  402440:	bf 01 00 00 00       	mov    $0x1,%edi
  402445:	b8 00 00 00 00       	mov    $0x0,%eax
  40244a:	e8 71 ef ff ff       	call   4013c0 <__printf_chk@plt>
  40244f:	48 8b 15 0a 4d 00 00 	mov    0x4d0a(%rip),%rdx        # 407160 <user_id>
  402456:	48 8d 35 2a 20 00 00 	lea    0x202a(%rip),%rsi        # 404487 <_IO_stdin_used+0x487>
  40245d:	bf 01 00 00 00       	mov    $0x1,%edi
  402462:	b8 00 00 00 00       	mov    $0x0,%eax
  402467:	e8 54 ef ff ff       	call   4013c0 <__printf_chk@plt>
  40246c:	48 8b 15 fd 4c 00 00 	mov    0x4cfd(%rip),%rdx        # 407170 <course>
  402473:	48 8d 35 1a 20 00 00 	lea    0x201a(%rip),%rsi        # 404494 <_IO_stdin_used+0x494>
  40247a:	bf 01 00 00 00       	mov    $0x1,%edi
  40247f:	b8 00 00 00 00       	mov    $0x0,%eax
  402484:	e8 37 ef ff ff       	call   4013c0 <__printf_chk@plt>
  402489:	48 8b 15 d8 4c 00 00 	mov    0x4cd8(%rip),%rdx        # 407168 <lab>
  402490:	48 8d 35 09 20 00 00 	lea    0x2009(%rip),%rsi        # 4044a0 <_IO_stdin_used+0x4a0>
  402497:	bf 01 00 00 00       	mov    $0x1,%edi
  40249c:	b8 00 00 00 00       	mov    $0x0,%eax
  4024a1:	e8 1a ef ff ff       	call   4013c0 <__printf_chk@plt>
  4024a6:	48 89 e2             	mov    %rsp,%rdx
  4024a9:	48 8d 35 f9 1f 00 00 	lea    0x1ff9(%rip),%rsi        # 4044a9 <_IO_stdin_used+0x4a9>
  4024b0:	bf 01 00 00 00       	mov    $0x1,%edi
  4024b5:	b8 00 00 00 00       	mov    $0x0,%eax
  4024ba:	e8 01 ef ff ff       	call   4013c0 <__printf_chk@plt>
  4024bf:	48 8b 84 24 08 40 00 	mov    0x4008(%rsp),%rax
  4024c6:	00 
  4024c7:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  4024ce:	00 00 
  4024d0:	75 0a                	jne    4024dc <notify_server+0x217>
  4024d2:	48 81 c4 18 40 00 00 	add    $0x4018,%rsp
  4024d9:	5b                   	pop    %rbx
  4024da:	5d                   	pop    %rbp
  4024db:	c3                   	ret    
  4024dc:	e8 72 02 00 00       	call   402753 <__stack_chk_fail>

00000000004024e1 <validate>:
  4024e1:	f3 0f 1e fa          	endbr64 
  4024e5:	53                   	push   %rbx
  4024e6:	89 fb                	mov    %edi,%ebx
  4024e8:	83 3d 39 50 00 00 00 	cmpl   $0x0,0x5039(%rip)        # 407528 <is_checker>
  4024ef:	74 79                	je     40256a <validate+0x89>
  4024f1:	39 3d 25 50 00 00    	cmp    %edi,0x5025(%rip)        # 40751c <vlevel>
  4024f7:	75 39                	jne    402532 <validate+0x51>
  4024f9:	8b 15 19 50 00 00    	mov    0x5019(%rip),%edx        # 407518 <check_level>
  4024ff:	39 fa                	cmp    %edi,%edx
  402501:	75 45                	jne    402548 <validate+0x67>
  402503:	0f be 0d 3e 5c 00 00 	movsbl 0x5c3e(%rip),%ecx        # 408148 <target_prefix>
  40250a:	4c 8d 0d 2f 50 00 00 	lea    0x502f(%rip),%r9        # 407540 <gets_buf>
  402511:	41 89 f8             	mov    %edi,%r8d
  402514:	8b 15 06 50 00 00    	mov    0x5006(%rip),%edx        # 407520 <authkey>
  40251a:	48 8d 35 ef 20 00 00 	lea    0x20ef(%rip),%rsi        # 404610 <_IO_stdin_used+0x610>
  402521:	bf 01 00 00 00       	mov    $0x1,%edi
  402526:	b8 00 00 00 00       	mov    $0x0,%eax
  40252b:	e8 90 ee ff ff       	call   4013c0 <__printf_chk@plt>
  402530:	5b                   	pop    %rbx
  402531:	c3                   	ret    
  402532:	48 8d 3d 7c 1f 00 00 	lea    0x1f7c(%rip),%rdi        # 4044b5 <_IO_stdin_used+0x4b5>
  402539:	e8 72 ed ff ff       	call   4012b0 <puts@plt>
  40253e:	b8 00 00 00 00       	mov    $0x0,%eax
  402543:	e8 e9 fc ff ff       	call   402231 <check_fail>
  402548:	89 f9                	mov    %edi,%ecx
  40254a:	48 8d 35 97 20 00 00 	lea    0x2097(%rip),%rsi        # 4045e8 <_IO_stdin_used+0x5e8>
  402551:	bf 01 00 00 00       	mov    $0x1,%edi
  402556:	b8 00 00 00 00       	mov    $0x0,%eax
  40255b:	e8 60 ee ff ff       	call   4013c0 <__printf_chk@plt>
  402560:	b8 00 00 00 00       	mov    $0x0,%eax
  402565:	e8 c7 fc ff ff       	call   402231 <check_fail>
  40256a:	39 3d ac 4f 00 00    	cmp    %edi,0x4fac(%rip)        # 40751c <vlevel>
  402570:	74 1a                	je     40258c <validate+0xab>
  402572:	48 8d 3d 3c 1f 00 00 	lea    0x1f3c(%rip),%rdi        # 4044b5 <_IO_stdin_used+0x4b5>
  402579:	e8 32 ed ff ff       	call   4012b0 <puts@plt>
  40257e:	89 de                	mov    %ebx,%esi
  402580:	bf 00 00 00 00       	mov    $0x0,%edi
  402585:	e8 3b fd ff ff       	call   4022c5 <notify_server>
  40258a:	eb a4                	jmp    402530 <validate+0x4f>
  40258c:	0f be 0d b5 5b 00 00 	movsbl 0x5bb5(%rip),%ecx        # 408148 <target_prefix>
  402593:	89 fa                	mov    %edi,%edx
  402595:	48 8d 35 9c 20 00 00 	lea    0x209c(%rip),%rsi        # 404638 <_IO_stdin_used+0x638>
  40259c:	bf 01 00 00 00       	mov    $0x1,%edi
  4025a1:	b8 00 00 00 00       	mov    $0x0,%eax
  4025a6:	e8 15 ee ff ff       	call   4013c0 <__printf_chk@plt>
  4025ab:	89 de                	mov    %ebx,%esi
  4025ad:	bf 01 00 00 00       	mov    $0x1,%edi
  4025b2:	e8 0e fd ff ff       	call   4022c5 <notify_server>
  4025b7:	e9 74 ff ff ff       	jmp    402530 <validate+0x4f>

00000000004025bc <fail>:
  4025bc:	f3 0f 1e fa          	endbr64 
  4025c0:	48 83 ec 08          	sub    $0x8,%rsp
  4025c4:	83 3d 5d 4f 00 00 00 	cmpl   $0x0,0x4f5d(%rip)        # 407528 <is_checker>
  4025cb:	75 11                	jne    4025de <fail+0x22>
  4025cd:	89 fe                	mov    %edi,%esi
  4025cf:	bf 00 00 00 00       	mov    $0x0,%edi
  4025d4:	e8 ec fc ff ff       	call   4022c5 <notify_server>
  4025d9:	48 83 c4 08          	add    $0x8,%rsp
  4025dd:	c3                   	ret    
  4025de:	b8 00 00 00 00       	mov    $0x0,%eax
  4025e3:	e8 49 fc ff ff       	call   402231 <check_fail>

00000000004025e8 <bushandler>:
  4025e8:	f3 0f 1e fa          	endbr64 
  4025ec:	50                   	push   %rax
  4025ed:	58                   	pop    %rax
  4025ee:	48 83 ec 08          	sub    $0x8,%rsp
  4025f2:	83 3d 2f 4f 00 00 00 	cmpl   $0x0,0x4f2f(%rip)        # 407528 <is_checker>
  4025f9:	74 16                	je     402611 <bushandler+0x29>
  4025fb:	48 8d 3d d1 1e 00 00 	lea    0x1ed1(%rip),%rdi        # 4044d3 <_IO_stdin_used+0x4d3>
  402602:	e8 a9 ec ff ff       	call   4012b0 <puts@plt>
  402607:	b8 00 00 00 00       	mov    $0x0,%eax
  40260c:	e8 20 fc ff ff       	call   402231 <check_fail>
  402611:	48 8d 3d 58 20 00 00 	lea    0x2058(%rip),%rdi        # 404670 <_IO_stdin_used+0x670>
  402618:	e8 93 ec ff ff       	call   4012b0 <puts@plt>
  40261d:	48 8d 3d b9 1e 00 00 	lea    0x1eb9(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  402624:	e8 87 ec ff ff       	call   4012b0 <puts@plt>
  402629:	be 00 00 00 00       	mov    $0x0,%esi
  40262e:	bf 00 00 00 00       	mov    $0x0,%edi
  402633:	e8 8d fc ff ff       	call   4022c5 <notify_server>
  402638:	bf 01 00 00 00       	mov    $0x1,%edi
  40263d:	e8 ce ed ff ff       	call   401410 <exit@plt>

0000000000402642 <seghandler>:
  402642:	f3 0f 1e fa          	endbr64 
  402646:	50                   	push   %rax
  402647:	58                   	pop    %rax
  402648:	48 83 ec 08          	sub    $0x8,%rsp
  40264c:	83 3d d5 4e 00 00 00 	cmpl   $0x0,0x4ed5(%rip)        # 407528 <is_checker>
  402653:	74 16                	je     40266b <seghandler+0x29>
  402655:	48 8d 3d 97 1e 00 00 	lea    0x1e97(%rip),%rdi        # 4044f3 <_IO_stdin_used+0x4f3>
  40265c:	e8 4f ec ff ff       	call   4012b0 <puts@plt>
  402661:	b8 00 00 00 00       	mov    $0x0,%eax
  402666:	e8 c6 fb ff ff       	call   402231 <check_fail>
  40266b:	48 8d 3d 1e 20 00 00 	lea    0x201e(%rip),%rdi        # 404690 <_IO_stdin_used+0x690>
  402672:	e8 39 ec ff ff       	call   4012b0 <puts@plt>
  402677:	48 8d 3d 5f 1e 00 00 	lea    0x1e5f(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  40267e:	e8 2d ec ff ff       	call   4012b0 <puts@plt>
  402683:	be 00 00 00 00       	mov    $0x0,%esi
  402688:	bf 00 00 00 00       	mov    $0x0,%edi
  40268d:	e8 33 fc ff ff       	call   4022c5 <notify_server>
  402692:	bf 01 00 00 00       	mov    $0x1,%edi
  402697:	e8 74 ed ff ff       	call   401410 <exit@plt>

000000000040269c <illegalhandler>:
  40269c:	f3 0f 1e fa          	endbr64 
  4026a0:	50                   	push   %rax
  4026a1:	58                   	pop    %rax
  4026a2:	48 83 ec 08          	sub    $0x8,%rsp
  4026a6:	83 3d 7b 4e 00 00 00 	cmpl   $0x0,0x4e7b(%rip)        # 407528 <is_checker>
  4026ad:	74 16                	je     4026c5 <illegalhandler+0x29>
  4026af:	48 8d 3d 50 1e 00 00 	lea    0x1e50(%rip),%rdi        # 404506 <_IO_stdin_used+0x506>
  4026b6:	e8 f5 eb ff ff       	call   4012b0 <puts@plt>
  4026bb:	b8 00 00 00 00       	mov    $0x0,%eax
  4026c0:	e8 6c fb ff ff       	call   402231 <check_fail>
  4026c5:	48 8d 3d ec 1f 00 00 	lea    0x1fec(%rip),%rdi        # 4046b8 <_IO_stdin_used+0x6b8>
  4026cc:	e8 df eb ff ff       	call   4012b0 <puts@plt>
  4026d1:	48 8d 3d 05 1e 00 00 	lea    0x1e05(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  4026d8:	e8 d3 eb ff ff       	call   4012b0 <puts@plt>
  4026dd:	be 00 00 00 00       	mov    $0x0,%esi
  4026e2:	bf 00 00 00 00       	mov    $0x0,%edi
  4026e7:	e8 d9 fb ff ff       	call   4022c5 <notify_server>
  4026ec:	bf 01 00 00 00       	mov    $0x1,%edi
  4026f1:	e8 1a ed ff ff       	call   401410 <exit@plt>

00000000004026f6 <sigalrmhandler>:
  4026f6:	f3 0f 1e fa          	endbr64 
  4026fa:	50                   	push   %rax
  4026fb:	58                   	pop    %rax
  4026fc:	48 83 ec 08          	sub    $0x8,%rsp
  402700:	83 3d 21 4e 00 00 00 	cmpl   $0x0,0x4e21(%rip)        # 407528 <is_checker>
  402707:	74 16                	je     40271f <sigalrmhandler+0x29>
  402709:	48 8d 3d 0a 1e 00 00 	lea    0x1e0a(%rip),%rdi        # 40451a <_IO_stdin_used+0x51a>
  402710:	e8 9b eb ff ff       	call   4012b0 <puts@plt>
  402715:	b8 00 00 00 00       	mov    $0x0,%eax
  40271a:	e8 12 fb ff ff       	call   402231 <check_fail>
  40271f:	ba 02 00 00 00       	mov    $0x2,%edx
  402724:	48 8d 35 bd 1f 00 00 	lea    0x1fbd(%rip),%rsi        # 4046e8 <_IO_stdin_used+0x6e8>
  40272b:	bf 01 00 00 00       	mov    $0x1,%edi
  402730:	b8 00 00 00 00       	mov    $0x0,%eax
  402735:	e8 86 ec ff ff       	call   4013c0 <__printf_chk@plt>
  40273a:	be 00 00 00 00       	mov    $0x0,%esi
  40273f:	bf 00 00 00 00       	mov    $0x0,%edi
  402744:	e8 7c fb ff ff       	call   4022c5 <notify_server>
  402749:	bf 01 00 00 00       	mov    $0x1,%edi
  40274e:	e8 bd ec ff ff       	call   401410 <exit@plt>

0000000000402753 <__stack_chk_fail>:
  402753:	f3 0f 1e fa          	endbr64 
  402757:	50                   	push   %rax
  402758:	58                   	pop    %rax
  402759:	48 83 ec 08          	sub    $0x8,%rsp
  40275d:	83 3d c4 4d 00 00 00 	cmpl   $0x0,0x4dc4(%rip)        # 407528 <is_checker>
  402764:	74 16                	je     40277c <__stack_chk_fail+0x29>
  402766:	48 8d 3d b5 1d 00 00 	lea    0x1db5(%rip),%rdi        # 404522 <_IO_stdin_used+0x522>
  40276d:	e8 3e eb ff ff       	call   4012b0 <puts@plt>
  402772:	b8 00 00 00 00       	mov    $0x0,%eax
  402777:	e8 b5 fa ff ff       	call   402231 <check_fail>
  40277c:	48 8d 3d 9d 1f 00 00 	lea    0x1f9d(%rip),%rdi        # 404720 <_IO_stdin_used+0x720>
  402783:	e8 28 eb ff ff       	call   4012b0 <puts@plt>
  402788:	48 8d 3d 4e 1d 00 00 	lea    0x1d4e(%rip),%rdi        # 4044dd <_IO_stdin_used+0x4dd>
  40278f:	e8 1c eb ff ff       	call   4012b0 <puts@plt>
  402794:	be 00 00 00 00       	mov    $0x0,%esi
  402799:	bf 00 00 00 00       	mov    $0x0,%edi
  40279e:	e8 22 fb ff ff       	call   4022c5 <notify_server>
  4027a3:	bf 01 00 00 00       	mov    $0x1,%edi
  4027a8:	e8 63 ec ff ff       	call   401410 <exit@plt>

00000000004027ad <launch>:
  4027ad:	f3 0f 1e fa          	endbr64 
  4027b1:	55                   	push   %rbp
  4027b2:	48 89 e5             	mov    %rsp,%rbp
  4027b5:	53                   	push   %rbx
  4027b6:	48 83 ec 18          	sub    $0x18,%rsp
  4027ba:	48 89 fa             	mov    %rdi,%rdx
  4027bd:	89 f3                	mov    %esi,%ebx
  4027bf:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4027c6:	00 00 
  4027c8:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  4027cc:	31 c0                	xor    %eax,%eax
  4027ce:	48 8d 47 17          	lea    0x17(%rdi),%rax
  4027d2:	48 89 c1             	mov    %rax,%rcx
  4027d5:	48 83 e1 f0          	and    $0xfffffffffffffff0,%rcx
  4027d9:	48 25 00 f0 ff ff    	and    $0xfffffffffffff000,%rax
  4027df:	48 89 e6             	mov    %rsp,%rsi
  4027e2:	48 29 c6             	sub    %rax,%rsi
  4027e5:	48 89 f0             	mov    %rsi,%rax
  4027e8:	48 39 c4             	cmp    %rax,%rsp
  4027eb:	74 12                	je     4027ff <launch+0x52>
  4027ed:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  4027f4:	48 83 8c 24 f8 0f 00 	orq    $0x0,0xff8(%rsp)
  4027fb:	00 00 
  4027fd:	eb e9                	jmp    4027e8 <launch+0x3b>
  4027ff:	48 89 c8             	mov    %rcx,%rax
  402802:	25 ff 0f 00 00       	and    $0xfff,%eax
  402807:	48 29 c4             	sub    %rax,%rsp
  40280a:	48 85 c0             	test   %rax,%rax
  40280d:	74 06                	je     402815 <launch+0x68>
  40280f:	48 83 4c 04 f8 00    	orq    $0x0,-0x8(%rsp,%rax,1)
  402815:	48 8d 7c 24 0f       	lea    0xf(%rsp),%rdi
  40281a:	48 83 e7 f0          	and    $0xfffffffffffffff0,%rdi
  40281e:	be f4 00 00 00       	mov    $0xf4,%esi
  402823:	e8 b8 ea ff ff       	call   4012e0 <memset@plt>
  402828:	48 8b 05 91 4c 00 00 	mov    0x4c91(%rip),%rax        # 4074c0 <stdin@GLIBC_2.2.5>
  40282f:	48 39 05 da 4c 00 00 	cmp    %rax,0x4cda(%rip)        # 407510 <infile>
  402836:	74 42                	je     40287a <launch+0xcd>
  402838:	c7 05 da 4c 00 00 00 	movl   $0x0,0x4cda(%rip)        # 40751c <vlevel>
  40283f:	00 00 00 
  402842:	85 db                	test   %ebx,%ebx
  402844:	75 4c                	jne    402892 <launch+0xe5>
  402846:	b8 00 00 00 00       	mov    $0x0,%eax
  40284b:	e8 14 f9 ff ff       	call   402164 <test>
  402850:	83 3d d1 4c 00 00 00 	cmpl   $0x0,0x4cd1(%rip)        # 407528 <is_checker>
  402857:	75 45                	jne    40289e <launch+0xf1>
  402859:	48 8d 3d e9 1c 00 00 	lea    0x1ce9(%rip),%rdi        # 404549 <_IO_stdin_used+0x549>
  402860:	e8 4b ea ff ff       	call   4012b0 <puts@plt>
  402865:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402869:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  402870:	00 00 
  402872:	75 40                	jne    4028b4 <launch+0x107>
  402874:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
  402878:	c9                   	leave  
  402879:	c3                   	ret    
  40287a:	48 8d 35 b0 1c 00 00 	lea    0x1cb0(%rip),%rsi        # 404531 <_IO_stdin_used+0x531>
  402881:	bf 01 00 00 00       	mov    $0x1,%edi
  402886:	b8 00 00 00 00       	mov    $0x0,%eax
  40288b:	e8 30 eb ff ff       	call   4013c0 <__printf_chk@plt>
  402890:	eb a6                	jmp    402838 <launch+0x8b>
  402892:	b8 00 00 00 00       	mov    $0x0,%eax
  402897:	e8 f7 f8 ff ff       	call   402193 <test2>
  40289c:	eb b2                	jmp    402850 <launch+0xa3>
  40289e:	48 8d 3d 99 1c 00 00 	lea    0x1c99(%rip),%rdi        # 40453e <_IO_stdin_used+0x53e>
  4028a5:	e8 06 ea ff ff       	call   4012b0 <puts@plt>
  4028aa:	b8 00 00 00 00       	mov    $0x0,%eax
  4028af:	e8 7d f9 ff ff       	call   402231 <check_fail>
  4028b4:	e8 9a fe ff ff       	call   402753 <__stack_chk_fail>

00000000004028b9 <stable_launch>:
  4028b9:	f3 0f 1e fa          	endbr64 
  4028bd:	55                   	push   %rbp
  4028be:	53                   	push   %rbx
  4028bf:	48 83 ec 08          	sub    $0x8,%rsp
  4028c3:	89 f5                	mov    %esi,%ebp
  4028c5:	48 89 3d 3c 4c 00 00 	mov    %rdi,0x4c3c(%rip)        # 407508 <global_offset>
  4028cc:	41 b9 00 00 00 00    	mov    $0x0,%r9d
  4028d2:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  4028d8:	b9 32 01 00 00       	mov    $0x132,%ecx
  4028dd:	ba 07 00 00 00       	mov    $0x7,%edx
  4028e2:	be 00 00 10 00       	mov    $0x100000,%esi
  4028e7:	bf 00 60 58 55       	mov    $0x55586000,%edi
  4028ec:	e8 df e9 ff ff       	call   4012d0 <mmap@plt>
  4028f1:	48 89 c3             	mov    %rax,%rbx
  4028f4:	48 3d 00 60 58 55    	cmp    $0x55586000,%rax
  4028fa:	75 4a                	jne    402946 <stable_launch+0x8d>
  4028fc:	48 8d 90 f8 ff 0f 00 	lea    0xffff8(%rax),%rdx
  402903:	48 89 15 46 58 00 00 	mov    %rdx,0x5846(%rip)        # 408150 <stack_top>
  40290a:	48 89 e0             	mov    %rsp,%rax
  40290d:	48 89 d4             	mov    %rdx,%rsp
  402910:	48 89 c2             	mov    %rax,%rdx
  402913:	48 89 15 e6 4b 00 00 	mov    %rdx,0x4be6(%rip)        # 407500 <global_save_stack>
  40291a:	89 ee                	mov    %ebp,%esi
  40291c:	48 8b 3d e5 4b 00 00 	mov    0x4be5(%rip),%rdi        # 407508 <global_offset>
  402923:	e8 85 fe ff ff       	call   4027ad <launch>
  402928:	48 8b 05 d1 4b 00 00 	mov    0x4bd1(%rip),%rax        # 407500 <global_save_stack>
  40292f:	48 89 c4             	mov    %rax,%rsp
  402932:	be 00 00 10 00       	mov    $0x100000,%esi
  402937:	48 89 df             	mov    %rbx,%rdi
  40293a:	e8 71 ea ff ff       	call   4013b0 <munmap@plt>
  40293f:	48 83 c4 08          	add    $0x8,%rsp
  402943:	5b                   	pop    %rbx
  402944:	5d                   	pop    %rbp
  402945:	c3                   	ret    
  402946:	be 00 00 10 00       	mov    $0x100000,%esi
  40294b:	48 89 c7             	mov    %rax,%rdi
  40294e:	e8 5d ea ff ff       	call   4013b0 <munmap@plt>
  402953:	b9 00 60 58 55       	mov    $0x55586000,%ecx
  402958:	48 8d 15 e9 1d 00 00 	lea    0x1de9(%rip),%rdx        # 404748 <_IO_stdin_used+0x748>
  40295f:	be 01 00 00 00       	mov    $0x1,%esi
  402964:	48 8b 3d 75 4b 00 00 	mov    0x4b75(%rip),%rdi        # 4074e0 <stderr@GLIBC_2.2.5>
  40296b:	b8 00 00 00 00       	mov    $0x0,%eax
  402970:	e8 bb ea ff ff       	call   401430 <__fprintf_chk@plt>
  402975:	bf 01 00 00 00       	mov    $0x1,%edi
  40297a:	e8 91 ea ff ff       	call   401410 <exit@plt>

000000000040297f <rio_readinitb>:
  40297f:	89 37                	mov    %esi,(%rdi)
  402981:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%rdi)
  402988:	48 8d 47 10          	lea    0x10(%rdi),%rax
  40298c:	48 89 47 08          	mov    %rax,0x8(%rdi)
  402990:	c3                   	ret    

0000000000402991 <sigalrm_handler>:
  402991:	f3 0f 1e fa          	endbr64 
  402995:	50                   	push   %rax
  402996:	58                   	pop    %rax
  402997:	48 83 ec 08          	sub    $0x8,%rsp
  40299b:	b9 00 00 00 00       	mov    $0x0,%ecx
  4029a0:	48 8d 15 d9 1d 00 00 	lea    0x1dd9(%rip),%rdx        # 404780 <trans_char+0x10>
  4029a7:	be 01 00 00 00       	mov    $0x1,%esi
  4029ac:	48 8b 3d 2d 4b 00 00 	mov    0x4b2d(%rip),%rdi        # 4074e0 <stderr@GLIBC_2.2.5>
  4029b3:	b8 00 00 00 00       	mov    $0x0,%eax
  4029b8:	e8 73 ea ff ff       	call   401430 <__fprintf_chk@plt>
  4029bd:	bf 01 00 00 00       	mov    $0x1,%edi
  4029c2:	e8 49 ea ff ff       	call   401410 <exit@plt>

00000000004029c7 <rio_writen>:
  4029c7:	41 55                	push   %r13
  4029c9:	41 54                	push   %r12
  4029cb:	55                   	push   %rbp
  4029cc:	53                   	push   %rbx
  4029cd:	48 83 ec 08          	sub    $0x8,%rsp
  4029d1:	41 89 fc             	mov    %edi,%r12d
  4029d4:	48 89 f5             	mov    %rsi,%rbp
  4029d7:	49 89 d5             	mov    %rdx,%r13
  4029da:	48 89 d3             	mov    %rdx,%rbx
  4029dd:	eb 06                	jmp    4029e5 <rio_writen+0x1e>
  4029df:	48 29 c3             	sub    %rax,%rbx
  4029e2:	48 01 c5             	add    %rax,%rbp
  4029e5:	48 85 db             	test   %rbx,%rbx
  4029e8:	74 24                	je     402a0e <rio_writen+0x47>
  4029ea:	48 89 da             	mov    %rbx,%rdx
  4029ed:	48 89 ee             	mov    %rbp,%rsi
  4029f0:	44 89 e7             	mov    %r12d,%edi
  4029f3:	e8 c8 e8 ff ff       	call   4012c0 <write@plt>
  4029f8:	48 85 c0             	test   %rax,%rax
  4029fb:	7f e2                	jg     4029df <rio_writen+0x18>
  4029fd:	e8 5e e8 ff ff       	call   401260 <__errno_location@plt>
  402a02:	83 38 04             	cmpl   $0x4,(%rax)
  402a05:	75 15                	jne    402a1c <rio_writen+0x55>
  402a07:	b8 00 00 00 00       	mov    $0x0,%eax
  402a0c:	eb d1                	jmp    4029df <rio_writen+0x18>
  402a0e:	4c 89 e8             	mov    %r13,%rax
  402a11:	48 83 c4 08          	add    $0x8,%rsp
  402a15:	5b                   	pop    %rbx
  402a16:	5d                   	pop    %rbp
  402a17:	41 5c                	pop    %r12
  402a19:	41 5d                	pop    %r13
  402a1b:	c3                   	ret    
  402a1c:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402a23:	eb ec                	jmp    402a11 <rio_writen+0x4a>

0000000000402a25 <rio_read>:
  402a25:	41 55                	push   %r13
  402a27:	41 54                	push   %r12
  402a29:	55                   	push   %rbp
  402a2a:	53                   	push   %rbx
  402a2b:	48 83 ec 08          	sub    $0x8,%rsp
  402a2f:	48 89 fb             	mov    %rdi,%rbx
  402a32:	49 89 f5             	mov    %rsi,%r13
  402a35:	49 89 d4             	mov    %rdx,%r12
  402a38:	eb 17                	jmp    402a51 <rio_read+0x2c>
  402a3a:	e8 21 e8 ff ff       	call   401260 <__errno_location@plt>
  402a3f:	83 38 04             	cmpl   $0x4,(%rax)
  402a42:	74 0d                	je     402a51 <rio_read+0x2c>
  402a44:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402a4b:	eb 54                	jmp    402aa1 <rio_read+0x7c>
  402a4d:	48 89 6b 08          	mov    %rbp,0x8(%rbx)
  402a51:	8b 6b 04             	mov    0x4(%rbx),%ebp
  402a54:	85 ed                	test   %ebp,%ebp
  402a56:	7f 23                	jg     402a7b <rio_read+0x56>
  402a58:	48 8d 6b 10          	lea    0x10(%rbx),%rbp
  402a5c:	8b 3b                	mov    (%rbx),%edi
  402a5e:	ba 00 20 00 00       	mov    $0x2000,%edx
  402a63:	48 89 ee             	mov    %rbp,%rsi
  402a66:	e8 a5 e8 ff ff       	call   401310 <read@plt>
  402a6b:	89 43 04             	mov    %eax,0x4(%rbx)
  402a6e:	85 c0                	test   %eax,%eax
  402a70:	78 c8                	js     402a3a <rio_read+0x15>
  402a72:	75 d9                	jne    402a4d <rio_read+0x28>
  402a74:	b8 00 00 00 00       	mov    $0x0,%eax
  402a79:	eb 26                	jmp    402aa1 <rio_read+0x7c>
  402a7b:	89 e8                	mov    %ebp,%eax
  402a7d:	4c 39 e0             	cmp    %r12,%rax
  402a80:	72 03                	jb     402a85 <rio_read+0x60>
  402a82:	44 89 e5             	mov    %r12d,%ebp
  402a85:	4c 63 e5             	movslq %ebp,%r12
  402a88:	48 8b 73 08          	mov    0x8(%rbx),%rsi
  402a8c:	4c 89 e2             	mov    %r12,%rdx
  402a8f:	4c 89 ef             	mov    %r13,%rdi
  402a92:	e8 d9 e8 ff ff       	call   401370 <memcpy@plt>
  402a97:	4c 01 63 08          	add    %r12,0x8(%rbx)
  402a9b:	29 6b 04             	sub    %ebp,0x4(%rbx)
  402a9e:	4c 89 e0             	mov    %r12,%rax
  402aa1:	48 83 c4 08          	add    $0x8,%rsp
  402aa5:	5b                   	pop    %rbx
  402aa6:	5d                   	pop    %rbp
  402aa7:	41 5c                	pop    %r12
  402aa9:	41 5d                	pop    %r13
  402aab:	c3                   	ret    

0000000000402aac <rio_readlineb>:
  402aac:	41 55                	push   %r13
  402aae:	41 54                	push   %r12
  402ab0:	55                   	push   %rbp
  402ab1:	53                   	push   %rbx
  402ab2:	48 83 ec 18          	sub    $0x18,%rsp
  402ab6:	49 89 fd             	mov    %rdi,%r13
  402ab9:	48 89 f5             	mov    %rsi,%rbp
  402abc:	49 89 d4             	mov    %rdx,%r12
  402abf:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402ac6:	00 00 
  402ac8:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  402acd:	31 c0                	xor    %eax,%eax
  402acf:	bb 01 00 00 00       	mov    $0x1,%ebx
  402ad4:	eb 18                	jmp    402aee <rio_readlineb+0x42>
  402ad6:	85 c0                	test   %eax,%eax
  402ad8:	75 65                	jne    402b3f <rio_readlineb+0x93>
  402ada:	48 83 fb 01          	cmp    $0x1,%rbx
  402ade:	75 3d                	jne    402b1d <rio_readlineb+0x71>
  402ae0:	b8 00 00 00 00       	mov    $0x0,%eax
  402ae5:	eb 3d                	jmp    402b24 <rio_readlineb+0x78>
  402ae7:	48 83 c3 01          	add    $0x1,%rbx
  402aeb:	48 89 d5             	mov    %rdx,%rbp
  402aee:	4c 39 e3             	cmp    %r12,%rbx
  402af1:	73 2a                	jae    402b1d <rio_readlineb+0x71>
  402af3:	48 8d 74 24 07       	lea    0x7(%rsp),%rsi
  402af8:	ba 01 00 00 00       	mov    $0x1,%edx
  402afd:	4c 89 ef             	mov    %r13,%rdi
  402b00:	e8 20 ff ff ff       	call   402a25 <rio_read>
  402b05:	83 f8 01             	cmp    $0x1,%eax
  402b08:	75 cc                	jne    402ad6 <rio_readlineb+0x2a>
  402b0a:	48 8d 55 01          	lea    0x1(%rbp),%rdx
  402b0e:	0f b6 44 24 07       	movzbl 0x7(%rsp),%eax
  402b13:	88 45 00             	mov    %al,0x0(%rbp)
  402b16:	3c 0a                	cmp    $0xa,%al
  402b18:	75 cd                	jne    402ae7 <rio_readlineb+0x3b>
  402b1a:	48 89 d5             	mov    %rdx,%rbp
  402b1d:	c6 45 00 00          	movb   $0x0,0x0(%rbp)
  402b21:	48 89 d8             	mov    %rbx,%rax
  402b24:	48 8b 4c 24 08       	mov    0x8(%rsp),%rcx
  402b29:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  402b30:	00 00 
  402b32:	75 14                	jne    402b48 <rio_readlineb+0x9c>
  402b34:	48 83 c4 18          	add    $0x18,%rsp
  402b38:	5b                   	pop    %rbx
  402b39:	5d                   	pop    %rbp
  402b3a:	41 5c                	pop    %r12
  402b3c:	41 5d                	pop    %r13
  402b3e:	c3                   	ret    
  402b3f:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402b46:	eb dc                	jmp    402b24 <rio_readlineb+0x78>
  402b48:	e8 06 fc ff ff       	call   402753 <__stack_chk_fail>

0000000000402b4d <urlencode>:
  402b4d:	41 54                	push   %r12
  402b4f:	55                   	push   %rbp
  402b50:	53                   	push   %rbx
  402b51:	48 83 ec 10          	sub    $0x10,%rsp
  402b55:	48 89 fb             	mov    %rdi,%rbx
  402b58:	48 89 f5             	mov    %rsi,%rbp
  402b5b:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402b62:	00 00 
  402b64:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  402b69:	31 c0                	xor    %eax,%eax
  402b6b:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  402b72:	f2 ae                	repnz scas %es:(%rdi),%al
  402b74:	48 f7 d1             	not    %rcx
  402b77:	8d 41 ff             	lea    -0x1(%rcx),%eax
  402b7a:	eb 0f                	jmp    402b8b <urlencode+0x3e>
  402b7c:	44 88 45 00          	mov    %r8b,0x0(%rbp)
  402b80:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  402b84:	48 83 c3 01          	add    $0x1,%rbx
  402b88:	44 89 e0             	mov    %r12d,%eax
  402b8b:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
  402b8f:	85 c0                	test   %eax,%eax
  402b91:	0f 84 a8 00 00 00    	je     402c3f <urlencode+0xf2>
  402b97:	44 0f b6 03          	movzbl (%rbx),%r8d
  402b9b:	41 80 f8 2a          	cmp    $0x2a,%r8b
  402b9f:	0f 94 c2             	sete   %dl
  402ba2:	41 80 f8 2d          	cmp    $0x2d,%r8b
  402ba6:	0f 94 c0             	sete   %al
  402ba9:	08 c2                	or     %al,%dl
  402bab:	75 cf                	jne    402b7c <urlencode+0x2f>
  402bad:	41 80 f8 2e          	cmp    $0x2e,%r8b
  402bb1:	74 c9                	je     402b7c <urlencode+0x2f>
  402bb3:	41 80 f8 5f          	cmp    $0x5f,%r8b
  402bb7:	74 c3                	je     402b7c <urlencode+0x2f>
  402bb9:	41 8d 40 d0          	lea    -0x30(%r8),%eax
  402bbd:	3c 09                	cmp    $0x9,%al
  402bbf:	76 bb                	jbe    402b7c <urlencode+0x2f>
  402bc1:	41 8d 40 bf          	lea    -0x41(%r8),%eax
  402bc5:	3c 19                	cmp    $0x19,%al
  402bc7:	76 b3                	jbe    402b7c <urlencode+0x2f>
  402bc9:	41 8d 40 9f          	lea    -0x61(%r8),%eax
  402bcd:	3c 19                	cmp    $0x19,%al
  402bcf:	76 ab                	jbe    402b7c <urlencode+0x2f>
  402bd1:	41 80 f8 20          	cmp    $0x20,%r8b
  402bd5:	74 56                	je     402c2d <urlencode+0xe0>
  402bd7:	41 8d 40 e0          	lea    -0x20(%r8),%eax
  402bdb:	3c 5f                	cmp    $0x5f,%al
  402bdd:	0f 96 c2             	setbe  %dl
  402be0:	41 80 f8 09          	cmp    $0x9,%r8b
  402be4:	0f 94 c0             	sete   %al
  402be7:	08 c2                	or     %al,%dl
  402be9:	74 4f                	je     402c3a <urlencode+0xed>
  402beb:	48 89 e7             	mov    %rsp,%rdi
  402bee:	45 0f b6 c0          	movzbl %r8b,%r8d
  402bf2:	48 8d 0d 3c 1c 00 00 	lea    0x1c3c(%rip),%rcx        # 404835 <trans_char+0xc5>
  402bf9:	ba 08 00 00 00       	mov    $0x8,%edx
  402bfe:	be 01 00 00 00       	mov    $0x1,%esi
  402c03:	b8 00 00 00 00       	mov    $0x0,%eax
  402c08:	e8 43 e8 ff ff       	call   401450 <__sprintf_chk@plt>
  402c0d:	0f b6 04 24          	movzbl (%rsp),%eax
  402c11:	88 45 00             	mov    %al,0x0(%rbp)
  402c14:	0f b6 44 24 01       	movzbl 0x1(%rsp),%eax
  402c19:	88 45 01             	mov    %al,0x1(%rbp)
  402c1c:	0f b6 44 24 02       	movzbl 0x2(%rsp),%eax
  402c21:	88 45 02             	mov    %al,0x2(%rbp)
  402c24:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
  402c28:	e9 57 ff ff ff       	jmp    402b84 <urlencode+0x37>
  402c2d:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
  402c31:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  402c35:	e9 4a ff ff ff       	jmp    402b84 <urlencode+0x37>
  402c3a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402c3f:	48 8b 74 24 08       	mov    0x8(%rsp),%rsi
  402c44:	64 48 33 34 25 28 00 	xor    %fs:0x28,%rsi
  402c4b:	00 00 
  402c4d:	75 09                	jne    402c58 <urlencode+0x10b>
  402c4f:	48 83 c4 10          	add    $0x10,%rsp
  402c53:	5b                   	pop    %rbx
  402c54:	5d                   	pop    %rbp
  402c55:	41 5c                	pop    %r12
  402c57:	c3                   	ret    
  402c58:	e8 f6 fa ff ff       	call   402753 <__stack_chk_fail>

0000000000402c5d <submitr>:
  402c5d:	f3 0f 1e fa          	endbr64 
  402c61:	41 57                	push   %r15
  402c63:	41 56                	push   %r14
  402c65:	41 55                	push   %r13
  402c67:	41 54                	push   %r12
  402c69:	55                   	push   %rbp
  402c6a:	53                   	push   %rbx
  402c6b:	4c 8d 9c 24 00 60 ff 	lea    -0xa000(%rsp),%r11
  402c72:	ff 
  402c73:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  402c7a:	48 83 0c 24 00       	orq    $0x0,(%rsp)
  402c7f:	4c 39 dc             	cmp    %r11,%rsp
  402c82:	75 ef                	jne    402c73 <submitr+0x16>
  402c84:	48 83 ec 68          	sub    $0x68,%rsp
  402c88:	49 89 fc             	mov    %rdi,%r12
  402c8b:	89 74 24 1c          	mov    %esi,0x1c(%rsp)
  402c8f:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
  402c94:	49 89 cd             	mov    %rcx,%r13
  402c97:	4c 89 44 24 10       	mov    %r8,0x10(%rsp)
  402c9c:	4d 89 ce             	mov    %r9,%r14
  402c9f:	48 8b ac 24 a0 a0 00 	mov    0xa0a0(%rsp),%rbp
  402ca6:	00 
  402ca7:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402cae:	00 00 
  402cb0:	48 89 84 24 58 a0 00 	mov    %rax,0xa058(%rsp)
  402cb7:	00 
  402cb8:	31 c0                	xor    %eax,%eax
  402cba:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%rsp)
  402cc1:	00 
  402cc2:	ba 00 00 00 00       	mov    $0x0,%edx
  402cc7:	be 01 00 00 00       	mov    $0x1,%esi
  402ccc:	bf 02 00 00 00       	mov    $0x2,%edi
  402cd1:	e8 8a e7 ff ff       	call   401460 <socket@plt>
  402cd6:	85 c0                	test   %eax,%eax
  402cd8:	0f 88 a5 02 00 00    	js     402f83 <submitr+0x326>
  402cde:	89 c3                	mov    %eax,%ebx
  402ce0:	4c 89 e7             	mov    %r12,%rdi
  402ce3:	e8 58 e6 ff ff       	call   401340 <gethostbyname@plt>
  402ce8:	48 85 c0             	test   %rax,%rax
  402ceb:	0f 84 de 02 00 00    	je     402fcf <submitr+0x372>
  402cf1:	4c 8d 7c 24 30       	lea    0x30(%rsp),%r15
  402cf6:	48 c7 44 24 30 00 00 	movq   $0x0,0x30(%rsp)
  402cfd:	00 00 
  402cff:	48 c7 44 24 38 00 00 	movq   $0x0,0x38(%rsp)
  402d06:	00 00 
  402d08:	66 c7 44 24 30 02 00 	movw   $0x2,0x30(%rsp)
  402d0f:	48 63 50 14          	movslq 0x14(%rax),%rdx
  402d13:	48 8b 40 18          	mov    0x18(%rax),%rax
  402d17:	48 8b 30             	mov    (%rax),%rsi
  402d1a:	48 8d 7c 24 34       	lea    0x34(%rsp),%rdi
  402d1f:	b9 0c 00 00 00       	mov    $0xc,%ecx
  402d24:	e8 27 e6 ff ff       	call   401350 <__memmove_chk@plt>
  402d29:	0f b7 74 24 1c       	movzwl 0x1c(%rsp),%esi
  402d2e:	66 c1 c6 08          	rol    $0x8,%si
  402d32:	66 89 74 24 32       	mov    %si,0x32(%rsp)
  402d37:	ba 10 00 00 00       	mov    $0x10,%edx
  402d3c:	4c 89 fe             	mov    %r15,%rsi
  402d3f:	89 df                	mov    %ebx,%edi
  402d41:	e8 da e6 ff ff       	call   401420 <connect@plt>
  402d46:	85 c0                	test   %eax,%eax
  402d48:	0f 88 f7 02 00 00    	js     403045 <submitr+0x3e8>
  402d4e:	48 c7 c6 ff ff ff ff 	mov    $0xffffffffffffffff,%rsi
  402d55:	b8 00 00 00 00       	mov    $0x0,%eax
  402d5a:	48 89 f1             	mov    %rsi,%rcx
  402d5d:	4c 89 f7             	mov    %r14,%rdi
  402d60:	f2 ae                	repnz scas %es:(%rdi),%al
  402d62:	48 89 ca             	mov    %rcx,%rdx
  402d65:	48 f7 d2             	not    %rdx
  402d68:	48 89 f1             	mov    %rsi,%rcx
  402d6b:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
  402d70:	f2 ae                	repnz scas %es:(%rdi),%al
  402d72:	48 f7 d1             	not    %rcx
  402d75:	49 89 c8             	mov    %rcx,%r8
  402d78:	48 89 f1             	mov    %rsi,%rcx
  402d7b:	4c 89 ef             	mov    %r13,%rdi
  402d7e:	f2 ae                	repnz scas %es:(%rdi),%al
  402d80:	48 f7 d1             	not    %rcx
  402d83:	4d 8d 44 08 fe       	lea    -0x2(%r8,%rcx,1),%r8
  402d88:	48 89 f1             	mov    %rsi,%rcx
  402d8b:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
  402d90:	f2 ae                	repnz scas %es:(%rdi),%al
  402d92:	48 89 c8             	mov    %rcx,%rax
  402d95:	48 f7 d0             	not    %rax
  402d98:	49 8d 4c 00 ff       	lea    -0x1(%r8,%rax,1),%rcx
  402d9d:	48 8d 44 52 fd       	lea    -0x3(%rdx,%rdx,2),%rax
  402da2:	48 8d 84 01 80 00 00 	lea    0x80(%rcx,%rax,1),%rax
  402da9:	00 
  402daa:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
  402db0:	0f 87 f7 02 00 00    	ja     4030ad <submitr+0x450>
  402db6:	48 8d b4 24 50 40 00 	lea    0x4050(%rsp),%rsi
  402dbd:	00 
  402dbe:	b9 00 04 00 00       	mov    $0x400,%ecx
  402dc3:	b8 00 00 00 00       	mov    $0x0,%eax
  402dc8:	48 89 f7             	mov    %rsi,%rdi
  402dcb:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  402dce:	4c 89 f7             	mov    %r14,%rdi
  402dd1:	e8 77 fd ff ff       	call   402b4d <urlencode>
  402dd6:	85 c0                	test   %eax,%eax
  402dd8:	0f 88 42 03 00 00    	js     403120 <submitr+0x4c3>
  402dde:	4c 8d bc 24 50 20 00 	lea    0x2050(%rsp),%r15
  402de5:	00 
  402de6:	48 83 ec 08          	sub    $0x8,%rsp
  402dea:	41 54                	push   %r12
  402dec:	48 8d 84 24 60 40 00 	lea    0x4060(%rsp),%rax
  402df3:	00 
  402df4:	50                   	push   %rax
  402df5:	41 55                	push   %r13
  402df7:	4c 8b 4c 24 30       	mov    0x30(%rsp),%r9
  402dfc:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
  402e01:	48 8d 0d a0 19 00 00 	lea    0x19a0(%rip),%rcx        # 4047a8 <trans_char+0x38>
  402e08:	ba 00 20 00 00       	mov    $0x2000,%edx
  402e0d:	be 01 00 00 00       	mov    $0x1,%esi
  402e12:	4c 89 ff             	mov    %r15,%rdi
  402e15:	b8 00 00 00 00       	mov    $0x0,%eax
  402e1a:	e8 31 e6 ff ff       	call   401450 <__sprintf_chk@plt>
  402e1f:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  402e26:	b8 00 00 00 00       	mov    $0x0,%eax
  402e2b:	4c 89 ff             	mov    %r15,%rdi
  402e2e:	f2 ae                	repnz scas %es:(%rdi),%al
  402e30:	48 f7 d1             	not    %rcx
  402e33:	48 8d 51 ff          	lea    -0x1(%rcx),%rdx
  402e37:	48 83 c4 20          	add    $0x20,%rsp
  402e3b:	4c 89 fe             	mov    %r15,%rsi
  402e3e:	89 df                	mov    %ebx,%edi
  402e40:	e8 82 fb ff ff       	call   4029c7 <rio_writen>
  402e45:	48 85 c0             	test   %rax,%rax
  402e48:	0f 88 5d 03 00 00    	js     4031ab <submitr+0x54e>
  402e4e:	4c 8d 64 24 40       	lea    0x40(%rsp),%r12
  402e53:	89 de                	mov    %ebx,%esi
  402e55:	4c 89 e7             	mov    %r12,%rdi
  402e58:	e8 22 fb ff ff       	call   40297f <rio_readinitb>
  402e5d:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  402e64:	00 
  402e65:	ba 00 20 00 00       	mov    $0x2000,%edx
  402e6a:	4c 89 e7             	mov    %r12,%rdi
  402e6d:	e8 3a fc ff ff       	call   402aac <rio_readlineb>
  402e72:	48 85 c0             	test   %rax,%rax
  402e75:	0f 8e 9c 03 00 00    	jle    403217 <submitr+0x5ba>
  402e7b:	48 8d 4c 24 2c       	lea    0x2c(%rsp),%rcx
  402e80:	48 8d 94 24 50 60 00 	lea    0x6050(%rsp),%rdx
  402e87:	00 
  402e88:	48 8d bc 24 50 20 00 	lea    0x2050(%rsp),%rdi
  402e8f:	00 
  402e90:	4c 8d 84 24 50 80 00 	lea    0x8050(%rsp),%r8
  402e97:	00 
  402e98:	48 8d 35 9d 19 00 00 	lea    0x199d(%rip),%rsi        # 40483c <trans_char+0xcc>
  402e9f:	b8 00 00 00 00       	mov    $0x0,%eax
  402ea4:	e8 f7 e4 ff ff       	call   4013a0 <__isoc99_sscanf@plt>
  402ea9:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  402eb0:	00 
  402eb1:	b9 03 00 00 00       	mov    $0x3,%ecx
  402eb6:	48 8d 3d 96 19 00 00 	lea    0x1996(%rip),%rdi        # 404853 <trans_char+0xe3>
  402ebd:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  402ebf:	0f 97 c0             	seta   %al
  402ec2:	1c 00                	sbb    $0x0,%al
  402ec4:	84 c0                	test   %al,%al
  402ec6:	0f 84 cb 03 00 00    	je     403297 <submitr+0x63a>
  402ecc:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  402ed3:	00 
  402ed4:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  402ed9:	ba 00 20 00 00       	mov    $0x2000,%edx
  402ede:	e8 c9 fb ff ff       	call   402aac <rio_readlineb>
  402ee3:	48 85 c0             	test   %rax,%rax
  402ee6:	7f c1                	jg     402ea9 <submitr+0x24c>
  402ee8:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402eef:	3a 20 43 
  402ef2:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  402ef9:	20 75 6e 
  402efc:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402f00:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  402f04:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402f0b:	74 6f 20 
  402f0e:	48 ba 72 65 61 64 20 	movabs $0x6165682064616572,%rdx
  402f15:	68 65 61 
  402f18:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402f1c:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  402f20:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
  402f27:	66 72 6f 
  402f2a:	48 ba 6d 20 41 75 74 	movabs $0x616c6f747541206d,%rdx
  402f31:	6f 6c 61 
  402f34:	48 89 45 20          	mov    %rax,0x20(%rbp)
  402f38:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  402f3c:	48 b8 62 20 73 65 72 	movabs $0x7265767265732062,%rax
  402f43:	76 65 72 
  402f46:	48 89 45 30          	mov    %rax,0x30(%rbp)
  402f4a:	c6 45 38 00          	movb   $0x0,0x38(%rbp)
  402f4e:	89 df                	mov    %ebx,%edi
  402f50:	e8 ab e3 ff ff       	call   401300 <close@plt>
  402f55:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402f5a:	48 8b 9c 24 58 a0 00 	mov    0xa058(%rsp),%rbx
  402f61:	00 
  402f62:	64 48 33 1c 25 28 00 	xor    %fs:0x28,%rbx
  402f69:	00 00 
  402f6b:	0f 85 96 04 00 00    	jne    403407 <submitr+0x7aa>
  402f71:	48 81 c4 68 a0 00 00 	add    $0xa068,%rsp
  402f78:	5b                   	pop    %rbx
  402f79:	5d                   	pop    %rbp
  402f7a:	41 5c                	pop    %r12
  402f7c:	41 5d                	pop    %r13
  402f7e:	41 5e                	pop    %r14
  402f80:	41 5f                	pop    %r15
  402f82:	c3                   	ret    
  402f83:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402f8a:	3a 20 43 
  402f8d:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  402f94:	20 75 6e 
  402f97:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402f9b:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  402f9f:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402fa6:	74 6f 20 
  402fa9:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
  402fb0:	65 20 73 
  402fb3:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402fb7:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  402fbb:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  402fc2:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  402fc8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402fcd:	eb 8b                	jmp    402f5a <submitr+0x2fd>
  402fcf:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  402fd6:	3a 20 44 
  402fd9:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
  402fe0:	20 75 6e 
  402fe3:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402fe7:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  402feb:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402ff2:	74 6f 20 
  402ff5:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
  402ffc:	76 65 20 
  402fff:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403003:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403007:	48 b8 41 75 74 6f 6c 	movabs $0x2062616c6f747541,%rax
  40300e:	61 62 20 
  403011:	48 ba 73 65 72 76 65 	movabs $0x6120726576726573,%rdx
  403018:	72 20 61 
  40301b:	48 89 45 20          	mov    %rax,0x20(%rbp)
  40301f:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  403023:	c7 45 30 64 64 72 65 	movl   $0x65726464,0x30(%rbp)
  40302a:	66 c7 45 34 73 73    	movw   $0x7373,0x34(%rbp)
  403030:	c6 45 36 00          	movb   $0x0,0x36(%rbp)
  403034:	89 df                	mov    %ebx,%edi
  403036:	e8 c5 e2 ff ff       	call   401300 <close@plt>
  40303b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403040:	e9 15 ff ff ff       	jmp    402f5a <submitr+0x2fd>
  403045:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  40304c:	3a 20 55 
  40304f:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
  403056:	20 74 6f 
  403059:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40305d:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403061:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  403068:	65 63 74 
  40306b:	48 ba 20 74 6f 20 74 	movabs $0x20656874206f7420,%rdx
  403072:	68 65 20 
  403075:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403079:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  40307d:	48 b8 41 75 74 6f 6c 	movabs $0x2062616c6f747541,%rax
  403084:	61 62 20 
  403087:	48 89 45 20          	mov    %rax,0x20(%rbp)
  40308b:	c7 45 28 73 65 72 76 	movl   $0x76726573,0x28(%rbp)
  403092:	66 c7 45 2c 65 72    	movw   $0x7265,0x2c(%rbp)
  403098:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  40309c:	89 df                	mov    %ebx,%edi
  40309e:	e8 5d e2 ff ff       	call   401300 <close@plt>
  4030a3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4030a8:	e9 ad fe ff ff       	jmp    402f5a <submitr+0x2fd>
  4030ad:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  4030b4:	3a 20 52 
  4030b7:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
  4030be:	20 73 74 
  4030c1:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4030c5:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  4030c9:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
  4030d0:	74 6f 6f 
  4030d3:	48 ba 20 6c 61 72 67 	movabs $0x202e656772616c20,%rdx
  4030da:	65 2e 20 
  4030dd:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4030e1:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  4030e5:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
  4030ec:	61 73 65 
  4030ef:	48 ba 20 53 55 42 4d 	movabs $0x5254494d42555320,%rdx
  4030f6:	49 54 52 
  4030f9:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4030fd:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  403101:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
  403108:	55 46 00 
  40310b:	48 89 45 30          	mov    %rax,0x30(%rbp)
  40310f:	89 df                	mov    %ebx,%edi
  403111:	e8 ea e1 ff ff       	call   401300 <close@plt>
  403116:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40311b:	e9 3a fe ff ff       	jmp    402f5a <submitr+0x2fd>
  403120:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  403127:	3a 20 52 
  40312a:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
  403131:	20 73 74 
  403134:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403138:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40313c:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
  403143:	63 6f 6e 
  403146:	48 ba 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rdx
  40314d:	20 61 6e 
  403150:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403154:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403158:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
  40315f:	67 61 6c 
  403162:	48 ba 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rdx
  403169:	6e 70 72 
  40316c:	48 89 45 20          	mov    %rax,0x20(%rbp)
  403170:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  403174:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
  40317b:	6c 65 20 
  40317e:	48 ba 63 68 61 72 61 	movabs $0x6574636172616863,%rdx
  403185:	63 74 65 
  403188:	48 89 45 30          	mov    %rax,0x30(%rbp)
  40318c:	48 89 55 38          	mov    %rdx,0x38(%rbp)
  403190:	66 c7 45 40 72 2e    	movw   $0x2e72,0x40(%rbp)
  403196:	c6 45 42 00          	movb   $0x0,0x42(%rbp)
  40319a:	89 df                	mov    %ebx,%edi
  40319c:	e8 5f e1 ff ff       	call   401300 <close@plt>
  4031a1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4031a6:	e9 af fd ff ff       	jmp    402f5a <submitr+0x2fd>
  4031ab:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4031b2:	3a 20 43 
  4031b5:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  4031bc:	20 75 6e 
  4031bf:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4031c3:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  4031c7:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4031ce:	74 6f 20 
  4031d1:	48 ba 77 72 69 74 65 	movabs $0x6f74206574697277,%rdx
  4031d8:	20 74 6f 
  4031db:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4031df:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  4031e3:	48 b8 20 74 68 65 20 	movabs $0x7475412065687420,%rax
  4031ea:	41 75 74 
  4031ed:	48 ba 6f 6c 61 62 20 	movabs $0x7265732062616c6f,%rdx
  4031f4:	73 65 72 
  4031f7:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4031fb:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  4031ff:	c7 45 30 76 65 72 00 	movl   $0x726576,0x30(%rbp)
  403206:	89 df                	mov    %ebx,%edi
  403208:	e8 f3 e0 ff ff       	call   401300 <close@plt>
  40320d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403212:	e9 43 fd ff ff       	jmp    402f5a <submitr+0x2fd>
  403217:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40321e:	3a 20 43 
  403221:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  403228:	20 75 6e 
  40322b:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40322f:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403233:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40323a:	74 6f 20 
  40323d:	48 ba 72 65 61 64 20 	movabs $0x7269662064616572,%rdx
  403244:	66 69 72 
  403247:	48 89 45 10          	mov    %rax,0x10(%rbp)
  40324b:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  40324f:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
  403256:	61 64 65 
  403259:	48 ba 72 20 66 72 6f 	movabs $0x41206d6f72662072,%rdx
  403260:	6d 20 41 
  403263:	48 89 45 20          	mov    %rax,0x20(%rbp)
  403267:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  40326b:	48 b8 75 74 6f 6c 61 	movabs $0x732062616c6f7475,%rax
  403272:	62 20 73 
  403275:	48 89 45 30          	mov    %rax,0x30(%rbp)
  403279:	c7 45 38 65 72 76 65 	movl   $0x65767265,0x38(%rbp)
  403280:	66 c7 45 3c 72 00    	movw   $0x72,0x3c(%rbp)
  403286:	89 df                	mov    %ebx,%edi
  403288:	e8 73 e0 ff ff       	call   401300 <close@plt>
  40328d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403292:	e9 c3 fc ff ff       	jmp    402f5a <submitr+0x2fd>
  403297:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  40329e:	00 
  40329f:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  4032a4:	ba 00 20 00 00       	mov    $0x2000,%edx
  4032a9:	e8 fe f7 ff ff       	call   402aac <rio_readlineb>
  4032ae:	48 85 c0             	test   %rax,%rax
  4032b1:	0f 8e 96 00 00 00    	jle    40334d <submitr+0x6f0>
  4032b7:	44 8b 44 24 2c       	mov    0x2c(%rsp),%r8d
  4032bc:	41 81 f8 c8 00 00 00 	cmp    $0xc8,%r8d
  4032c3:	0f 85 05 01 00 00    	jne    4033ce <submitr+0x771>
  4032c9:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  4032d0:	00 
  4032d1:	48 89 ef             	mov    %rbp,%rdi
  4032d4:	e8 c7 df ff ff       	call   4012a0 <strcpy@plt>
  4032d9:	89 df                	mov    %ebx,%edi
  4032db:	e8 20 e0 ff ff       	call   401300 <close@plt>
  4032e0:	b9 04 00 00 00       	mov    $0x4,%ecx
  4032e5:	48 8d 3d 61 15 00 00 	lea    0x1561(%rip),%rdi        # 40484d <trans_char+0xdd>
  4032ec:	48 89 ee             	mov    %rbp,%rsi
  4032ef:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  4032f1:	0f 97 c0             	seta   %al
  4032f4:	1c 00                	sbb    $0x0,%al
  4032f6:	0f be c0             	movsbl %al,%eax
  4032f9:	85 c0                	test   %eax,%eax
  4032fb:	0f 84 59 fc ff ff    	je     402f5a <submitr+0x2fd>
  403301:	b9 05 00 00 00       	mov    $0x5,%ecx
  403306:	48 8d 3d 44 15 00 00 	lea    0x1544(%rip),%rdi        # 404851 <trans_char+0xe1>
  40330d:	48 89 ee             	mov    %rbp,%rsi
  403310:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  403312:	0f 97 c0             	seta   %al
  403315:	1c 00                	sbb    $0x0,%al
  403317:	0f be c0             	movsbl %al,%eax
  40331a:	85 c0                	test   %eax,%eax
  40331c:	0f 84 38 fc ff ff    	je     402f5a <submitr+0x2fd>
  403322:	b9 03 00 00 00       	mov    $0x3,%ecx
  403327:	48 8d 3d 28 15 00 00 	lea    0x1528(%rip),%rdi        # 404856 <trans_char+0xe6>
  40332e:	48 89 ee             	mov    %rbp,%rsi
  403331:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  403333:	0f 97 c0             	seta   %al
  403336:	1c 00                	sbb    $0x0,%al
  403338:	0f be c0             	movsbl %al,%eax
  40333b:	85 c0                	test   %eax,%eax
  40333d:	0f 84 17 fc ff ff    	je     402f5a <submitr+0x2fd>
  403343:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403348:	e9 0d fc ff ff       	jmp    402f5a <submitr+0x2fd>
  40334d:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  403354:	3a 20 43 
  403357:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  40335e:	20 75 6e 
  403361:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403365:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  403369:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  403370:	74 6f 20 
  403373:	48 ba 72 65 61 64 20 	movabs $0x6174732064616572,%rdx
  40337a:	73 74 61 
  40337d:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403381:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403385:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
  40338c:	65 73 73 
  40338f:	48 ba 61 67 65 20 66 	movabs $0x6d6f726620656761,%rdx
  403396:	72 6f 6d 
  403399:	48 89 45 20          	mov    %rax,0x20(%rbp)
  40339d:	48 89 55 28          	mov    %rdx,0x28(%rbp)
  4033a1:	48 b8 20 41 75 74 6f 	movabs $0x62616c6f74754120,%rax
  4033a8:	6c 61 62 
  4033ab:	48 ba 20 73 65 72 76 	movabs $0x72657672657320,%rdx
  4033b2:	65 72 00 
  4033b5:	48 89 45 30          	mov    %rax,0x30(%rbp)
  4033b9:	48 89 55 38          	mov    %rdx,0x38(%rbp)
  4033bd:	89 df                	mov    %ebx,%edi
  4033bf:	e8 3c df ff ff       	call   401300 <close@plt>
  4033c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4033c9:	e9 8c fb ff ff       	jmp    402f5a <submitr+0x2fd>
  4033ce:	4c 8d 8c 24 50 80 00 	lea    0x8050(%rsp),%r9
  4033d5:	00 
  4033d6:	48 8d 0d 2b 14 00 00 	lea    0x142b(%rip),%rcx        # 404808 <trans_char+0x98>
  4033dd:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  4033e4:	be 01 00 00 00       	mov    $0x1,%esi
  4033e9:	48 89 ef             	mov    %rbp,%rdi
  4033ec:	b8 00 00 00 00       	mov    $0x0,%eax
  4033f1:	e8 5a e0 ff ff       	call   401450 <__sprintf_chk@plt>
  4033f6:	89 df                	mov    %ebx,%edi
  4033f8:	e8 03 df ff ff       	call   401300 <close@plt>
  4033fd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403402:	e9 53 fb ff ff       	jmp    402f5a <submitr+0x2fd>
  403407:	e8 47 f3 ff ff       	call   402753 <__stack_chk_fail>

000000000040340c <init_timeout>:
  40340c:	f3 0f 1e fa          	endbr64 
  403410:	85 ff                	test   %edi,%edi
  403412:	74 26                	je     40343a <init_timeout+0x2e>
  403414:	53                   	push   %rbx
  403415:	89 fb                	mov    %edi,%ebx
  403417:	78 1a                	js     403433 <init_timeout+0x27>
  403419:	48 8d 35 71 f5 ff ff 	lea    -0xa8f(%rip),%rsi        # 402991 <sigalrm_handler>
  403420:	bf 0e 00 00 00       	mov    $0xe,%edi
  403425:	e8 06 df ff ff       	call   401330 <signal@plt>
  40342a:	89 df                	mov    %ebx,%edi
  40342c:	e8 bf de ff ff       	call   4012f0 <alarm@plt>
  403431:	5b                   	pop    %rbx
  403432:	c3                   	ret    
  403433:	bb 00 00 00 00       	mov    $0x0,%ebx
  403438:	eb df                	jmp    403419 <init_timeout+0xd>
  40343a:	c3                   	ret    

000000000040343b <init_driver>:
  40343b:	f3 0f 1e fa          	endbr64 
  40343f:	41 54                	push   %r12
  403441:	55                   	push   %rbp
  403442:	53                   	push   %rbx
  403443:	48 83 ec 20          	sub    $0x20,%rsp
  403447:	48 89 fd             	mov    %rdi,%rbp
  40344a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  403451:	00 00 
  403453:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
  403458:	31 c0                	xor    %eax,%eax
  40345a:	be 01 00 00 00       	mov    $0x1,%esi
  40345f:	bf 0d 00 00 00       	mov    $0xd,%edi
  403464:	e8 c7 de ff ff       	call   401330 <signal@plt>
  403469:	be 01 00 00 00       	mov    $0x1,%esi
  40346e:	bf 1d 00 00 00       	mov    $0x1d,%edi
  403473:	e8 b8 de ff ff       	call   401330 <signal@plt>
  403478:	be 01 00 00 00       	mov    $0x1,%esi
  40347d:	bf 1d 00 00 00       	mov    $0x1d,%edi
  403482:	e8 a9 de ff ff       	call   401330 <signal@plt>
  403487:	ba 00 00 00 00       	mov    $0x0,%edx
  40348c:	be 01 00 00 00       	mov    $0x1,%esi
  403491:	bf 02 00 00 00       	mov    $0x2,%edi
  403496:	e8 c5 df ff ff       	call   401460 <socket@plt>
  40349b:	85 c0                	test   %eax,%eax
  40349d:	0f 88 9c 00 00 00    	js     40353f <init_driver+0x104>
  4034a3:	89 c3                	mov    %eax,%ebx
  4034a5:	48 8d 3d ad 13 00 00 	lea    0x13ad(%rip),%rdi        # 404859 <trans_char+0xe9>
  4034ac:	e8 8f de ff ff       	call   401340 <gethostbyname@plt>
  4034b1:	48 85 c0             	test   %rax,%rax
  4034b4:	0f 84 d1 00 00 00    	je     40358b <init_driver+0x150>
  4034ba:	49 89 e4             	mov    %rsp,%r12
  4034bd:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  4034c4:	00 
  4034c5:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
  4034cc:	00 00 
  4034ce:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
  4034d4:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4034d8:	48 8b 40 18          	mov    0x18(%rax),%rax
  4034dc:	48 8b 30             	mov    (%rax),%rsi
  4034df:	48 8d 7c 24 04       	lea    0x4(%rsp),%rdi
  4034e4:	b9 0c 00 00 00       	mov    $0xc,%ecx
  4034e9:	e8 62 de ff ff       	call   401350 <__memmove_chk@plt>
  4034ee:	66 c7 44 24 02 30 39 	movw   $0x3930,0x2(%rsp)
  4034f5:	ba 10 00 00 00       	mov    $0x10,%edx
  4034fa:	4c 89 e6             	mov    %r12,%rsi
  4034fd:	89 df                	mov    %ebx,%edi
  4034ff:	e8 1c df ff ff       	call   401420 <connect@plt>
  403504:	85 c0                	test   %eax,%eax
  403506:	0f 88 e7 00 00 00    	js     4035f3 <init_driver+0x1b8>
  40350c:	89 df                	mov    %ebx,%edi
  40350e:	e8 ed dd ff ff       	call   401300 <close@plt>
  403513:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
  403519:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
  40351d:	b8 00 00 00 00       	mov    $0x0,%eax
  403522:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
  403527:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  40352e:	00 00 
  403530:	0f 85 10 01 00 00    	jne    403646 <init_driver+0x20b>
  403536:	48 83 c4 20          	add    $0x20,%rsp
  40353a:	5b                   	pop    %rbx
  40353b:	5d                   	pop    %rbp
  40353c:	41 5c                	pop    %r12
  40353e:	c3                   	ret    
  40353f:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  403546:	3a 20 43 
  403549:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  403550:	20 75 6e 
  403553:	48 89 45 00          	mov    %rax,0x0(%rbp)
  403557:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40355b:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  403562:	74 6f 20 
  403565:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
  40356c:	65 20 73 
  40356f:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403573:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  403577:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  40357e:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  403584:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403589:	eb 97                	jmp    403522 <init_driver+0xe7>
  40358b:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  403592:	3a 20 44 
  403595:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
  40359c:	20 75 6e 
  40359f:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4035a3:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  4035a7:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4035ae:	74 6f 20 
  4035b1:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
  4035b8:	76 65 20 
  4035bb:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4035bf:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  4035c3:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  4035ca:	72 20 61 
  4035cd:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4035d1:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
  4035d8:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
  4035de:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  4035e2:	89 df                	mov    %ebx,%edi
  4035e4:	e8 17 dd ff ff       	call   401300 <close@plt>
  4035e9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4035ee:	e9 2f ff ff ff       	jmp    403522 <init_driver+0xe7>
  4035f3:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  4035fa:	3a 20 55 
  4035fd:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
  403604:	20 74 6f 
  403607:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40360b:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40360f:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  403616:	65 63 74 
  403619:	48 ba 20 74 6f 20 73 	movabs $0x76726573206f7420,%rdx
  403620:	65 72 76 
  403623:	48 89 45 10          	mov    %rax,0x10(%rbp)
  403627:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  40362b:	66 c7 45 20 65 72    	movw   $0x7265,0x20(%rbp)
  403631:	c6 45 22 00          	movb   $0x0,0x22(%rbp)
  403635:	89 df                	mov    %ebx,%edi
  403637:	e8 c4 dc ff ff       	call   401300 <close@plt>
  40363c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  403641:	e9 dc fe ff ff       	jmp    403522 <init_driver+0xe7>
  403646:	e8 08 f1 ff ff       	call   402753 <__stack_chk_fail>

000000000040364b <driver_post>:
  40364b:	f3 0f 1e fa          	endbr64 
  40364f:	53                   	push   %rbx
  403650:	4c 89 cb             	mov    %r9,%rbx
  403653:	45 85 c0             	test   %r8d,%r8d
  403656:	75 18                	jne    403670 <driver_post+0x25>
  403658:	48 85 ff             	test   %rdi,%rdi
  40365b:	74 05                	je     403662 <driver_post+0x17>
  40365d:	80 3f 00             	cmpb   $0x0,(%rdi)
  403660:	75 37                	jne    403699 <driver_post+0x4e>
  403662:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  403667:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  40366b:	44 89 c0             	mov    %r8d,%eax
  40366e:	5b                   	pop    %rbx
  40366f:	c3                   	ret    
  403670:	48 89 ca             	mov    %rcx,%rdx
  403673:	48 8d 35 ef 11 00 00 	lea    0x11ef(%rip),%rsi        # 404869 <trans_char+0xf9>
  40367a:	bf 01 00 00 00       	mov    $0x1,%edi
  40367f:	b8 00 00 00 00       	mov    $0x0,%eax
  403684:	e8 37 dd ff ff       	call   4013c0 <__printf_chk@plt>
  403689:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  40368e:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  403692:	b8 00 00 00 00       	mov    $0x0,%eax
  403697:	eb d5                	jmp    40366e <driver_post+0x23>
  403699:	48 83 ec 08          	sub    $0x8,%rsp
  40369d:	41 51                	push   %r9
  40369f:	49 89 c9             	mov    %rcx,%r9
  4036a2:	49 89 d0             	mov    %rdx,%r8
  4036a5:	48 89 f9             	mov    %rdi,%rcx
  4036a8:	48 89 f2             	mov    %rsi,%rdx
  4036ab:	be 39 30 00 00       	mov    $0x3039,%esi
  4036b0:	48 8d 3d a2 11 00 00 	lea    0x11a2(%rip),%rdi        # 404859 <trans_char+0xe9>
  4036b7:	e8 a1 f5 ff ff       	call   402c5d <submitr>
  4036bc:	48 83 c4 10          	add    $0x10,%rsp
  4036c0:	eb ac                	jmp    40366e <driver_post+0x23>

00000000004036c2 <check>:
  4036c2:	f3 0f 1e fa          	endbr64 
  4036c6:	89 f8                	mov    %edi,%eax
  4036c8:	c1 e8 1c             	shr    $0x1c,%eax
  4036cb:	74 1d                	je     4036ea <check+0x28>
  4036cd:	b9 00 00 00 00       	mov    $0x0,%ecx
  4036d2:	83 f9 1f             	cmp    $0x1f,%ecx
  4036d5:	7f 0d                	jg     4036e4 <check+0x22>
  4036d7:	89 f8                	mov    %edi,%eax
  4036d9:	d3 e8                	shr    %cl,%eax
  4036db:	3c 0a                	cmp    $0xa,%al
  4036dd:	74 11                	je     4036f0 <check+0x2e>
  4036df:	83 c1 08             	add    $0x8,%ecx
  4036e2:	eb ee                	jmp    4036d2 <check+0x10>
  4036e4:	b8 01 00 00 00       	mov    $0x1,%eax
  4036e9:	c3                   	ret    
  4036ea:	b8 00 00 00 00       	mov    $0x0,%eax
  4036ef:	c3                   	ret    
  4036f0:	b8 00 00 00 00       	mov    $0x0,%eax
  4036f5:	c3                   	ret    

00000000004036f6 <gencookie>:
  4036f6:	f3 0f 1e fa          	endbr64 
  4036fa:	53                   	push   %rbx
  4036fb:	83 c7 01             	add    $0x1,%edi
  4036fe:	e8 6d db ff ff       	call   401270 <srandom@plt>
  403703:	e8 88 dc ff ff       	call   401390 <random@plt>
  403708:	48 89 c7             	mov    %rax,%rdi
  40370b:	89 c3                	mov    %eax,%ebx
  40370d:	e8 b0 ff ff ff       	call   4036c2 <check>
  403712:	85 c0                	test   %eax,%eax
  403714:	74 ed                	je     403703 <gencookie+0xd>
  403716:	89 d8                	mov    %ebx,%eax
  403718:	5b                   	pop    %rbx
  403719:	c3                   	ret    
  40371a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000403720 <__libc_csu_init>:
  403720:	f3 0f 1e fa          	endbr64 
  403724:	41 57                	push   %r15
  403726:	4c 8d 3d e3 36 00 00 	lea    0x36e3(%rip),%r15        # 406e10 <__frame_dummy_init_array_entry>
  40372d:	41 56                	push   %r14
  40372f:	49 89 d6             	mov    %rdx,%r14
  403732:	41 55                	push   %r13
  403734:	49 89 f5             	mov    %rsi,%r13
  403737:	41 54                	push   %r12
  403739:	41 89 fc             	mov    %edi,%r12d
  40373c:	55                   	push   %rbp
  40373d:	48 8d 2d d4 36 00 00 	lea    0x36d4(%rip),%rbp        # 406e18 <__do_global_dtors_aux_fini_array_entry>
  403744:	53                   	push   %rbx
  403745:	4c 29 fd             	sub    %r15,%rbp
  403748:	48 83 ec 08          	sub    $0x8,%rsp
  40374c:	e8 af d8 ff ff       	call   401000 <_init>
  403751:	48 c1 fd 03          	sar    $0x3,%rbp
  403755:	74 1f                	je     403776 <__libc_csu_init+0x56>
  403757:	31 db                	xor    %ebx,%ebx
  403759:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
  403760:	4c 89 f2             	mov    %r14,%rdx
  403763:	4c 89 ee             	mov    %r13,%rsi
  403766:	44 89 e7             	mov    %r12d,%edi
  403769:	41 ff 14 df          	call   *(%r15,%rbx,8)
  40376d:	48 83 c3 01          	add    $0x1,%rbx
  403771:	48 39 dd             	cmp    %rbx,%rbp
  403774:	75 ea                	jne    403760 <__libc_csu_init+0x40>
  403776:	48 83 c4 08          	add    $0x8,%rsp
  40377a:	5b                   	pop    %rbx
  40377b:	5d                   	pop    %rbp
  40377c:	41 5c                	pop    %r12
  40377e:	41 5d                	pop    %r13
  403780:	41 5e                	pop    %r14
  403782:	41 5f                	pop    %r15
  403784:	c3                   	ret    
  403785:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
  40378c:	00 00 00 00 

0000000000403790 <__libc_csu_fini>:
  403790:	f3 0f 1e fa          	endbr64 
  403794:	c3                   	ret    

Disassembly of section .fini:

0000000000403798 <_fini>:
  403798:	f3 0f 1e fa          	endbr64 
  40379c:	48 83 ec 08          	sub    $0x8,%rsp
  4037a0:	48 83 c4 08          	add    $0x8,%rsp
  4037a4:	c3                   	ret    
