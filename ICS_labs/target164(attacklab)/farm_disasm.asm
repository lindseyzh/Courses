
farm.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <start_farm>:
   0:	f3 0f 1e fa          	endbr64 
   4:	55                   	push   %rbp
   5:	48 89 e5             	mov    %rsp,%rbp
   8:	b8 01 00 00 00       	mov    $0x1,%eax
   d:	5d                   	pop    %rbp
   e:	c3                   	ret    

000000000000000f <addval_432>:
   f:	f3 0f 1e fa          	endbr64 
  13:	55                   	push   %rbp
  14:	48 89 e5             	mov    %rsp,%rbp
  17:	89 7d fc             	mov    %edi,-0x4(%rbp)
  1a:	8b 45 fc             	mov    -0x4(%rbp),%eax
  1d:	2d b8 76 38 38       	sub    $0x383876b8,%eax
  22:	5d                   	pop    %rbp
  23:	c3                   	ret    

0000000000000024 <addval_153>:
  24:	f3 0f 1e fa          	endbr64 
  28:	55                   	push   %rbp
  29:	48 89 e5             	mov    %rsp,%rbp
  2c:	89 7d fc             	mov    %edi,-0x4(%rbp)
  2f:	8b 45 fc             	mov    -0x4(%rbp),%eax
  32:	2d b8 76 38 3c       	sub    $0x3c3876b8,%eax
  37:	5d                   	pop    %rbp
  38:	c3                   	ret    

0000000000000039 <addval_366>:
  39:	f3 0f 1e fa          	endbr64 
  3d:	55                   	push   %rbp
  3e:	48 89 e5             	mov    %rsp,%rbp
  41:	89 7d fc             	mov    %edi,-0x4(%rbp)
  44:	8b 45 fc             	mov    -0x4(%rbp),%eax
  47:	2d 3f a7 6f 3c       	sub    $0x3c6fa73f,%eax
  4c:	5d                   	pop    %rbp
  4d:	c3                   	ret    

000000000000004e <getval_307>:
  4e:	f3 0f 1e fa          	endbr64 
  52:	55                   	push   %rbp
  53:	48 89 e5             	mov    %rsp,%rbp
  56:	b8 c7 58 90 c3       	mov    $0xc39058c7,%eax
  5b:	5d                   	pop    %rbp
  5c:	c3                   	ret    

000000000000005d <setval_359>:
  5d:	f3 0f 1e fa          	endbr64 
  61:	55                   	push   %rbp
  62:	48 89 e5             	mov    %rsp,%rbp
  65:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  69:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  6d:	c7 00 48 89 c7 c1    	movl   $0xc1c78948,(%rax)
  73:	90                   	nop
  74:	5d                   	pop    %rbp
  75:	c3                   	ret    

0000000000000076 <setval_468>:
  76:	f3 0f 1e fa          	endbr64 
  7a:	55                   	push   %rbp
  7b:	48 89 e5             	mov    %rsp,%rbp
  7e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  82:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  86:	c7 00 48 90 90 c3    	movl   $0xc3909048,(%rax)
  8c:	90                   	nop
  8d:	5d                   	pop    %rbp
  8e:	c3                   	ret    

000000000000008f <addval_145>:
  8f:	f3 0f 1e fa          	endbr64 
  93:	55                   	push   %rbp
  94:	48 89 e5             	mov    %rsp,%rbp
  97:	89 7d fc             	mov    %edi,-0x4(%rbp)
  9a:	8b 45 fc             	mov    -0x4(%rbp),%eax
  9d:	2d bb a7 6b 6f       	sub    $0x6f6ba7bb,%eax
  a2:	5d                   	pop    %rbp
  a3:	c3                   	ret    

00000000000000a4 <addval_406>:
  a4:	f3 0f 1e fa          	endbr64 
  a8:	55                   	push   %rbp
  a9:	48 89 e5             	mov    %rsp,%rbp
  ac:	89 7d fc             	mov    %edi,-0x4(%rbp)
  af:	8b 45 fc             	mov    -0x4(%rbp),%eax
  b2:	2d da b7 76 38       	sub    $0x3876b7da,%eax
  b7:	5d                   	pop    %rbp
  b8:	c3                   	ret    

00000000000000b9 <mid_farm>:
  b9:	f3 0f 1e fa          	endbr64 
  bd:	55                   	push   %rbp
  be:	48 89 e5             	mov    %rsp,%rbp
  c1:	b8 01 00 00 00       	mov    $0x1,%eax
  c6:	5d                   	pop    %rbp
  c7:	c3                   	ret    

00000000000000c8 <add_xy>:
  c8:	f3 0f 1e fa          	endbr64 
  cc:	55                   	push   %rbp
  cd:	48 89 e5             	mov    %rsp,%rbp
  d0:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  d4:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  d8:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  dc:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  e0:	48 01 d0             	add    %rdx,%rax
  e3:	5d                   	pop    %rbp
  e4:	c3                   	ret    

00000000000000e5 <addval_407>:
  e5:	f3 0f 1e fa          	endbr64 
  e9:	55                   	push   %rbp
  ea:	48 89 e5             	mov    %rsp,%rbp
  ed:	89 7d fc             	mov    %edi,-0x4(%rbp)
  f0:	8b 45 fc             	mov    -0x4(%rbp),%eax
  f3:	2d b8 76 1f 6e       	sub    $0x6e1f76b8,%eax
  f8:	5d                   	pop    %rbp
  f9:	c3                   	ret    

00000000000000fa <getval_416>:
  fa:	f3 0f 1e fa          	endbr64 
  fe:	55                   	push   %rbp
  ff:	48 89 e5             	mov    %rsp,%rbp
 102:	b8 88 c1 90 90       	mov    $0x9090c188,%eax
 107:	5d                   	pop    %rbp
 108:	c3                   	ret    

0000000000000109 <setval_346>:
 109:	f3 0f 1e fa          	endbr64 
 10d:	55                   	push   %rbp
 10e:	48 89 e5             	mov    %rsp,%rbp
 111:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 115:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 119:	c7 00 89 ca 20 c9    	movl   $0xc920ca89,(%rax)
 11f:	90                   	nop
 120:	5d                   	pop    %rbp
 121:	c3                   	ret    

0000000000000122 <addval_341>:
 122:	f3 0f 1e fa          	endbr64 
 126:	55                   	push   %rbp
 127:	48 89 e5             	mov    %rsp,%rbp
 12a:	89 7d fc             	mov    %edi,-0x4(%rbp)
 12d:	8b 45 fc             	mov    -0x4(%rbp),%eax
 130:	2d 77 29 f7 2d       	sub    $0x2df72977,%eax
 135:	5d                   	pop    %rbp
 136:	c3                   	ret    

0000000000000137 <setval_324>:
 137:	f3 0f 1e fa          	endbr64 
 13b:	55                   	push   %rbp
 13c:	48 89 e5             	mov    %rsp,%rbp
 13f:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 143:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 147:	c7 00 89 d6 30 c9    	movl   $0xc930d689,(%rax)
 14d:	90                   	nop
 14e:	5d                   	pop    %rbp
 14f:	c3                   	ret    

0000000000000150 <addval_329>:
 150:	f3 0f 1e fa          	endbr64 
 154:	55                   	push   %rbp
 155:	48 89 e5             	mov    %rsp,%rbp
 158:	89 7d fc             	mov    %edi,-0x4(%rbp)
 15b:	8b 45 fc             	mov    -0x4(%rbp),%eax
 15e:	2d 77 3e 6f 3d       	sub    $0x3d6f3e77,%eax
 163:	5d                   	pop    %rbp
 164:	c3                   	ret    

0000000000000165 <getval_201>:
 165:	f3 0f 1e fa          	endbr64 
 169:	55                   	push   %rbp
 16a:	48 89 e5             	mov    %rsp,%rbp
 16d:	b8 89 d6 91 90       	mov    $0x9091d689,%eax
 172:	5d                   	pop    %rbp
 173:	c3                   	ret    

0000000000000174 <addval_240>:
 174:	f3 0f 1e fa          	endbr64 
 178:	55                   	push   %rbp
 179:	48 89 e5             	mov    %rsp,%rbp
 17c:	89 7d fc             	mov    %edi,-0x4(%rbp)
 17f:	8b 45 fc             	mov    -0x4(%rbp),%eax
 182:	2d 77 35 d7 24       	sub    $0x24d73577,%eax
 187:	5d                   	pop    %rbp
 188:	c3                   	ret    

0000000000000189 <getval_347>:
 189:	f3 0f 1e fa          	endbr64 
 18d:	55                   	push   %rbp
 18e:	48 89 e5             	mov    %rsp,%rbp
 191:	b8 89 c1 38 c0       	mov    $0xc038c189,%eax
 196:	5d                   	pop    %rbp
 197:	c3                   	ret    

0000000000000198 <getval_358>:
 198:	f3 0f 1e fa          	endbr64 
 19c:	55                   	push   %rbp
 19d:	48 89 e5             	mov    %rsp,%rbp
 1a0:	b8 89 ca 18 db       	mov    $0xdb18ca89,%eax
 1a5:	5d                   	pop    %rbp
 1a6:	c3                   	ret    

00000000000001a7 <setval_270>:
 1a7:	f3 0f 1e fa          	endbr64 
 1ab:	55                   	push   %rbp
 1ac:	48 89 e5             	mov    %rsp,%rbp
 1af:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1b3:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1b7:	c7 00 29 a9 c1 c3    	movl   $0xc3c1a929,(%rax)
 1bd:	90                   	nop
 1be:	5d                   	pop    %rbp
 1bf:	c3                   	ret    

00000000000001c0 <getval_355>:
 1c0:	f3 0f 1e fa          	endbr64 
 1c4:	55                   	push   %rbp
 1c5:	48 89 e5             	mov    %rsp,%rbp
 1c8:	b8 89 d6 08 c9       	mov    $0xc908d689,%eax
 1cd:	5d                   	pop    %rbp
 1ce:	c3                   	ret    

00000000000001cf <setval_328>:
 1cf:	f3 0f 1e fa          	endbr64 
 1d3:	55                   	push   %rbp
 1d4:	48 89 e5             	mov    %rsp,%rbp
 1d7:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1db:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1df:	c7 00 89 ca 08 c9    	movl   $0xc908ca89,(%rax)
 1e5:	90                   	nop
 1e6:	5d                   	pop    %rbp
 1e7:	c3                   	ret    

00000000000001e8 <addval_265>:
 1e8:	f3 0f 1e fa          	endbr64 
 1ec:	55                   	push   %rbp
 1ed:	48 89 e5             	mov    %rsp,%rbp
 1f0:	89 7d fc             	mov    %edi,-0x4(%rbp)
 1f3:	8b 45 fc             	mov    -0x4(%rbp),%eax
 1f6:	2d 57 35 c7 3f       	sub    $0x3fc73557,%eax
 1fb:	5d                   	pop    %rbp
 1fc:	c3                   	ret    

00000000000001fd <setval_283>:
 1fd:	f3 0f 1e fa          	endbr64 
 201:	55                   	push   %rbp
 202:	48 89 e5             	mov    %rsp,%rbp
 205:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 209:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 20d:	c7 00 48 89 e0 c1    	movl   $0xc1e08948,(%rax)
 213:	90                   	nop
 214:	5d                   	pop    %rbp
 215:	c3                   	ret    

0000000000000216 <setval_414>:
 216:	f3 0f 1e fa          	endbr64 
 21a:	55                   	push   %rbp
 21b:	48 89 e5             	mov    %rsp,%rbp
 21e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 222:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 226:	c7 00 89 c1 28 d2    	movl   $0xd228c189,(%rax)
 22c:	90                   	nop
 22d:	5d                   	pop    %rbp
 22e:	c3                   	ret    

000000000000022f <addval_286>:
 22f:	f3 0f 1e fa          	endbr64 
 233:	55                   	push   %rbp
 234:	48 89 e5             	mov    %rsp,%rbp
 237:	89 7d fc             	mov    %edi,-0x4(%rbp)
 23a:	8b 45 fc             	mov    -0x4(%rbp),%eax
 23d:	2d b8 76 1f 3c       	sub    $0x3c1f76b8,%eax
 242:	5d                   	pop    %rbp
 243:	c3                   	ret    

0000000000000244 <setval_345>:
 244:	f3 0f 1e fa          	endbr64 
 248:	55                   	push   %rbp
 249:	48 89 e5             	mov    %rsp,%rbp
 24c:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 250:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 254:	c7 00 89 c1 38 d2    	movl   $0xd238c189,(%rax)
 25a:	90                   	nop
 25b:	5d                   	pop    %rbp
 25c:	c3                   	ret    

000000000000025d <setval_164>:
 25d:	f3 0f 1e fa          	endbr64 
 261:	55                   	push   %rbp
 262:	48 89 e5             	mov    %rsp,%rbp
 265:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 269:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 26d:	c7 00 f3 48 81 e0    	movl   $0xe08148f3,(%rax)
 273:	90                   	nop
 274:	5d                   	pop    %rbp
 275:	c3                   	ret    

0000000000000276 <setval_100>:
 276:	f3 0f 1e fa          	endbr64 
 27a:	55                   	push   %rbp
 27b:	48 89 e5             	mov    %rsp,%rbp
 27e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 282:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 286:	c7 00 88 d6 08 db    	movl   $0xdb08d688,(%rax)
 28c:	90                   	nop
 28d:	5d                   	pop    %rbp
 28e:	c3                   	ret    

000000000000028f <setval_186>:
 28f:	f3 0f 1e fa          	endbr64 
 293:	55                   	push   %rbp
 294:	48 89 e5             	mov    %rsp,%rbp
 297:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 29b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 29f:	c7 00 81 c1 38 c0    	movl   $0xc038c181,(%rax)
 2a5:	90                   	nop
 2a6:	5d                   	pop    %rbp
 2a7:	c3                   	ret    

00000000000002a8 <getval_321>:
 2a8:	f3 0f 1e fa          	endbr64 
 2ac:	55                   	push   %rbp
 2ad:	48 89 e5             	mov    %rsp,%rbp
 2b0:	b8 48 89 e0 91       	mov    $0x91e08948,%eax
 2b5:	5d                   	pop    %rbp
 2b6:	c3                   	ret    

00000000000002b7 <addval_260>:
 2b7:	f3 0f 1e fa          	endbr64 
 2bb:	55                   	push   %rbp
 2bc:	48 89 e5             	mov    %rsp,%rbp
 2bf:	89 7d fc             	mov    %edi,-0x4(%rbp)
 2c2:	8b 45 fc             	mov    -0x4(%rbp),%eax
 2c5:	2d 77 29 5b 36       	sub    $0x365b2977,%eax
 2ca:	5d                   	pop    %rbp
 2cb:	c3                   	ret    

00000000000002cc <getval_220>:
 2cc:	f3 0f 1e fa          	endbr64 
 2d0:	55                   	push   %rbp
 2d1:	48 89 e5             	mov    %rsp,%rbp
 2d4:	b8 48 89 e0 c3       	mov    $0xc3e08948,%eax
 2d9:	5d                   	pop    %rbp
 2da:	c3                   	ret    

00000000000002db <setval_290>:
 2db:	f3 0f 1e fa          	endbr64 
 2df:	55                   	push   %rbp
 2e0:	48 89 e5             	mov    %rsp,%rbp
 2e3:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 2e7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 2eb:	c7 00 48 89 e0 c7    	movl   $0xc7e08948,(%rax)
 2f1:	90                   	nop
 2f2:	5d                   	pop    %rbp
 2f3:	c3                   	ret    

00000000000002f4 <getval_486>:
 2f4:	f3 0f 1e fa          	endbr64 
 2f8:	55                   	push   %rbp
 2f9:	48 89 e5             	mov    %rsp,%rbp
 2fc:	b8 48 89 e0 c1       	mov    $0xc1e08948,%eax
 301:	5d                   	pop    %rbp
 302:	c3                   	ret    

0000000000000303 <setval_247>:
 303:	f3 0f 1e fa          	endbr64 
 307:	55                   	push   %rbp
 308:	48 89 e5             	mov    %rsp,%rbp
 30b:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 30f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 313:	c7 00 89 ca 91 c3    	movl   $0xc391ca89,(%rax)
 319:	90                   	nop
 31a:	5d                   	pop    %rbp
 31b:	c3                   	ret    

000000000000031c <setval_427>:
 31c:	f3 0f 1e fa          	endbr64 
 320:	55                   	push   %rbp
 321:	48 89 e5             	mov    %rsp,%rbp
 324:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 328:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 32c:	c7 00 88 c1 90 90    	movl   $0x9090c188,(%rax)
 332:	90                   	nop
 333:	5d                   	pop    %rbp
 334:	c3                   	ret    

0000000000000335 <addval_441>:
 335:	f3 0f 1e fa          	endbr64 
 339:	55                   	push   %rbp
 33a:	48 89 e5             	mov    %rsp,%rbp
 33d:	89 7d fc             	mov    %edi,-0x4(%rbp)
 340:	8b 45 fc             	mov    -0x4(%rbp),%eax
 343:	05 8d ca c3 31       	add    $0x31c3ca8d,%eax
 348:	5d                   	pop    %rbp
 349:	c3                   	ret    

000000000000034a <getval_193>:
 34a:	f3 0f 1e fa          	endbr64 
 34e:	55                   	push   %rbp
 34f:	48 89 e5             	mov    %rsp,%rbp
 352:	b8 09 ca 90 90       	mov    $0x9090ca09,%eax
 357:	5d                   	pop    %rbp
 358:	c3                   	ret    

0000000000000359 <setval_489>:
 359:	f3 0f 1e fa          	endbr64 
 35d:	55                   	push   %rbp
 35e:	48 89 e5             	mov    %rsp,%rbp
 361:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 365:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 369:	c7 00 a9 d6 38 d2    	movl   $0xd238d6a9,(%rax)
 36f:	90                   	nop
 370:	5d                   	pop    %rbp
 371:	c3                   	ret    

0000000000000372 <addval_405>:
 372:	f3 0f 1e fa          	endbr64 
 376:	55                   	push   %rbp
 377:	48 89 e5             	mov    %rsp,%rbp
 37a:	89 7d fc             	mov    %edi,-0x4(%rbp)
 37d:	8b 45 fc             	mov    -0x4(%rbp),%eax
 380:	2d 78 29 c7 24       	sub    $0x24c72978,%eax
 385:	5d                   	pop    %rbp
 386:	c3                   	ret    

0000000000000387 <end_farm>:
 387:	f3 0f 1e fa          	endbr64 
 38b:	55                   	push   %rbp
 38c:	48 89 e5             	mov    %rsp,%rbp
 38f:	b8 01 00 00 00       	mov    $0x1,%eax
 394:	5d                   	pop    %rbp
 395:	c3                   	ret    
