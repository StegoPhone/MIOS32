// $Id: scale.h 1221 2011-06-15 17:47:17Z tk $
/*
 * Header file for scale routines
 *
 * ==========================================================================
 *
 *  Copyright (C) 2008 Thorsten Klose (tk@midibox.org)
 *  Licensed for personal non-commercial use only.
 *  All other rights reserved.
 * 
 * ==========================================================================
 */

#ifndef _FORCE_TO_SCALE_H
#define _FORCE_TO_SCALE_H


/////////////////////////////////////////////////////////////////////////////
// Global definitions
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Global Types
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

extern s32 FTS_Init(u32 mode);

extern s32 FTS_NumGet(void);
extern char *FTS_NameGet(u8 scale);

extern s32 FTS_Note(mios32_midi_package_t *p, u8 scale, u8 root);


/////////////////////////////////////////////////////////////////////////////
// Export global variables
/////////////////////////////////////////////////////////////////////////////

#endif /* _FORCE_TO_SCALE_H */
