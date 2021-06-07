#ifndef IN_GAME_BG_H
#define IN_GAME_BG_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void roomUnpauseProps(u32 roomnum, bool tintedglassonly);
void func0f157e94(s32 room, s32 arg1, struct screenbox *arg2);
void func0f158108(s32 roomnum, u8 *arg1, u8 *arg2);
struct var800a4640_00 *func0f158140(s32 roomnum);
u32 func0f158184(void);
u32 func0f158400(void);
u32 func0f158884(void);
u32 func0f158d9c(void);
u32 func0f1598b4(void);
u32 func0f159f1c(void);
u32 func0f15a0fc(void);
u32 func0f15a2c4(void);
u32 func0f15a6f4(void);
Gfx *func0f15b114(Gfx *gdl);
void bgLoadFile(void *memaddr, u32 offset, u32 len);
s32 stageGetIndex2(s32 stagenum);
f32 func0f15b274(s32 portal);
u8 func0f15b4c0(s32 portal);
u32 not(u32 arg);
u32 xorBabebabe(u32 value);
void bgInit(s32 stagenum);
void bgBuildTables(s32 stagenum);
void func0f15c850(void);
void func0f15c880(f32 arg0);
f32 func0f15c888(void);
f32 currentPlayerGetScaleBg2Gfx(void);
void currentPlayerSetScaleBg2Gfx(f32 arg0);
void func0f15c920(void);
void roomsTick(void);
Gfx *bgRender(Gfx *gdl);
Gfx *currentPlayerScissorToViewport(Gfx *gdl);
Gfx *currentPlayerScissorWithinViewportF(Gfx *gdl, f32 viewleft, f32 viewtop, f32 viewright, f32 viewbottom);
Gfx *currentPlayerScissorWithinViewport(Gfx *gdl, s32 viewleft, s32 viewtop, s32 viewright, s32 viewbottom);
void func0f15cd28(void);
bool func0f15cd90(u32 room, struct screenbox *arg1);
bool func0f15d08c(struct coord *a, struct coord *b);
bool func0f15d10c(s32 portal, struct screenbox *arg1);
Gfx *boxRenderBorder(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2);
bool boxGetIntersection(struct screenbox *a, struct screenbox *b);
void boxExpand(struct screenbox *a, struct screenbox *b);
void boxCopy(struct screenbox *dst, struct screenbox *src);
bool roomIsVisibleByAnyPlayer(s32 room);
bool roomIsVisibleByAnyAibot(s32 room);
bool roomIsVisibleByPlayer(s32 room, u32 playernum);
bool roomIsVisibleByAibot(s32 room, u32 aibotindex);
s32 func0f15d870(void *arg0);
u32 bgInflate(void *src, void *dst, u32 len);
u32 func0f15da00(void);
u32 func0f15dab4(void);
u32 func0f15dbb4(void);
void func0f15dc58(s32 roomnum);
void func0f15e474(s32 room);
void func0f15e538(void);
void func0f15e5b8(s32 size, u32 arg1);
void func0f15e728(void);
Gfx *func0f15e85c(Gfx *gdl, s32 roomnum, u32 arg2, bool arg3);
Gfx *func0f15eb28(Gfx *gdl, s32 roomnum);
Gfx *func0f15ebd4(Gfx *gdl, s32 roomnum);
u32 func0f15ecd8(void);
u32 func0f15ef9c(void);
u32 func0f15f20c(void);
u32 func0f15f2b0(void);
u32 func0f15f560(void);
u32 func0f15ffdc(void);
u32 func0f160a38(void);
u32 func0f1612e4(void);
bool func0f161520(struct coord *arg0, struct coord *arg1, s16 room, struct coord *arg3);
s32 func0f161ab4(s32 room);
bool roomContainsCoord(struct coord *pos, s16 roomnum);
bool func0f161c08(struct coord *arg0, s16 roomnum);
void func0f161d30(struct coord *arg0, s16 roomnum);
void func0f162128(struct coord *arg0, s16 roomnum);
void func0f162194(struct coord *pos, s16 *rooms1, s16 *rooms2, s32 len, s16 *arg4);
bool portalPushValue(bool value);
bool portalPopValue(void);
bool portalGetNthValueFromEnd(s32 offset);
struct portalcmd *portalCommandsExecute(struct portalcmd *cmd, bool s2);
struct portalcmd *portalCommandsExecuteForCurrentPlayer(struct portalcmd *cmd);
u32 func0f162d9c(void);
void func0f1632d4(s16 roomnum1, s16 roomnum2, s16 arg2, struct screenbox *box);
void func0f163528(struct var800a4d00 *arg0);
bool func0f163904(void);
u32 func0f16397c(void);
void func0f163e34(void);
Gfx *func0f164150(Gfx *gdl);
s32 roomsGetActive(s16 *rooms, s32 len);
s32 roomGetNeighbours(s32 room, s16 *rooms, s32 len);
bool roomsAreNeighbours(s32 roomnum1, s32 roomnum2);
void currentPlayerCalculateScreenProperties(void);
void func0f1648cc(s32 roomnum);
void portalSwapRooms(u32 portal);
void func0f164ab8(s32 portalnum);
void func0f164c64(s32 roomnum);
void portalSetEnabled(s32 portal, bool enable);
s32 func0f164e8c(struct coord *arg0, struct coord *arg1);
u32 func0f164f9c(void);
u32 func0f165004(void);
void func0f1650d0(struct coord *lower, struct coord *upper, s16 *rooms, s32 arg3, s32 arg4);

#endif
