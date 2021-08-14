
build/stm32l452re.o:     file format elf32-littlearm


Disassembly of section .data:

00000000 <RCC>:
   0:	40021000 	andmi	r1, r2, r0

00000004 <GPIOA>:
   4:	48000000 	stmdami	r0, {}	; <UNPREDICTABLE>

00000008 <GPIOB>:
   8:	48000400 	stmdami	r0, {sl}

0000000c <GPIOC>:
   c:	48000800 	stmdami	r0, {fp}

00000010 <GPIOD>:
  10:	48000c00 	stmdami	r0, {sl, fp}

00000014 <GPIOE>:
  14:	48001000 	stmdami	r0, {ip}

00000018 <GPIOH>:
  18:	48001c00 	stmdami	r0, {sl, fp, ip}

0000001c <PWR>:
  1c:	40007000 	andmi	r7, r0, r0

00000020 <FLASH>:
  20:	40022000 	andmi	r2, r2, r0

00000024 <STK>:
  24:	e000e010 	and	lr, r0, r0, lsl r0

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000705 	andeq	r0, r0, r5, lsl #14
   4:	00000004 	andeq	r0, r0, r4
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	0000019d 	muleq	r0, sp, r1
  10:	0002b90c 	andeq	fp, r2, ip, lsl #18
  14:	00035000 	andeq	r5, r3, r0
  18:	00000000 	andeq	r0, r0, r0
  1c:	06010200 	streq	r0, [r1], -r0, lsl #4
  20:	0000011d 	andeq	r0, r0, sp, lsl r1
  24:	35080102 	strcc	r0, [r8, #-258]	; 0xfffffefe
  28:	02000003 	andeq	r0, r0, #3
  2c:	03720502 	cmneq	r2, #8388608	; 0x800000
  30:	02020000 	andeq	r0, r2, #0
  34:	00028007 	andeq	r8, r2, r7
  38:	05040200 	streq	r0, [r4, #-512]	; 0xfffffe00
  3c:	0000016f 	andeq	r0, r0, pc, ror #2
  40:	00021e03 	andeq	r1, r2, r3, lsl #28
  44:	194f0100 	stmdbne	pc, {r8}^	; <UNPREDICTABLE>
  48:	0000004c 	andeq	r0, r0, ip, asr #32
  4c:	5f070402 	svcpl	0x00070402
  50:	02000002 	andeq	r0, r0, #2
  54:	010f0508 	tsteq	pc, r8, lsl #10
  58:	08020000 	stmdaeq	r2, {}	; <UNPREDICTABLE>
  5c:	0000e607 	andeq	lr, r0, r7, lsl #12
  60:	05040400 	streq	r0, [r4, #-1024]	; 0xfffffc00
  64:	00746e69 	rsbseq	r6, r4, r9, ror #28
  68:	3c070402 	cfstrscc	mvf0, [r7], {2}
  6c:	03000002 	movweq	r0, #2
  70:	00000408 	andeq	r0, r0, r8, lsl #8
  74:	40143002 	andsmi	r3, r4, r2
  78:	05000000 	streq	r0, [r0, #-0]
  7c:	0000006f 	andeq	r0, r0, pc, rrx
  80:	de03a006 	cdple	0, 0, cr10, cr3, cr6, {0}
  84:	00029909 	andeq	r9, r2, r9, lsl #18
  88:	52430700 	subpl	r0, r3, #0, 14
  8c:	17e00300 	strbne	r0, [r0, r0, lsl #6]!
  90:	0000007b 	andeq	r0, r0, fp, ror r0
  94:	047a0800 	ldrbteq	r0, [sl], #-2048	; 0xfffff800
  98:	e1030000 	mrs	r0, (UNDEF: 3)
  9c:	00007b17 	andeq	r7, r0, r7, lsl fp
  a0:	88080400 	stmdahi	r8, {sl}
  a4:	03000004 	movweq	r0, #4
  a8:	007b17e2 	rsbseq	r1, fp, r2, ror #15
  ac:	08080000 	stmdaeq	r8, {}	; <UNPREDICTABLE>
  b0:	0000029d 	muleq	r0, sp, r2
  b4:	7b17e303 	blvc	5f8cc8 <STK+0x5f8ca4>
  b8:	0c000000 	stceq	0, cr0, [r0], {-0}
  bc:	00046908 	andeq	r6, r4, r8, lsl #18
  c0:	17e40300 	strbne	r0, [r4, r0, lsl #6]!
  c4:	0000007b 	andeq	r0, r0, fp, ror r0
  c8:	00300810 	eorseq	r0, r0, r0, lsl r8
  cc:	e5030000 	str	r0, [r3, #-0]
  d0:	00006f17 	andeq	r6, r0, r7, lsl pc
  d4:	0a081400 	beq	2050dc <STK+0x2050b8>
  d8:	03000001 	movweq	r0, #1
  dc:	007b17e6 	rsbseq	r1, fp, r6, ror #15
  e0:	08180000 	ldmdaeq	r8, {}	; <UNPREDICTABLE>
  e4:	0000020a 	andeq	r0, r0, sl, lsl #4
  e8:	7b17e703 	blvc	5f9cfc <STK+0x5f9cd8>
  ec:	1c000000 	stcne	0, cr0, [r0], {-0}
  f0:	00046408 	andeq	r6, r4, r8, lsl #8
  f4:	17e80300 	strbne	r0, [r8, r0, lsl #6]!
  f8:	0000007b 	andeq	r0, r0, fp, ror r0
  fc:	00460820 	subeq	r0, r6, r0, lsr #16
 100:	e9030000 	stmdb	r3, {}	; <UNPREDICTABLE>
 104:	00006f17 	andeq	r6, r0, r7, lsl pc
 108:	2e082400 	cfcpyscs	mvf2, mvf8
 10c:	03000001 	movweq	r0, #1
 110:	007b17ea 	rsbseq	r1, fp, sl, ror #15
 114:	08280000 	stmdaeq	r8!, {}	; <UNPREDICTABLE>
 118:	00000416 	andeq	r0, r0, r6, lsl r4
 11c:	7b17eb03 	blvc	5fad30 <STK+0x5fad0c>
 120:	2c000000 	stccs	0, cr0, [r0], {-0}
 124:	00039f08 	andeq	r9, r3, r8, lsl #30
 128:	17ec0300 	strbne	r0, [ip, r0, lsl #6]!
 12c:	0000007b 	andeq	r0, r0, fp, ror r0
 130:	005c0830 	subseq	r0, ip, r0, lsr r8
 134:	ed030000 	stc	0, cr0, [r3, #-0]
 138:	00006f17 	andeq	r6, r0, r7, lsl pc
 13c:	81083400 	tsthi	r8, r0, lsl #8
 140:	03000001 	movweq	r0, #1
 144:	007b17ee 	rsbseq	r1, fp, lr, ror #15
 148:	08380000 	ldmdaeq	r8!, {}	; <UNPREDICTABLE>
 14c:	0000018b 	andeq	r0, r0, fp, lsl #3
 150:	7b17ef03 	blvc	5fbd64 <STK+0x5fbd40>
 154:	3c000000 	stccc	0, cr0, [r0], {-0}
 158:	00017808 	andeq	r7, r1, r8, lsl #16
 15c:	17f00300 	ldrbne	r0, [r0, r0, lsl #6]!
 160:	0000007b 	andeq	r0, r0, fp, ror r0
 164:	00720840 	rsbseq	r0, r2, r0, asr #16
 168:	f1030000 			; <UNDEFINED> instruction: 0xf1030000
 16c:	00006f17 	andeq	r6, r0, r7, lsl pc
 170:	80084400 	andhi	r4, r8, r0, lsl #8
 174:	03000004 	movweq	r0, #4
 178:	007b17f2 	ldrshteq	r1, [fp], #-114	; 0xffffff8e
 17c:	08480000 	stmdaeq	r8, {}^	; <UNPREDICTABLE>
 180:	00000433 	andeq	r0, r0, r3, lsr r4
 184:	7b17f303 	blvc	5fcd98 <STK+0x5fcd74>
 188:	4c000000 	stcmi	0, cr0, [r0], {-0}
 18c:	0003be08 	andeq	fp, r3, r8, lsl #28
 190:	17f40300 	ldrbne	r0, [r4, r0, lsl #6]!
 194:	0000007b 	andeq	r0, r0, fp, ror r0
 198:	00880850 	addeq	r0, r8, r0, asr r8
 19c:	f5030000 			; <UNDEFINED> instruction: 0xf5030000
 1a0:	00006f17 	andeq	r6, r0, r7, lsl pc
 1a4:	fc085400 	stc2	4, cr5, [r8], {-0}
 1a8:	03000002 	movweq	r0, #2
 1ac:	007b17f6 	ldrshteq	r1, [fp], #-118	; 0xffffff8a
 1b0:	08580000 	ldmdaeq	r8, {}^	; <UNPREDICTABLE>
 1b4:	00000305 	andeq	r0, r0, r5, lsl #6
 1b8:	7b17f703 	blvc	5fddcc <STK+0x5fdda8>
 1bc:	5c000000 	stcpl	0, cr0, [r0], {-0}
 1c0:	00039708 	andeq	r9, r3, r8, lsl #14
 1c4:	17f80300 	ldrbne	r0, [r8, r0, lsl #6]!
 1c8:	0000007b 	andeq	r0, r0, fp, ror r0
 1cc:	03820860 	orreq	r0, r2, #96, 16	; 0x600000
 1d0:	f9030000 			; <UNDEFINED> instruction: 0xf9030000
 1d4:	00006f17 	andeq	r6, r0, r7, lsl pc
 1d8:	37086400 	strcc	r6, [r8, -r0, lsl #8]
 1dc:	03000001 	movweq	r0, #1
 1e0:	007b17fa 	ldrshteq	r1, [fp], #-122	; 0xffffff86
 1e4:	08680000 	stmdaeq	r8!, {}^	; <UNPREDICTABLE>
 1e8:	00000229 	andeq	r0, r0, r9, lsr #4
 1ec:	7b17fb03 	blvc	5fee00 <STK+0x5feddc>
 1f0:	6c000000 	stcvs	0, cr0, [r0], {-0}
 1f4:	00029308 	andeq	r9, r2, r8, lsl #6
 1f8:	17fc0300 	ldrbne	r0, [ip, r0, lsl #6]!
 1fc:	0000007b 	andeq	r0, r0, fp, ror r0
 200:	009e0870 	addseq	r0, lr, r0, ror r8
 204:	fd030000 	stc2	0, cr0, [r3, #-0]
 208:	00006f17 	andeq	r6, r0, r7, lsl pc
 20c:	93087400 	movwls	r7, #33792	; 0x8400
 210:	03000004 	movweq	r0, #4
 214:	007b17fe 	ldrshteq	r1, [fp], #-126	; 0xffffff82
 218:	08780000 	ldmdaeq	r8!, {}^	; <UNPREDICTABLE>
 21c:	0000049e 	muleq	r0, lr, r4
 220:	7b17ff03 	blvc	5ffe34 <STK+0x5ffe10>
 224:	7c000000 	stcvc	0, cr0, [r0], {-0}
 228:	00014109 	andeq	r4, r1, r9, lsl #2
 22c:	01000300 	mrseq	r0, LR_irq
 230:	00007b17 	andeq	r7, r0, r7, lsl fp
 234:	b4098000 	strlt	r8, [r9], #-0
 238:	03000000 	movweq	r0, #0
 23c:	6f170101 	svcvs	0x00170101
 240:	84000000 	strhi	r0, [r0], #-0
 244:	00048d09 	andeq	r8, r4, r9, lsl #26
 248:	01020300 	mrseq	r0, LR_svc
 24c:	00007b17 	andeq	r7, r0, r7, lsl fp
 250:	ca098800 	bgt	262258 <STK+0x262234>
 254:	03000000 	movweq	r0, #0
 258:	6f170103 	svcvs	0x00170103
 25c:	8c000000 	stchi	0, cr0, [r0], {-0}
 260:	00047509 	andeq	r7, r4, r9, lsl #10
 264:	01040300 	mrseq	r0, LR_abt
 268:	00007b17 	andeq	r7, r0, r7, lsl fp
 26c:	430a9000 	movwmi	r9, #40960	; 0xa000
 270:	03005253 	movweq	r5, #595	; 0x253
 274:	7b170105 	blvc	5c0690 <STK+0x5c066c>
 278:	94000000 	strls	r0, [r0], #-0
 27c:	00037c09 	andeq	r7, r3, r9, lsl #24
 280:	01060300 	mrseq	r0, LR_und
 284:	00007b17 	andeq	r7, r0, r7, lsl fp
 288:	fd099800 	stc2	8, cr9, [r9, #-0]
 28c:	03000000 	movweq	r0, #0
 290:	7b170107 	blvc	5c06b4 <STK+0x5c0690>
 294:	9c000000 	stcls	0, cr0, [r0], {-0}
 298:	03430b00 	movteq	r0, #15104	; 0x3b00
 29c:	08030000 	stmdaeq	r3, {}	; <UNPREDICTABLE>
 2a0:	00800301 	addeq	r0, r0, r1, lsl #6
 2a4:	2c0c0000 	stccs	0, cr0, [ip], {-0}
 2a8:	09010a03 	stmdbeq	r1, {r0, r1, r9, fp}
 2ac:	0000034b 	andeq	r0, r0, fp, asr #6
 2b0:	0000e009 	andeq	lr, r0, r9
 2b4:	010c0300 	mrseq	r0, LR_mon
 2b8:	00007b17 	andeq	r7, r0, r7, lsl fp
 2bc:	29090000 	stmdbcs	r9, {}	; <UNPREDICTABLE>
 2c0:	03000000 	movweq	r0, #0
 2c4:	7b17010d 	blvc	5c0700 <STK+0x5c06dc>
 2c8:	04000000 	streq	r0, [r0], #-0
 2cc:	00021609 	andeq	r1, r2, r9, lsl #12
 2d0:	010e0300 	mrseq	r0, ELR_hyp
 2d4:	00007b17 	andeq	r7, r0, r7, lsl fp
 2d8:	00090800 	andeq	r0, r9, r0, lsl #16
 2dc:	03000000 	movweq	r0, #0
 2e0:	7b17010f 	blvc	5c0724 <STK+0x5c0700>
 2e4:	0c000000 	stceq	0, cr0, [r0], {-0}
 2e8:	5244490a 	subpl	r4, r4, #163840	; 0x28000
 2ec:	01100300 	tsteq	r0, r0, lsl #6
 2f0:	00007b17 	andeq	r7, r0, r7, lsl fp
 2f4:	4f0a1000 	svcmi	0x000a1000
 2f8:	03005244 	movweq	r5, #580	; 0x244
 2fc:	7b170111 	blvc	5c0748 <STK+0x5c0724>
 300:	14000000 	strne	r0, [r0], #-0
 304:	00012909 	andeq	r2, r1, r9, lsl #18
 308:	01120300 	tsteq	r2, r0, lsl #6
 30c:	00007b17 	andeq	r7, r0, r7, lsl fp
 310:	06091800 	streq	r1, [r9], -r0, lsl #16
 314:	03000000 	movweq	r0, #0
 318:	7b170113 	blvc	5c076c <STK+0x5c0748>
 31c:	1c000000 	stcne	0, cr0, [r0], {-0}
 320:	00032b09 	andeq	r2, r3, r9, lsl #22
 324:	01140300 	tsteq	r4, r0, lsl #6
 328:	00007b17 	andeq	r7, r0, r7, lsl fp
 32c:	20092000 	andcs	r2, r9, r0
 330:	03000003 	movweq	r0, #3
 334:	7b170115 	blvc	5c0790 <STK+0x5c076c>
 338:	24000000 	strcs	r0, [r0], #-0
 33c:	5252420a 	subspl	r4, r2, #-1610612736	; 0xa0000000
 340:	01160300 	tsteq	r6, r0, lsl #6
 344:	00007b17 	andeq	r7, r0, r7, lsl fp
 348:	0b002800 	bleq	a350 <STK+0xa32c>
 34c:	0000041f 	andeq	r0, r0, pc, lsl r4
 350:	03011803 	movweq	r1, #6147	; 0x1803
 354:	000002a6 	andeq	r0, r0, r6, lsr #5
 358:	1a03600c 	bne	d8390 <STK+0xd836c>
 35c:	04b30901 	ldrteq	r0, [r3], #2305	; 0x901
 360:	430a0000 	movwmi	r0, #40960	; 0xa000
 364:	03003152 	movweq	r3, #338	; 0x152
 368:	7b17011c 	blvc	5c07e0 <STK+0x5c07bc>
 36c:	00000000 	andeq	r0, r0, r0
 370:	3252430a 	subscc	r4, r2, #671088640	; 0x28000000
 374:	011d0300 	tsteq	sp, r0, lsl #6
 378:	00007b17 	andeq	r7, r0, r7, lsl fp
 37c:	430a0400 	movwmi	r0, #41984	; 0xa400
 380:	03003352 	movweq	r3, #850	; 0x352
 384:	7b17011e 	blvc	5c0804 <STK+0x5c07e0>
 388:	08000000 	stmdaeq	r0, {}	; <UNPREDICTABLE>
 38c:	3452430a 	ldrbcc	r4, [r2], #-778	; 0xfffffcf6
 390:	011f0300 	tsteq	pc, r0, lsl #6
 394:	00007b17 	andeq	r7, r0, r7, lsl fp
 398:	530a0c00 	movwpl	r0, #44032	; 0xac00
 39c:	03003152 	movweq	r3, #338	; 0x152
 3a0:	7b170120 	blvc	5c0828 <STK+0x5c0804>
 3a4:	10000000 	andne	r0, r0, r0
 3a8:	3252530a 	subscc	r5, r2, #671088640	; 0x28000000
 3ac:	01210300 			; <UNDEFINED> instruction: 0x01210300
 3b0:	00007b17 	andeq	r7, r0, r7, lsl fp
 3b4:	530a1400 	movwpl	r1, #41984	; 0xa400
 3b8:	03005243 	movweq	r5, #579	; 0x243
 3bc:	7b170122 	blvc	5c084c <STK+0x5c0828>
 3c0:	18000000 	stmdane	r0, {}	; <UNPREDICTABLE>
 3c4:	0003a809 	andeq	sl, r3, r9, lsl #16
 3c8:	01230300 			; <UNDEFINED> instruction: 0x01230300
 3cc:	00006f17 	andeq	r6, r0, r7, lsl pc
 3d0:	4b091c00 	blmi	2473d8 <STK+0x2473b4>
 3d4:	03000001 	movweq	r0, #1
 3d8:	7b170124 	blvc	5c0870 <STK+0x5c084c>
 3dc:	20000000 	andcs	r0, r0, r0
 3e0:	00000b09 	andeq	r0, r0, r9, lsl #22
 3e4:	01250300 			; <UNDEFINED> instruction: 0x01250300
 3e8:	00007b17 	andeq	r7, r0, r7, lsl fp
 3ec:	51092400 	tstpl	r9, r0, lsl #8
 3f0:	03000001 	movweq	r0, #1
 3f4:	7b170126 	blvc	5c0894 <STK+0x5c0870>
 3f8:	28000000 	stmdacs	r0, {}	; <UNPREDICTABLE>
 3fc:	00001109 	andeq	r1, r0, r9, lsl #2
 400:	01270300 			; <UNDEFINED> instruction: 0x01270300
 404:	00007b17 	andeq	r7, r0, r7, lsl fp
 408:	57092c00 	strpl	r2, [r9, -r0, lsl #24]
 40c:	03000001 	movweq	r0, #1
 410:	7b170128 	blvc	5c08b8 <STK+0x5c0894>
 414:	30000000 	andcc	r0, r0, r0
 418:	00001709 	andeq	r1, r0, r9, lsl #14
 41c:	01290300 			; <UNDEFINED> instruction: 0x01290300
 420:	00007b17 	andeq	r7, r0, r7, lsl fp
 424:	5d093400 	cfstrspl	mvf3, [r9, #-0]
 428:	03000001 	movweq	r0, #1
 42c:	7b17012a 	blvc	5c08dc <STK+0x5c08b8>
 430:	38000000 	stmdacc	r0, {}	; <UNPREDICTABLE>
 434:	00001d09 	andeq	r1, r0, r9, lsl #26
 438:	012b0300 			; <UNDEFINED> instruction: 0x012b0300
 43c:	00007b17 	andeq	r7, r0, r7, lsl fp
 440:	63093c00 	movwvs	r3, #39936	; 0x9c00
 444:	03000001 	movweq	r0, #1
 448:	7b17012c 	blvc	5c0900 <STK+0x5c08dc>
 44c:	40000000 	andmi	r0, r0, r0
 450:	00002309 	andeq	r2, r0, r9, lsl #6
 454:	012d0300 			; <UNDEFINED> instruction: 0x012d0300
 458:	00007b17 	andeq	r7, r0, r7, lsl fp
 45c:	49094400 	stmdbmi	r9, {sl, lr}
 460:	03000002 	movweq	r0, #2
 464:	6f17012e 	svcvs	0x0017012e
 468:	48000000 	stmdami	r0, {}	; <UNPREDICTABLE>
 46c:	0003c609 	andeq	ip, r3, r9, lsl #12
 470:	012f0300 			; <UNDEFINED> instruction: 0x012f0300
 474:	00006f17 	andeq	r6, r0, r7, lsl pc
 478:	dc094c00 	stcle	12, cr4, [r9], {-0}
 47c:	03000003 	movweq	r0, #3
 480:	6f170130 	svcvs	0x00170130
 484:	50000000 	andpl	r0, r0, r0
 488:	0003f209 	andeq	pc, r3, r9, lsl #4
 48c:	01310300 	teqeq	r1, r0, lsl #6
 490:	00006f17 	andeq	r6, r0, r7, lsl pc
 494:	69095400 	stmdbvs	r9, {sl, ip, lr}
 498:	03000001 	movweq	r0, #1
 49c:	7b170132 	blvc	5c096c <STK+0x5c0948>
 4a0:	58000000 	stmdapl	r0, {}	; <UNPREDICTABLE>
 4a4:	00010409 	andeq	r0, r1, r9, lsl #8
 4a8:	01330300 	teqeq	r3, r0, lsl #6
 4ac:	00007b17 	andeq	r7, r0, r7, lsl fp
 4b0:	0b005c00 	bleq	174b8 <STK+0x17494>
 4b4:	000002ac 	andeq	r0, r0, ip, lsr #5
 4b8:	03013403 	movweq	r3, #5123	; 0x1403
 4bc:	00000358 	andeq	r0, r0, r8, asr r3
 4c0:	3603340c 	strcc	r3, [r3], -ip, lsl #8
 4c4:	057f0901 	ldrbeq	r0, [pc, #-2305]!	; fffffbcb <STK+0xfffffba7>
 4c8:	410a0000 	mrsmi	r0, (UNDEF: 10)
 4cc:	03005243 	movweq	r5, #579	; 0x243
 4d0:	7b170138 	blvc	5c09b8 <STK+0x5c0994>
 4d4:	00000000 	andeq	r0, r0, r0
 4d8:	00020f09 	andeq	r0, r2, r9, lsl #30
 4dc:	01390300 	teqeq	r9, r0, lsl #6
 4e0:	00007b17 	andeq	r7, r0, r7, lsl fp
 4e4:	30090400 	andcc	r0, r9, r0, lsl #8
 4e8:	03000003 	movweq	r0, #3
 4ec:	7b17013a 	blvc	5c09dc <STK+0x5c09b8>
 4f0:	08000000 	stmdaeq	r0, {}	; <UNPREDICTABLE>
 4f4:	00019509 	andeq	r9, r1, r9, lsl #10
 4f8:	013b0300 	teqeq	fp, r0, lsl #6
 4fc:	00007b17 	andeq	r7, r0, r7, lsl fp
 500:	530a0c00 	movwpl	r0, #44032	; 0xac00
 504:	3c030052 	stccc	0, cr0, [r3], {82}	; 0x52
 508:	007b1701 	rsbseq	r1, fp, r1, lsl #14
 50c:	0a100000 	beq	400514 <STK+0x4004f0>
 510:	03005243 	movweq	r5, #579	; 0x243
 514:	7b17013d 	blvc	5c0a10 <STK+0x5c09ec>
 518:	14000000 	strne	r0, [r0], #-0
 51c:	00041109 	andeq	r1, r4, r9, lsl #2
 520:	013e0300 	teqeq	lr, r0, lsl #6
 524:	00007b17 	andeq	r7, r0, r7, lsl fp
 528:	46091800 	strmi	r1, [r9], -r0, lsl #16
 52c:	03000004 	movweq	r0, #4
 530:	7b17013f 	blvc	5c0a34 <STK+0x5c0a10>
 534:	1c000000 	stcne	0, cr0, [r0], {-0}
 538:	0002d009 	andeq	sp, r2, r9
 53c:	01400300 	mrseq	r0, SPSR_irq
 540:	00007b17 	andeq	r7, r0, r7, lsl fp
 544:	33092000 	movwcc	r2, #36864	; 0x9000
 548:	03000002 	movweq	r0, #2
 54c:	7b170141 	blvc	5c0a58 <STK+0x5c0a34>
 550:	24000000 	strcs	r0, [r0], #-0
 554:	00027109 	andeq	r7, r2, r9, lsl #2
 558:	01420300 	mrseq	r0, SPSR_svc
 55c:	00007b17 	andeq	r7, r0, r7, lsl fp
 560:	a5092800 	strge	r2, [r9, #-2048]	; 0xfffff800
 564:	03000002 	movweq	r0, #2
 568:	7b170143 	blvc	5c0a7c <STK+0x5c0a58>
 56c:	2c000000 	stccs	0, cr0, [r0], {-0}
 570:	0002f509 	andeq	pc, r2, r9, lsl #10
 574:	01440300 	mrseq	r0, SPSR_abt
 578:	00007b17 	andeq	r7, r0, r7, lsl fp
 57c:	0b003000 	bleq	c584 <STK+0xc560>
 580:	000002d5 	ldrdeq	r0, [r0], -r5
 584:	03014503 	movweq	r4, #5379	; 0x1503
 588:	000004c0 	andeq	r0, r0, r0, asr #9
 58c:	4703100c 	strmi	r1, [r3, -ip]
 590:	05cf0901 	strbeq	r0, [pc, #2305]	; e99 <STK+0xe75>
 594:	41090000 	mrsmi	r0, (UNDEF: 9)
 598:	03000004 	movweq	r0, #4
 59c:	7b170149 	blvc	5c0ac8 <STK+0x5c0aa4>
 5a0:	00000000 	andeq	r0, r0, r0
 5a4:	0002cb09 	andeq	ip, r2, r9, lsl #22
 5a8:	014a0300 	mrseq	r0, (UNDEF: 122)
 5ac:	00007b17 	andeq	r7, r0, r7, lsl fp
 5b0:	560a0400 	strpl	r0, [sl], -r0, lsl #8
 5b4:	03004c41 	movweq	r4, #3137	; 0xc41
 5b8:	7b17014b 	blvc	5c0aec <STK+0x5c0ac8>
 5bc:	08000000 	stmdaeq	r0, {}	; <UNPREDICTABLE>
 5c0:	00045e09 	andeq	r5, r4, r9, lsl #28
 5c4:	014c0300 	mrseq	r0, SPSR_mon
 5c8:	00007b17 	andeq	r7, r0, r7, lsl fp
 5cc:	0b000c00 	bleq	35d4 <STK+0x35b0>
 5d0:	000002e4 	andeq	r0, r0, r4, ror #5
 5d4:	03014d03 	movweq	r4, #7427	; 0x1d03
 5d8:	0000058c 	andeq	r0, r0, ip, lsl #11
 5dc:	4343520d 	movtmi	r5, #12813	; 0x320d
 5e0:	01500300 	cmpeq	r0, r0, lsl #6
 5e4:	0005e918 	andeq	lr, r5, r8, lsl r9
 5e8:	99040e00 	stmdbls	r4, {r9, sl, fp}
 5ec:	0f000002 	svceq	0x00000002
 5f0:	0000030e 	andeq	r0, r0, lr, lsl #6
 5f4:	18015103 	stmdane	r1, {r0, r1, r8, ip, lr}
 5f8:	000005fc 	strdeq	r0, [r0], -ip
 5fc:	034b040e 	movteq	r0, #46094	; 0xb40e
 600:	140f0000 	strne	r0, [pc], #-0	; 608 <.debug_info+0x608>
 604:	03000003 	movweq	r0, #3
 608:	fc180152 	ldc2	1, cr0, [r8], {82}	; 0x52
 60c:	0f000005 	svceq	0x00000005
 610:	0000031a 	andeq	r0, r0, sl, lsl r3
 614:	18015303 	stmdane	r1, {r0, r1, r8, r9, ip, lr}
 618:	000005fc 	strdeq	r0, [r0], -ip
 61c:	00042d0f 	andeq	r2, r4, pc, lsl #26
 620:	01540300 	cmpeq	r4, r0, lsl #6
 624:	0005fc18 	andeq	pc, r5, r8, lsl ip	; <UNPREDICTABLE>
 628:	03250f00 			; <UNDEFINED> instruction: 0x03250f00
 62c:	55030000 	strpl	r0, [r3, #-0]
 630:	05fc1801 	ldrbeq	r1, [ip, #2049]!	; 0x801
 634:	3b0f0000 	blcc	3c063c <STK+0x3c0618>
 638:	03000004 	movweq	r0, #4
 63c:	fc180156 	ldc2	1, cr0, [r8], {86}	; 0x56
 640:	0d000005 	stceq	0, cr0, [r0, #-20]	; 0xffffffec
 644:	00525750 	subseq	r5, r2, r0, asr r7
 648:	18015703 	stmdane	r1, {r0, r1, r8, r9, sl, ip, lr}
 64c:	00000650 	andeq	r0, r0, r0, asr r6
 650:	04b3040e 	ldrteq	r0, [r3], #1038	; 0x40e
 654:	7a0f0000 	bvc	3c065c <STK+0x3c0638>
 658:	03000002 	movweq	r0, #2
 65c:	63180158 	tstvs	r8, #88, 2
 660:	0e000006 	cdpeq	0, 0, cr0, cr0, cr6, {0}
 664:	00057f04 	andeq	r7, r5, r4, lsl #30
 668:	54530d00 	ldrbpl	r0, [r3], #-3328	; 0xfffff300
 66c:	5903004b 	stmdbpl	r3, {r0, r1, r3, r6}
 670:	06761a01 	ldrbteq	r1, [r6], -r1, lsl #20
 674:	040e0000 	streq	r0, [lr], #-0
 678:	000005cf 	andeq	r0, r0, pc, asr #11
 67c:	0005dc10 	andeq	sp, r5, r0, lsl ip
 680:	15040400 	strne	r0, [r4, #-1024]	; 0xfffffc00
 684:	00000305 	andeq	r0, r0, r5, lsl #6
 688:	ef100000 	svc	0x00100000
 68c:	04000005 	streq	r0, [r0], #-5
 690:	03051505 	movweq	r1, #21765	; 0x5505
 694:	00000000 	andeq	r0, r0, r0
 698:	00060210 	andeq	r0, r6, r0, lsl r2
 69c:	15060400 	strne	r0, [r6, #-1024]	; 0xfffffc00
 6a0:	00000305 	andeq	r0, r0, r5, lsl #6
 6a4:	0f100000 	svceq	0x00100000
 6a8:	04000006 	streq	r0, [r0], #-6
 6ac:	03051507 	movweq	r1, #21767	; 0x5507
 6b0:	00000000 	andeq	r0, r0, r0
 6b4:	00061c10 	andeq	r1, r6, r0, lsl ip
 6b8:	15080400 	strne	r0, [r8, #-1024]	; 0xfffffc00
 6bc:	00000305 	andeq	r0, r0, r5, lsl #6
 6c0:	29100000 	ldmdbcs	r0, {}	; <UNPREDICTABLE>
 6c4:	04000006 	streq	r0, [r0], #-6
 6c8:	03051509 	movweq	r1, #21769	; 0x5509
 6cc:	00000000 	andeq	r0, r0, r0
 6d0:	00063610 	andeq	r3, r6, r0, lsl r6
 6d4:	150a0400 	strne	r0, [sl, #-1024]	; 0xfffffc00
 6d8:	00000305 	andeq	r0, r0, r5, lsl #6
 6dc:	43100000 	tstmi	r0, #0
 6e0:	04000006 	streq	r0, [r0], #-6
 6e4:	0305150b 	movweq	r1, #21771	; 0x550b
 6e8:	00000000 	andeq	r0, r0, r0
 6ec:	00065610 	andeq	r5, r6, r0, lsl r6
 6f0:	150c0400 	strne	r0, [ip, #-1024]	; 0xfffffc00
 6f4:	00000305 	andeq	r0, r0, r5, lsl #6
 6f8:	69100000 	ldmdbvs	r0, {}	; <UNPREDICTABLE>
 6fc:	04000006 	streq	r0, [r0], #-6
 700:	0305150d 	movweq	r1, #21773	; 0x550d
 704:	00000000 	andeq	r0, r0, r0
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0xfffffeff
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	100e1b0e 	andne	r1, lr, lr, lsl #22
   c:	02000017 	andeq	r0, r0, #23
  10:	0b0b0024 	bleq	2c00a8 <STK+0x2c0084>
  14:	0e030b3e 	vmoveq.16	d3[0], r0
  18:	16030000 	strne	r0, [r3], -r0
  1c:	3a0e0300 	bcc	380c24 <STK+0x380c00>
  20:	390b3b0b 	stmdbcc	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  24:	0013490b 	andseq	r4, r3, fp, lsl #18
  28:	00240400 	eoreq	r0, r4, r0, lsl #8
  2c:	0b3e0b0b 	bleq	f82c60 <STK+0xf82c3c>
  30:	00000803 	andeq	r0, r0, r3, lsl #16
  34:	49003505 	stmdbmi	r0, {r0, r2, r8, sl, ip, sp}
  38:	06000013 			; <UNDEFINED> instruction: 0x06000013
  3c:	0b0b0113 	bleq	2c0490 <STK+0x2c046c>
  40:	0b3b0b3a 	bleq	ec2d30 <STK+0xec2d0c>
  44:	13010b39 	movwne	r0, #6969	; 0x1b39
  48:	0d070000 	stceq	0, cr0, [r7, #-0]
  4c:	3a080300 	bcc	200c54 <STK+0x200c30>
  50:	390b3b0b 	stmdbcc	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  54:	3813490b 	ldmdacc	r3, {r0, r1, r3, r8, fp, lr}
  58:	0800000b 	stmdaeq	r0, {r0, r1, r3}
  5c:	0e03000d 	cdpeq	0, 0, cr0, cr3, cr13, {0}
  60:	0b3b0b3a 	bleq	ec2d50 <STK+0xec2d2c>
  64:	13490b39 	movtne	r0, #39737	; 0x9b39
  68:	00000b38 	andeq	r0, r0, r8, lsr fp
  6c:	03000d09 	movweq	r0, #3337	; 0xd09
  70:	3b0b3a0e 	blcc	2ce8b0 <STK+0x2ce88c>
  74:	490b3905 	stmdbmi	fp, {r0, r2, r8, fp, ip, sp}
  78:	000b3813 	andeq	r3, fp, r3, lsl r8
  7c:	000d0a00 	andeq	r0, sp, r0, lsl #20
  80:	0b3a0803 	bleq	e82094 <STK+0xe82070>
  84:	0b39053b 	bleq	e41578 <STK+0xe41554>
  88:	0b381349 	bleq	e04db4 <STK+0xe04d90>
  8c:	160b0000 	strne	r0, [fp], -r0
  90:	3a0e0300 	bcc	380c98 <STK+0x380c74>
  94:	39053b0b 	stmdbcc	r5, {r0, r1, r3, r8, r9, fp, ip, sp}
  98:	0013490b 	andseq	r4, r3, fp, lsl #18
  9c:	01130c00 	tsteq	r3, r0, lsl #24
  a0:	0b3a0b0b 	bleq	e82cd4 <STK+0xe82cb0>
  a4:	0b39053b 	bleq	e41598 <STK+0xe41574>
  a8:	00001301 	andeq	r1, r0, r1, lsl #6
  ac:	0300340d 	movweq	r3, #1037	; 0x40d
  b0:	3b0b3a08 	blcc	2ce8d8 <STK+0x2ce8b4>
  b4:	490b3905 	stmdbmi	fp, {r0, r2, r8, fp, ip, sp}
  b8:	3c193f13 	ldccc	15, cr3, [r9], {19}
  bc:	0e000019 	mcreq	0, 0, r0, cr0, cr9, {0}
  c0:	0b0b000f 	bleq	2c0104 <STK+0x2c00e0>
  c4:	00001349 	andeq	r1, r0, r9, asr #6
  c8:	0300340f 	movweq	r3, #1039	; 0x40f
  cc:	3b0b3a0e 	blcc	2ce90c <STK+0x2ce8e8>
  d0:	490b3905 	stmdbmi	fp, {r0, r2, r8, fp, ip, sp}
  d4:	3c193f13 	ldccc	15, cr3, [r9], {19}
  d8:	10000019 	andne	r0, r0, r9, lsl r0
  dc:	13470034 	movtne	r0, #28724	; 0x7034
  e0:	0b3b0b3a 	bleq	ec2dd0 <STK+0xec2dac>
  e4:	18020b39 	stmdane	r2, {r0, r3, r4, r5, r8, r9, fp}
  e8:	Address 0x000000e8 is out of bounds.


Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	00000014 	andeq	r0, r0, r4, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0000011a 	andeq	r0, r0, sl, lsl r1
   4:	01140003 	tsteq	r4, r3
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	63010000 	movwvs	r0, #4096	; 0x1000
  1c:	72705c3a 	rsbsvc	r5, r0, #14848	; 0x3a00
  20:	6172676f 	cmnvs	r2, pc, ror #14
  24:	6966206d 	stmdbvs	r6!, {r0, r2, r3, r5, r6, sp}^
  28:	2073656c 	rsbscs	r6, r3, ip, ror #10
  2c:	36387828 	ldrtcc	r7, [r8], -r8, lsr #16
  30:	6e675c29 	cdpvs	12, 6, cr5, cr7, cr9, {1}
  34:	72612075 	rsbvc	r2, r1, #117	; 0x75
  38:	6d65206d 	stclvs	0, cr2, [r5, #-436]!	; 0xfffffe4c
  3c:	64646562 	strbtvs	r6, [r4], #-1378	; 0xfffffa9e
  40:	74206465 	strtvc	r6, [r0], #-1125	; 0xfffffb9b
  44:	636c6f6f 	cmnvs	ip, #444	; 0x1bc
  48:	6e696168 	powvsez	f6, f1, #0.0
  4c:	2030315c 	eorscs	r3, r0, ip, asr r1
  50:	31323032 	teqcc	r2, r2, lsr r0
  54:	5c37302e 	ldcpl	0, cr3, [r7], #-184	; 0xffffff48
  58:	2d6d7261 	sfmcs	f7, 2, [sp, #-388]!	; 0xfffffe7c
  5c:	656e6f6e 	strbvs	r6, [lr, #-3950]!	; 0xfffff092
  60:	6261652d 	rsbvs	r6, r1, #188743680	; 0xb400000
  64:	6e695c69 	cdpvs	12, 6, cr5, cr9, cr9, {3}
  68:	64756c63 	ldrbtvs	r6, [r5], #-3171	; 0xfffff39d
  6c:	616d5c65 	cmnvs	sp, r5, ror #24
  70:	6e696863 	cdpvs	8, 6, cr6, cr9, cr3, {3}
  74:	3a630065 	bcc	18c0210 <STK+0x18c01ec>
  78:	6f72705c 	svcvs	0x0072705c
  7c:	6d617267 	sfmvs	f7, 2, [r1, #-412]!	; 0xfffffe64
  80:	6c696620 	stclvs	6, cr6, [r9], #-128	; 0xffffff80
  84:	28207365 	stmdacs	r0!, {r0, r2, r5, r6, r8, r9, ip, sp, lr}
  88:	29363878 	ldmdbcs	r6!, {r3, r4, r5, r6, fp, ip, sp}
  8c:	756e675c 	strbvc	r6, [lr, #-1884]!	; 0xfffff8a4
  90:	6d726120 	ldfvse	f6, [r2, #-128]!	; 0xffffff80
  94:	626d6520 	rsbvs	r6, sp, #32, 10	; 0x8000000
  98:	65646465 	strbvs	r6, [r4, #-1125]!	; 0xfffffb9b
  9c:	6f742064 	svcvs	0x00742064
  a0:	68636c6f 	stmdavs	r3!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
  a4:	5c6e6961 			; <UNDEFINED> instruction: 0x5c6e6961
  a8:	32203031 	eorcc	r3, r0, #49	; 0x31
  ac:	2e313230 	mrccs	2, 1, r3, cr1, cr0, {1}
  b0:	615c3730 	cmpvs	ip, r0, lsr r7
  b4:	6e2d6d72 	mcrvs	13, 1, r6, cr13, cr2, {3}
  b8:	2d656e6f 	stclcs	14, cr6, [r5, #-444]!	; 0xfffffe44
  bc:	69626165 	stmdbvs	r2!, {r0, r2, r5, r6, r8, sp, lr}^
  c0:	636e695c 	cmnvs	lr, #92, 18	; 0x170000
  c4:	6564756c 	strbvs	r7, [r4, #-1388]!	; 0xfffffa94
  c8:	7379735c 	cmnvc	r9, #92, 6	; 0x70000001
  cc:	636e6900 	cmnvs	lr, #0, 18
  d0:	6564756c 	strbvs	r7, [r4, #-1388]!	; 0xfffffa94
  d4:	63727300 	cmnvs	r2, #0, 6
  d8:	645f0000 	ldrbvs	r0, [pc], #-0	; e0 <.debug_line+0xe0>
  dc:	75616665 	strbvc	r6, [r1, #-1637]!	; 0xfffff99b
  e0:	745f746c 	ldrbvc	r7, [pc], #-1132	; e8 <.debug_line+0xe8>
  e4:	73657079 	cmnvc	r5, #121	; 0x79
  e8:	0100682e 	tsteq	r0, lr, lsr #16
  ec:	735f0000 	cmpvc	pc, #0
  f0:	6e696474 	mcrvs	4, 3, r6, cr9, cr4, {3}
  f4:	00682e74 	rsbeq	r2, r8, r4, ror lr
  f8:	73000002 	movwvc	r0, #2
  fc:	32336d74 	eorscc	r6, r3, #116, 26	; 0x1d00
 100:	3235346c 	eorscc	r3, r5, #108, 8	; 0x6c000000
 104:	682e6572 	stmdavs	lr!, {r1, r4, r5, r6, r8, sl, sp, lr}
 108:	00000300 	andeq	r0, r0, r0, lsl #6
 10c:	336d7473 	cmncc	sp, #1929379840	; 0x73000000
 110:	35346c32 	ldrcc	r6, [r4, #-3122]!	; 0xfffff3ce
 114:	2e657232 	mcrcs	2, 3, r7, cr5, cr2, {1}
 118:	00040063 	andeq	r0, r4, r3, rrx
	...

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	44505550 	ldrbmi	r5, [r0], #-1360	; 0xfffffab0
   4:	434c0052 	movtmi	r0, #49234	; 0xc052
   8:	5000524b 	andpl	r5, r0, fp, asr #4
   c:	41524344 	cmpmi	r2, r4, asr #6
  10:	43445000 	movtmi	r5, #16384	; 0x4000
  14:	50004252 	andpl	r4, r0, r2, asr r2
  18:	43524344 	cmpmi	r2, #68, 6	; 0x10000001
  1c:	43445000 	movtmi	r5, #16384	; 0x4000
  20:	50004452 	andpl	r4, r0, r2, asr r4
  24:	45524344 	ldrbmi	r4, [r2, #-836]	; 0xfffffcbc
  28:	59544f00 	ldmdbpl	r4, {r8, r9, sl, fp, lr}^
  2c:	00524550 	subseq	r4, r2, r0, asr r5
  30:	5f434352 	svcpl	0x00434352
  34:	5346464f 	movtpl	r4, #26191	; 0x664f
  38:	445f5445 	ldrbmi	r5, [pc], #-1093	; 40 <.debug_str+0x40>
  3c:	5f544e4f 	svcpl	0x00544e4f
  40:	5f455355 	svcpl	0x00455355
  44:	43520030 	cmpmi	r2, #48	; 0x30
  48:	464f5f43 	strbmi	r5, [pc], -r3, asr #30
  4c:	54455346 	strbpl	r5, [r5], #-838	; 0xfffffcba
  50:	4e4f445f 	mcrmi	4, 2, r4, cr15, cr15, {2}
  54:	53555f54 	cmppl	r5, #84, 30	; 0x150
  58:	00315f45 	eorseq	r5, r1, r5, asr #30
  5c:	5f434352 	svcpl	0x00434352
  60:	5346464f 	movtpl	r4, #26191	; 0x664f
  64:	445f5445 	ldrbmi	r5, [pc], #-1093	; 6c <.debug_str+0x6c>
  68:	5f544e4f 	svcpl	0x00544e4f
  6c:	5f455355 	svcpl	0x00455355
  70:	43520032 	cmpmi	r2, #50	; 0x32
  74:	464f5f43 	strbmi	r5, [pc], -r3, asr #30
  78:	54455346 	strbpl	r5, [r5], #-838	; 0xfffffcba
  7c:	4e4f445f 	mcrmi	4, 2, r4, cr15, cr15, {2}
  80:	53555f54 	cmppl	r5, #84, 30	; 0x150
  84:	00335f45 	eorseq	r5, r3, r5, asr #30
  88:	5f434352 	svcpl	0x00434352
  8c:	5346464f 	movtpl	r4, #26191	; 0x664f
  90:	445f5445 	ldrbmi	r5, [pc], #-1093	; 98 <.debug_str+0x98>
  94:	5f544e4f 	svcpl	0x00544e4f
  98:	5f455355 	svcpl	0x00455355
  9c:	43520034 	cmpmi	r2, #52	; 0x34
  a0:	464f5f43 	strbmi	r5, [pc], -r3, asr #30
  a4:	54455346 	strbpl	r5, [r5], #-838	; 0xfffffcba
  a8:	4e4f445f 	mcrmi	4, 2, r4, cr15, cr15, {2}
  ac:	53555f54 	cmppl	r5, #84, 30	; 0x150
  b0:	00365f45 	eorseq	r5, r6, r5, asr #30
  b4:	5f434352 	svcpl	0x00434352
  b8:	5346464f 	movtpl	r4, #26191	; 0x664f
  bc:	445f5445 	ldrbmi	r5, [pc], #-1093	; c4 <.debug_str+0xc4>
  c0:	5f544e4f 	svcpl	0x00544e4f
  c4:	5f455355 	svcpl	0x00455355
  c8:	43520037 	cmpmi	r2, #55	; 0x37
  cc:	464f5f43 	strbmi	r5, [pc], -r3, asr #30
  d0:	54455346 	strbpl	r5, [r5], #-838	; 0xfffffcba
  d4:	4e4f445f 	mcrmi	4, 2, r4, cr15, cr15, {2}
  d8:	53555f54 	cmppl	r5, #84, 30	; 0x150
  dc:	00385f45 	eorseq	r5, r8, r5, asr #30
  e0:	45444f4d 	strbmi	r4, [r4, #-3917]	; 0xfffff0b3
  e4:	6f6c0052 	svcvs	0x006c0052
  e8:	6c20676e 	stcvs	7, cr6, [r0], #-440	; 0xfffffe48
  ec:	20676e6f 	rsbcs	r6, r7, pc, ror #28
  f0:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  f4:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xfffff199
  f8:	746e6920 	strbtvc	r6, [lr], #-2336	; 0xfffff6e0
  fc:	49434300 	stmdbmi	r3, {r8, r9, lr}^
 100:	00325250 	eorseq	r5, r2, r0, asr r2
 104:	52434450 	subpl	r4, r3, #80, 8	; 0x50000000
 108:	49430048 	stmdbmi	r3, {r3, r6}^
 10c:	6c005245 	sfmvs	f5, 4, [r0], {69}	; 0x45
 110:	20676e6f 	rsbcs	r6, r7, pc, ror #28
 114:	676e6f6c 	strbvs	r6, [lr, -ip, ror #30]!
 118:	746e6920 	strbtvc	r6, [lr], #-2336	; 0xfffff6e0
 11c:	67697300 	strbvs	r7, [r9, -r0, lsl #6]!
 120:	2064656e 	rsbcs	r6, r4, lr, ror #10
 124:	72616863 	rsbvc	r6, r1, #6488064	; 0x630000
 128:	52534200 	subspl	r4, r3, #0, 4
 12c:	48410052 	stmdami	r1, {r1, r4, r6}^
 130:	53523142 	cmppl	r2, #-2147483632	; 0x80000010
 134:	41005254 	tstmi	r0, r4, asr r2
 138:	53314248 	teqpl	r1, #72, 4	; 0x80000004
 13c:	524e454d 	subpl	r4, lr, #322961408	; 0x13400000
 140:	42504100 	subsmi	r4, r0, #0, 2
 144:	454d5332 	strbmi	r5, [sp, #-818]	; 0xfffffcce
 148:	5000524e 	andpl	r5, r0, lr, asr #4
 14c:	41524355 	cmpmi	r2, r5, asr r3
 150:	43555000 	cmpmi	r5, #0
 154:	50004252 	andpl	r4, r0, r2, asr r2
 158:	43524355 	cmpmi	r2, #1409286145	; 0x54000001
 15c:	43555000 	cmpmi	r5, #0
 160:	50004452 	andpl	r4, r0, r2, asr r4
 164:	45524355 	ldrbmi	r4, [r2, #-853]	; 0xfffffcab
 168:	43555000 	cmpmi	r5, #0
 16c:	6c004852 	stcvs	8, cr4, [r0], {82}	; 0x52
 170:	20676e6f 	rsbcs	r6, r7, pc, ror #28
 174:	00746e69 	rsbseq	r6, r4, r9, ror #28
 178:	32425041 	subcc	r5, r2, #65	; 0x41
 17c:	52545352 	subspl	r5, r4, #1207959553	; 0x48000001
 180:	42504100 	subsmi	r4, r0, #0, 2
 184:	54535231 	ldrbpl	r5, [r3], #-561	; 0xfffffdcf
 188:	41003152 	tstmi	r0, r2, asr r1
 18c:	52314250 	eorspl	r4, r1, #80, 4
 190:	32525453 	subscc	r5, r2, #1392508928	; 0x53000000
 194:	54504f00 	ldrbpl	r4, [r0], #-3840	; 0xfffff100
 198:	5259454b 	subspl	r4, r9, #314572800	; 0x12c00000
 19c:	554e4700 	strbpl	r4, [lr, #-1792]	; 0xfffff900
 1a0:	31314320 	teqcc	r1, r0, lsr #6
 1a4:	2e303120 	rsfcssp	f3, f0, f0
 1a8:	20312e33 	eorscs	r2, r1, r3, lsr lr
 1ac:	31323032 	teqcc	r2, r2, lsr r0
 1b0:	31323630 	teqcc	r2, r0, lsr r6
 1b4:	65722820 	ldrbvs	r2, [r2, #-2080]!	; 0xfffff7e0
 1b8:	7361656c 	cmnvc	r1, #108, 10	; 0x1b000000
 1bc:	2d202965 			; <UNDEFINED> instruction: 0x2d202965
 1c0:	7570636d 	ldrbvc	r6, [r0, #-877]!	; 0xfffffc93
 1c4:	726f633d 	rsbvc	r6, pc, #-201326592	; 0xf4000000
 1c8:	2d786574 	cfldr64cs	mvdx6, [r8, #-464]!	; 0xfffffe30
 1cc:	2d20346d 	cfstrscs	mvf3, [r0, #-436]!	; 0xfffffe4c
 1d0:	7568746d 	strbvc	r7, [r8, #-1133]!	; 0xfffffb93
 1d4:	2d20626d 	sfmcs	f6, 4, [r0, #-436]!	; 0xfffffe4c
 1d8:	6f6c666d 	svcvs	0x006c666d
 1dc:	612d7461 			; <UNDEFINED> instruction: 0x612d7461
 1e0:	733d6962 	teqvc	sp, #1605632	; 0x188000
 1e4:	2074666f 	rsbscs	r6, r4, pc, ror #12
 1e8:	72616d2d 	rsbvc	r6, r1, #2880	; 0xb40
 1ec:	613d6863 	teqvs	sp, r3, ror #16
 1f0:	37766d72 			; <UNDEFINED> instruction: 0x37766d72
 1f4:	206d2d65 	rsbcs	r2, sp, r5, ror #26
 1f8:	2d20672d 	stccs	7, cr6, [r0, #-180]!	; 0xffffff4c
 1fc:	2d20304f 	stccs	0, cr3, [r0, #-316]!	; 0xfffffec4
 200:	3d647473 	cfstrdcc	mvd7, [r4, #-460]!	; 0xfffffe34
 204:	31756e67 	cmncc	r5, r7, ror #28
 208:	49430031 	stmdbmi	r3, {r0, r4, r5}^
 20c:	50005246 	andpl	r5, r0, r6, asr #4
 210:	59454b44 	stmdbpl	r5, {r2, r6, r8, r9, fp, lr}^
 214:	534f0052 	movtpl	r0, #61522	; 0xf052
 218:	44454550 	strbmi	r4, [r5], #-1360	; 0xfffffab0
 21c:	5f5f0052 	svcpl	0x005f0052
 220:	746e6975 	strbtvc	r6, [lr], #-2421	; 0xfffff68b
 224:	745f3233 	ldrbvc	r3, [pc], #-563	; 22c <.debug_str+0x22c>
 228:	42484100 	submi	r4, r8, #0, 2
 22c:	454d5332 	strbmi	r5, [sp, #-818]	; 0xfffffcce
 230:	5000524e 	andpl	r5, r0, lr, asr #4
 234:	504f5243 	subpl	r5, pc, r3, asr #4
 238:	00525331 	subseq	r5, r2, r1, lsr r3
 23c:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
 240:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xfffff199
 244:	746e6920 	strbtvc	r6, [lr], #-2336	; 0xfffff6e0
 248:	52575000 	subspl	r5, r7, #0
 24c:	46464f5f 			; <UNDEFINED> instruction: 0x46464f5f
 250:	5f544553 	svcpl	0x00544553
 254:	544e4f44 	strbpl	r4, [lr], #-3908	; 0xfffff0bc
 258:	4553555f 	ldrbmi	r5, [r3, #-1375]	; 0xfffffaa1
 25c:	6c00315f 	stfvss	f3, [r0], {95}	; 0x5f
 260:	20676e6f 	rsbcs	r6, r7, pc, ror #28
 264:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
 268:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xfffff199
 26c:	746e6920 	strbtvc	r6, [lr], #-2336	; 0xfffff6e0
 270:	52435000 	subpl	r5, r3, #0
 274:	4531504f 	ldrmi	r5, [r1, #-79]!	; 0xffffffb1
 278:	4c460052 	mcrrmi	0, 5, r0, r6, cr2
 27c:	00485341 	subeq	r5, r8, r1, asr #6
 280:	726f6873 	rsbvc	r6, pc, #7536640	; 0x730000
 284:	6e752074 	mrcvs	0, 3, r2, cr5, cr4, {3}
 288:	6e676973 			; <UNDEFINED> instruction: 0x6e676973
 28c:	69206465 	stmdbvs	r0!, {r0, r2, r5, r6, sl, sp, lr}
 290:	4100746e 	tstmi	r0, lr, ror #8
 294:	53334248 	teqpl	r3, #72, 4	; 0x80000004
 298:	524e454d 	subpl	r4, lr, #322961408	; 0x13400000
 29c:	4c4c5000 	marmi	acc0, r5, ip
 2a0:	52474643 	subpl	r4, r7, #70254592	; 0x4300000
 2a4:	50525700 	subspl	r5, r2, r0, lsl #14
 2a8:	00524131 	subseq	r4, r2, r1, lsr r1
 2ac:	5f727770 	svcpl	0x00727770
 2b0:	75727473 	ldrbvc	r7, [r2, #-1139]!	; 0xfffffb8d
 2b4:	745f7463 	ldrbvc	r7, [pc], #-1123	; 2bc <.debug_str+0x2bc>
 2b8:	63727300 	cmnvs	r2, #0, 6
 2bc:	6d74732f 	ldclvs	3, cr7, [r4, #-188]!	; 0xffffff44
 2c0:	346c3233 	strbtcc	r3, [ip], #-563	; 0xfffffdcd
 2c4:	65723235 	ldrbvs	r3, [r2, #-565]!	; 0xfffffdcb
 2c8:	4c00632e 	stcmi	3, cr6, [r0], {46}	; 0x2e
 2cc:	0044414f 	subeq	r4, r4, pc, asr #2
 2d0:	5254504f 	subspl	r5, r4, #79	; 0x4f
 2d4:	616c6600 	cmnvs	ip, r0, lsl #12
 2d8:	735f6873 	cmpvc	pc, #7536640	; 0x730000
 2dc:	63757274 	cmnvs	r5, #116, 4	; 0x40000007
 2e0:	00745f74 	rsbseq	r5, r4, r4, ror pc
 2e4:	74737973 	ldrbtvc	r7, [r3], #-2419	; 0xfffff68d
 2e8:	5f6b6369 	svcpl	0x006b6369
 2ec:	75727473 	ldrbvc	r7, [r2, #-1139]!	; 0xfffffb8d
 2f0:	745f7463 	ldrbvc	r7, [pc], #-1123	; 2f8 <.debug_str+0x2f8>
 2f4:	50525700 	subspl	r5, r2, r0, lsl #14
 2f8:	00524231 	subseq	r4, r2, r1, lsr r2
 2fc:	31425041 	cmpcc	r2, r1, asr #32
 300:	31524e45 	cmpcc	r2, r5, asr #28
 304:	42504100 	subsmi	r4, r0, #0, 2
 308:	524e4531 	subpl	r4, lr, #205520896	; 0xc400000
 30c:	50470032 	subpl	r0, r7, r2, lsr r0
 310:	00414f49 	subeq	r4, r1, r9, asr #30
 314:	4f495047 	svcmi	0x00495047
 318:	50470042 	subpl	r0, r7, r2, asr #32
 31c:	00434f49 	subeq	r4, r3, r9, asr #30
 320:	48524641 	ldmdami	r2, {r0, r6, r9, sl, lr}^
 324:	49504700 	ldmdbmi	r0, {r8, r9, sl, lr}^
 328:	4100454f 	tstmi	r0, pc, asr #10
 32c:	004c5246 	subeq	r5, ip, r6, asr #4
 330:	5259454b 	subspl	r4, r9, #314572800	; 0x12c00000
 334:	736e7500 	cmnvc	lr, #0, 10
 338:	656e6769 	strbvs	r6, [lr, #-1897]!	; 0xfffff897
 33c:	68632064 	stmdavs	r3!, {r2, r5, r6, sp}^
 340:	72007261 	andvc	r7, r0, #268435462	; 0x10000006
 344:	735f6363 	cmpvc	pc, #-1946157055	; 0x8c000001
 348:	63757274 	cmnvs	r5, #116, 4	; 0x40000007
 34c:	00745f74 	rsbseq	r5, r4, r4, ror pc
 350:	555c3a43 	ldrbpl	r3, [ip, #-2627]	; 0xfffff5bd
 354:	73726573 	cmnvc	r2, #482344960	; 0x1cc00000
 358:	6572745c 	ldrbvs	r7, [r2, #-1116]!	; 0xfffffba4
 35c:	445c6b6b 	ldrbmi	r6, [ip], #-2923	; 0xfffff495
 360:	746b7365 	strbtvc	r7, [fp], #-869	; 0xfffffc9b
 364:	545c706f 	ldrbpl	r7, [ip], #-111	; 0xffffff91
 368:	6b6b6572 	blvs	1ad9938 <STK+0x1ad9914>
 36c:	4f636554 	svcmi	0x00636554
 370:	68730053 	ldmdavs	r3!, {r0, r1, r4, r6}^
 374:	2074726f 	rsbscs	r7, r4, pc, ror #4
 378:	00746e69 	rsbseq	r6, r4, r9, ror #28
 37c:	43525243 	cmpmi	r2, #805306372	; 0x30000004
 380:	43520052 	cmpmi	r2, #82	; 0x52
 384:	464f5f43 	strbmi	r5, [pc], -r3, asr #30
 388:	5f544553 	svcpl	0x00544553
 38c:	544e4f44 	strbpl	r4, [lr], #-3908	; 0xfffff0bc
 390:	4553555f 	ldrbmi	r5, [r3, #-1375]	; 0xfffffaa1
 394:	4100355f 	tstmi	r0, pc, asr r5
 398:	45324250 	ldrmi	r4, [r2, #-592]!	; 0xfffffdb0
 39c:	4100524e 	tstmi	r0, lr, asr #4
 3a0:	52334248 	eorspl	r4, r3, #72, 4	; 0x80000004
 3a4:	00525453 	subseq	r5, r2, r3, asr r4
 3a8:	5f525750 	svcpl	0x00525750
 3ac:	5346464f 	movtpl	r4, #26191	; 0x664f
 3b0:	445f5445 	ldrbmi	r5, [pc], #-1093	; 3b8 <.debug_str+0x3b8>
 3b4:	5f544e4f 	svcpl	0x00544e4f
 3b8:	5f455355 	svcpl	0x00455355
 3bc:	48410030 	stmdami	r1, {r4, r5}^
 3c0:	4e453342 	cdpmi	3, 4, cr3, cr5, cr2, {2}
 3c4:	57500052 			; <UNDEFINED> instruction: 0x57500052
 3c8:	464f5f52 			; <UNDEFINED> instruction: 0x464f5f52
 3cc:	54455346 	strbpl	r5, [r5], #-838	; 0xfffffcba
 3d0:	4e4f445f 	mcrmi	4, 2, r4, cr15, cr15, {2}
 3d4:	53555f54 	cmppl	r5, #84, 30	; 0x150
 3d8:	00325f45 	eorseq	r5, r2, r5, asr #30
 3dc:	5f525750 	svcpl	0x00525750
 3e0:	5346464f 	movtpl	r4, #26191	; 0x664f
 3e4:	445f5445 	ldrbmi	r5, [pc], #-1093	; 3ec <.debug_str+0x3ec>
 3e8:	5f544e4f 	svcpl	0x00544e4f
 3ec:	5f455355 	svcpl	0x00455355
 3f0:	57500033 	smmlarpl	r0, r3, r0, r0
 3f4:	464f5f52 			; <UNDEFINED> instruction: 0x464f5f52
 3f8:	54455346 	strbpl	r5, [r5], #-838	; 0xfffffcba
 3fc:	4e4f445f 	mcrmi	4, 2, r4, cr15, cr15, {2}
 400:	53555f54 	cmppl	r5, #84, 30	; 0x150
 404:	00345f45 	eorseq	r5, r4, r5, asr #30
 408:	746e6975 	strbtvc	r6, [lr], #-2421	; 0xfffff68b
 40c:	745f3233 	ldrbvc	r3, [pc], #-563	; 414 <.debug_str+0x414>
 410:	43434500 	movtmi	r4, #13568	; 0x3500
 414:	48410052 	stmdami	r1, {r1, r4, r6}^
 418:	53523242 	cmppl	r2, #536870916	; 0x20000004
 41c:	67005254 	smlsdvs	r0, r4, r2, r5
 420:	5f6f6970 	svcpl	0x006f6970
 424:	75727473 	ldrbvc	r7, [r2, #-1139]!	; 0xfffffb8d
 428:	745f7463 	ldrbvc	r7, [pc], #-1123	; 430 <.debug_str+0x430>
 42c:	49504700 	ldmdbmi	r0, {r8, r9, sl, lr}^
 430:	4100444f 	tstmi	r0, pc, asr #8
 434:	45324248 	ldrmi	r4, [r2, #-584]!	; 0xfffffdb8
 438:	4700524e 	strmi	r5, [r0, -lr, asr #4]
 43c:	484f4950 	stmdami	pc, {r4, r6, r8, fp, lr}^	; <UNPREDICTABLE>
 440:	52544300 	subspl	r4, r4, #0, 6
 444:	4c46004c 	mcrrmi	0, 4, r0, r6, cr12
 448:	5f485341 	svcpl	0x00485341
 44c:	5346464f 	movtpl	r4, #26191	; 0x664f
 450:	445f5445 	ldrbmi	r5, [pc], #-1093	; 458 <.debug_str+0x458>
 454:	5f544e4f 	svcpl	0x00544e4f
 458:	5f455355 	svcpl	0x00455355
 45c:	41430031 	cmpmi	r3, r1, lsr r0
 460:	0042494c 	subeq	r4, r2, ip, asr #18
 464:	52434943 	subpl	r4, r3, #1097728	; 0x10c000
 468:	4c4c5000 	marmi	acc0, r5, ip
 46c:	31494153 	cmpcc	r9, r3, asr r1
 470:	52474643 	subpl	r4, r7, #70254592	; 0x4300000
 474:	43444200 	movtmi	r4, #16896	; 0x4200
 478:	43490052 	movtmi	r0, #36946	; 0x9052
 47c:	00524353 	subseq	r4, r2, r3, asr r3
 480:	31424841 	cmpcc	r2, r1, asr #16
 484:	00524e45 	subseq	r4, r2, r5, asr #28
 488:	52474643 	subpl	r4, r7, #70254592	; 0x4300000
 48c:	49434300 	stmdbmi	r3, {r8, r9, lr}^
 490:	41005250 	tstmi	r0, r0, asr r2
 494:	53314250 	teqpl	r1, #80, 4
 498:	524e454d 	subpl	r4, lr, #322961408	; 0x13400000
 49c:	50410031 	subpl	r0, r1, r1, lsr r0
 4a0:	4d533142 	ldfmie	f3, [r3, #-264]	; 0xfffffef8
 4a4:	32524e45 	subscc	r4, r2, #1104	; 0x450
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	4120554e 			; <UNDEFINED> instruction: 0x4120554e
   c:	45206d72 	strmi	r6, [r0, #-3442]!	; 0xfffff28e
  10:	6465626d 	strbtvs	r6, [r5], #-621	; 0xfffffd93
  14:	20646564 	rsbcs	r6, r4, r4, ror #10
  18:	6c6f6f54 	stclvs	15, cr6, [pc], #-336	; fffffed0 <STK+0xfffffeac>
  1c:	69616863 	stmdbvs	r1!, {r0, r1, r5, r6, fp, sp, lr}^
  20:	3031206e 	eorscc	r2, r1, lr, rrx
  24:	322d332e 	eorcc	r3, sp, #-1207959552	; 0xb8000000
  28:	2e313230 	mrccs	2, 1, r3, cr1, cr0, {1}
  2c:	20293730 	eorcs	r3, r9, r0, lsr r7
  30:	332e3031 			; <UNDEFINED> instruction: 0x332e3031
  34:	3220312e 	eorcc	r3, r0, #-2147483637	; 0x8000000b
  38:	30313230 	eorscc	r3, r1, r0, lsr r2
  3c:	20313236 	eorscs	r3, r1, r6, lsr r2
  40:	6c657228 	sfmvs	f7, 2, [r5], #-160	; 0xffffff60
  44:	65736165 	ldrbvs	r6, [r3, #-357]!	; 0xfffffe9b
  48:	Address 0x00000048 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003241 	andeq	r3, r0, r1, asr #4
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000028 	andeq	r0, r0, r8, lsr #32
  10:	726f4305 	rsbvc	r4, pc, #335544320	; 0x14000000
  14:	2d786574 	cfldr64cs	mvdx6, [r8, #-464]!	; 0xfffffe30
  18:	0600344d 	streq	r3, [r0], -sp, asr #8
  1c:	094d070d 	stmdbeq	sp, {r0, r2, r3, r8, r9, sl}^
  20:	14041202 	strne	r1, [r4], #-514	; 0xfffffdfe
  24:	17011501 	strne	r1, [r1, -r1, lsl #10]
  28:	19011803 	stmdbne	r1, {r0, r1, fp, ip}
  2c:	1e011a01 	vmlane.f32	s2, s2, s2
  30:	Address 0x00000030 is out of bounds.

