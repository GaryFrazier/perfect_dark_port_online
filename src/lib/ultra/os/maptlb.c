#include <libultra_internal.h>
#include "data.h"

GLOBAL_ASM(
glabel osMapTLB
/*    4e1b0:	40085000 */ 	mfc0	$t0,$10
/*    4e1b4:	40840000 */ 	mtc0	$a0,$0
/*    4e1b8:	40852800 */ 	mtc0	$a1,$5
/*    4e1bc:	8fa90014 */ 	lw	$t1,0x14($sp)
/*    4e1c0:	2401ffff */ 	addiu	$at,$zero,-1
/*    4e1c4:	11210004 */ 	beq	$t1,$at,.L0004e1d8
/*    4e1c8:	240c0001 */ 	addiu	$t4,$zero,0x1
/*    4e1cc:	240a001e */ 	addiu	$t2,$zero,0x1e
/*    4e1d0:	10000002 */ 	b	.L0004e1dc
/*    4e1d4:	00c93025 */ 	or	$a2,$a2,$t1
.L0004e1d8:
/*    4e1d8:	240a001f */ 	addiu	$t2,$zero,0x1f
.L0004e1dc:
/*    4e1dc:	40865000 */ 	mtc0	$a2,$10
/*    4e1e0:	2401ffff */ 	addiu	$at,$zero,-1
/*    4e1e4:	10e10006 */ 	beq	$a3,$at,.L0004e200
/*    4e1e8:	00000000 */ 	nop
/*    4e1ec:	00075982 */ 	srl	$t3,$a3,0x6
/*    4e1f0:	016a5825 */ 	or	$t3,$t3,$t2
/*    4e1f4:	408b1000 */ 	mtc0	$t3,$2
/*    4e1f8:	10000002 */ 	b	.L0004e204
/*    4e1fc:	00000000 */ 	nop
.L0004e200:
/*    4e200:	408c1000 */ 	mtc0	$t4,$2
.L0004e204:
/*    4e204:	8fab0010 */ 	lw	$t3,0x10($sp)
/*    4e208:	2401ffff */ 	addiu	$at,$zero,-1
/*    4e20c:	11610006 */ 	beq	$t3,$at,.L0004e228
/*    4e210:	00000000 */ 	nop
/*    4e214:	000b5982 */ 	srl	$t3,$t3,0x6
/*    4e218:	016a5825 */ 	or	$t3,$t3,$t2
/*    4e21c:	408b1800 */ 	mtc0	$t3,$3
/*    4e220:	10000007 */ 	b	.L0004e240
/*    4e224:	00000000 */ 	nop
.L0004e228:
/*    4e228:	408c1800 */ 	mtc0	$t4,$3
/*    4e22c:	2401ffff */ 	addiu	$at,$zero,-1
/*    4e230:	14e10003 */ 	bne	$a3,$at,.L0004e240
/*    4e234:	00000000 */ 	nop
/*    4e238:	3c0b8000 */ 	lui	$t3,0x8000
/*    4e23c:	408b5000 */ 	mtc0	$t3,$10
.L0004e240:
/*    4e240:	00000000 */ 	nop
/*    4e244:	42000002 */ 	tlbwi
/*    4e248:	00000000 */ 	nop
/*    4e24c:	00000000 */ 	nop
/*    4e250:	00000000 */ 	nop
/*    4e254:	00000000 */ 	nop
/*    4e258:	40885000 */ 	mtc0	$t0,$10
/*    4e25c:	03e00008 */ 	jr	$ra
/*    4e260:	00000000 */ 	nop
);
