#ifndef _IN_GAME_MPLAYER_SETUP_H
#define _IN_GAME_MPLAYER_SETUP_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

char *mpGetCurrentPlayerName(struct menuitem *item);
s16 mpChooseRandomStage(void);
s32 menuhandler001791c8(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextWeaponNameForSlot(struct menuitem *item);
char *mpMenuTextSetupName(struct menuitem *item);
s32 func0f179da4(s32 operation, struct menuitem *item, union handlerdata *data, s32 mpheadnum, s32 mpbodynum, s32 arg5);
s32 menudialog0017a174(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 mpChallengesListHandler(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextKills(struct menuitem *item);
char *mpMenuTextDeaths(struct menuitem *item);
char *mpMenuTextGamesPlayed(struct menuitem *item);
char *mpMenuTextGamesWon(struct menuitem *item);
char *mpMenuTextGamesLost(struct menuitem *item);
char *mpMenuTextHeadShots(struct menuitem *item);
char *mpMenuTextMedalAccuracy(struct menuitem *item);
char *mpMenuTextMedalHeadShot(struct menuitem *item);
char *mpMenuTextMedalKillMaster(struct menuitem *item);
char *mpMenuTextMedalSurvivor(struct menuitem *item);
char *mpMenuTextAmmoUsed(struct menuitem *item);
char *mpMenuTextDistance(struct menuitem *item);
char *mpMenuTextTime(struct menuitem *item);
char *mpMenuTextAccuracy(struct menuitem *item);
void mpFormatDamageValue(char *dst, f32 damage);
char *mpMenuTextPainReceived(struct menuitem *item);
char *mpMenuTextDamageDealt(struct menuitem *item);
s32 menuhandlerMpMedal(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTitleStatsForPlayerName(struct menudialog *dialog);
char *mpMenuTextUsernamePassword(struct menuitem *item);
s32 func0f17b4f8(s32 operation, struct menuitem *item, union handlerdata *data, s32 mpheadnum, bool arg4);
char *mpMenuTextBodyName(struct menuitem *item);
void func0f17b8f0(void);
s32 mpPlayerNameMenuHandler(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandler0017bab4(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextMpconfigMarquee(struct menuitem *item);
s32 mpLoadPlayerMenuHandler(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpHandicapPlayer(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextHandicapPlayerName(struct menuitem *item);
s32 menuhandler0017c6a4(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextSimulantDescription(struct menuitem *item);
s32 menudialog0017ccfc(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 mpBotDifficultyMenuHandler(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTitleEditSimulant(struct menudialog *dialog);
char *mpMenuTextSimulantName(struct menuitem *item);
s32 menuhandlerMpNTeams(s32 operation, struct menuitem *item, union handlerdata *data, s32 numteams);
char *mpMenuTextChrNameForTeamSetup(struct menuitem *item);
s32 func0f17dac4(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextSelectTuneOrTunes(struct menuitem *item);
s32 mpSelectTuneListHandler(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextCurrentTrack(struct menuitem *item);
s32 mpTeamNameMenuHandler(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextTeamName(struct menuitem *item);
char *func0f17e318(struct menudialog *dialog);
s32 menudialog0017e3fc(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menuhandler0017e4d4(s32 operation, struct menuitem *item, union handlerdata *data);
char *mpMenuTextChallengeName(struct menuitem *item);
s32 mpCombatChallengesMenuDialog(s32 operation, struct menudialog *dialog, union handlerdata *data);
char *mpMenuTextSavePlayerOrCopy(struct menuitem *item);
char *mpMenuTextArenaName(struct menuitem *item);
char *mpMenuTextWeaponSetName(struct menuitem *item);
void mpConfigureQuickTeamPlayers(void);
void mpConfigureQuickTeamSimulants(void);
void func0f17f428(void);
s32 menuhandlerPlayerTeam(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpNumberOfSimulants(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSimulantsPerTeam(s32 operation, struct menuitem *item, union handlerdata *data);
s32 mpQuickTeamSimulantDifficultyHandler(s32 operation, struct menuitem *item, union handlerdata *data);
void mpCloseDialogsForNewSetup(void);
void func0f17fcb0(s32 silent);
s32 menuhandlerMpSlowMotion(s32 operation, struct menuitem *item, union handlerdata *data);
void htbAddPad(s16 padnum);
void htbRemoveAmmoCrateAtPad(s16 padnum);
void htbReset(void);
void htbCreateToken(void);
Gfx *htbRenderHud(Gfx *gdl);
void ctcInitProps(void);
bool ctcHighlightProp(struct prop *prop, s32 *colour);
void ctcAddPad(s32 *cmd);
void ctcHighlightRoom(s16 roomnum, s32 *arg1, s32 *arg2, s32 *arg3);
void kohTick(void);
Gfx *kohRenderHud(Gfx *gdl);
void kohAddHill(s32 *cmd);
void kohHighlightRoom(s16 roomnum, s32 *arg1, s32 *arg2, s32 *arg3);
void htmAddPad(s16 padnum);
void htmReset(void);
void htbCreateUplink(void);
void htmInitProps(void);
void htmTickChr(struct chrdata *chr);
Gfx *htmRenderHud(Gfx *gdl);
Gfx *htmRadarExtra(Gfx *gdl);
void pacReset(void);
bool pacHighlightProp(struct prop *prop, s32 *colour);
void pacApplyNextVictim(void);
void pacHandleDeath(s32 cplayernum, s32 vplayernum);
void pacTick(void);
Gfx *pacRenderHud(Gfx *gdl);
bool pacRadarChr(Gfx **gdl, struct prop *prop);
s32 mpOptionsMenuDialog(s32 operation, struct menudialog *dialog, union handlerdata *data);
char *mpMenuTextScenarioShortName(struct menuitem *item);
char *mpMenuTextScenarioName(struct menuitem *item);
s32 scenarioScenarioMenuHandler(s32 operation, struct menuitem *item, union handlerdata *data);
void scenarioCreateMatchStartHudmsgs(void);
Gfx *scenarioRenderHud(Gfx *gdl);
void scenarioCalculatePlayerScore(struct mpchrconfig *mpchr, s32 chrnum, s32 *arg2, s32 *arg3);
bool scenarioHighlightProp(struct prop *prop, s32 *colour);
void scenarioReset(void);
struct prop *scenarioCreateObj(s32 modelnum, s16 padnum, f32 arg2, u32 flags, u32 flags2, u32 flags3);
void scenarioCreateHudmsg(s32 playernum, char *message);
bool scenarioChrsAreSameTeam(s32 playernum1, s32 playernum2);
s32 scenarioPickUpBriefcase(struct chrdata *chr, struct prop *prop);
void scenarioHandleDroppedToken(struct chrdata *chr, struct prop *prop);
s32 scenarioPickUpUplink(struct chrdata *chr, struct prop *prop);
void scenarioHandleActivatedProp(struct chrdata *chr, struct prop *prop);
s32 menuhandlerMpDropOut(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpTeamsLabel(s32 operation, struct menuitem *item, union handlerdata *data);
s32 mpGetNumStages(void);
s32 menuhandlerMpControlStyle(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpWeaponSlot(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpWeaponSetDropdown(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpControlCheckbox(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpAimControl(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpCheckboxOption(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpTeamsEnabled(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpDisplayOptionCheckbox(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpConfirmSaveChr(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSetupName(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSaveSetupOverwrite(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSaveSetupCopy(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpCharacterBody(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpUsernamePassword(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpCharacterHead(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpTimeLimitSlider(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpScoreLimitSlider(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpTeamScoreLimitSlider(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpRestoreScoreDefaults(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpRestoreHandicapDefaults(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menudialogMpReady(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menudialogMpSimulant(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menuhandlerMpSimulantHead(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSimulantBody(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpDeleteSimulant(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpChangeSimulantType(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpClearAllSimulants(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpAddSimulant(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSimulantSlot(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menudialogMpSimulants(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menuhandlerMpTwoTeams(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpThreeTeams(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpFourTeams(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpMaximumTeams(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpHumansVsSimulants(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpHumanSimulantPairs(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpTeamSlot(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menudialogMpSelectTune(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menuhandlerMpMultipleTunes(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpTeamNameSlot(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandler0017e38c(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandler0017e9d8(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpAbortChallenge(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpStartChallenge(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandler0017ec64(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpLock(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSavePlayer(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandler0017ef30(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpSaveSettings(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menudialogMpGameSetup(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menudialogMpQuickGo(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menuhandlerMpFinishedSetup(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerQuickTeamSeparator(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpQuickTeamOption(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menudialogCombatSimulator(s32 operation, struct menudialog *dialog, union handlerdata *data);
s32 menuhandlerMpAdvancedSetup(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpDisplayTeam(s32 operation, struct menuitem *item, union handlerdata *data);
s32 menuhandlerMpOneHitKills(s32 operation, struct menuitem *item, union handlerdata *data);

#endif
