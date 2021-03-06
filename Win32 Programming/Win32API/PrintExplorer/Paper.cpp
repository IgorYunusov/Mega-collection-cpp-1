#include "stdafx.h"
#include "enumedit.h"
#include "resource.h"

ENUMEDIT t_dmPaperSize[] = {
	{ DMPAPER_LETTER, IDS_DMPAPER_LETTER},
	{ DMPAPER_LEGAL,  IDS_DMPAPER_LEGAL},
	{ DMPAPER_A4,     IDS_DMPAPER_A4},
	{ DMPAPER_CSHEET, IDS_DMPAPER_CSHEET},
	{ DMPAPER_DSHEET, IDS_DMPAPER_DSHEET},
	{ DMPAPER_ESHEET, IDS_DMPAPER_ESHEET},
	{ DMPAPER_LETTERSMALL, IDS_DMPAPER_LETTERSMALL},
	{ DMPAPER_TABLOID, IDS_DMPAPER_TABLOID},
	{ DMPAPER_LEDGER,  IDS_DMPAPER_LEDGER},
	{ DMPAPER_STATEMENT, IDS_DMPAPER_STATEMENT},
	{ DMPAPER_EXECUTIVE, IDS_DMPAPER_EXECUTIVE},
	{ DMPAPER_A3,        IDS_DMPAPER_A3},
	{ DMPAPER_A4SMALL,   IDS_DMPAPER_A4SMALL},
	{ DMPAPER_A5,        IDS_DMPAPER_A5},
	{ DMPAPER_B4,        IDS_DMPAPER_B4},
	{ DMPAPER_B5,        IDS_DMPAPER_B5},
	{ DMPAPER_FOLIO,     IDS_DMPAPER_FOLIO},
	{ DMPAPER_QUARTO,    IDS_DMPAPER_QUARTO},
	{ DMPAPER_10X14,     IDS_DMPAPER_10X14},
        { DMPAPER_11X17,     IDS_DMPAPER_11X17},
	{ DMPAPER_NOTE,      IDS_DMPAPER_NOTE},
	{ DMPAPER_ENV_9,     IDS_DMPAPER_ENV_9},
	{ DMPAPER_ENV_10,    IDS_DMPAPER_ENV_10},
	{ DMPAPER_ENV_11,    IDS_DMPAPER_ENV_11},
	{ DMPAPER_ENV_12,    IDS_DMPAPER_ENV_12},
	{ DMPAPER_ENV_14,    IDS_DMPAPER_ENV_14},
	{ DMPAPER_ENV_DL,    IDS_DMPAPER_ENV_DL},
	{ DMPAPER_ENV_C5,    IDS_DMPAPER_ENV_C5},
	{ DMPAPER_ENV_C3,    IDS_DMPAPER_ENV_C3},
	{ DMPAPER_ENV_C4,    IDS_DMPAPER_ENV_C4},
	{ DMPAPER_ENV_C6,    IDS_DMPAPER_ENV_C6},
	{ DMPAPER_ENV_B4,    IDS_DMPAPER_ENV_B4},
	{ DMPAPER_ENV_B5,    IDS_DMPAPER_ENV_B5},
	{ DMPAPER_ENV_B6,    IDS_DMPAPER_ENV_B6},
	{ DMPAPER_ENV_ITALY, IDS_DMPAPER_ENV_ITALY},
	{ DMPAPER_ENV_MONARCH,   IDS_DMPAPER_ENV_MONARCH},
	{ DMPAPER_ENV_PERSONAL,IDS_DMPAPER_ENV_PERSONAL},
	{ DMPAPER_FANFOLD_US,IDS_DMPAPER_FANFOLD_US},
	{ DMPAPER_FANFOLD_STD_GERMAN,IDS_DMPAPER_FANFOLD_STD_GERMAN},
	{ DMPAPER_FANFOLD_LGL_GERMAN,IDS_DMPAPER_FANFOLD_LGL_GERMAN},
	{ DMPAPER_ISO_B4,	IDS_DMPAPER_ISO_B4 },
	{ DMPAPER_JAPANESE_POSTCARD,	IDS_DMPAPER_JAPANESE_POSTCARD },
	{ DMPAPER_9X11,	IDS_DMPAPER_9X11 },
	{ DMPAPER_10X11,	IDS_DMPAPER_10X11 },
	{ DMPAPER_15X11,	IDS_DMPAPER_15X11 },
	{ DMPAPER_ENV_INVITE,	IDS_DMPAPER_ENV_INVITE },
	{ DMPAPER_RESERVED_48,	IDS_DMPAPER_RESERVED_48 },
	{ DMPAPER_RESERVED_49,	IDS_DMPAPER_RESERVED_49 },
	{ DMPAPER_LETTER_EXTRA,	IDS_DMPAPER_LETTER_EXTRA },
	{ DMPAPER_LEGAL_EXTRA,	IDS_DMPAPER_LEGAL_EXTRA },
	{ DMPAPER_TABLOID_EXTRA,	IDS_DMPAPER_TABLOID_EXTRA },
	{ DMPAPER_A4_EXTRA,	IDS_DMPAPER_A4_EXTRA },
	{ DMPAPER_LETTER_TRANSVERSE,	IDS_DMPAPER_LETTER_TRANSVERSE },
	{ DMPAPER_A4_TRANSVERSE,	IDS_DMPAPER_A4_TRANSVERSE },
	{ DMPAPER_LETTER_EXTRA_TRANSVERSE,	IDS_DMPAPER_LETTER_EXTRA_TRANSVERSE },
	{ DMPAPER_A_PLUS,	IDS_DMPAPER_A_PLUS },
	{ DMPAPER_B_PLUS,	IDS_DMPAPER_B_PLUS },
	{ DMPAPER_LETTER_PLUS,	IDS_DMPAPER_LETTER_PLUS },
	{ DMPAPER_A4_PLUS,	IDS_DMPAPER_A4_PLUS },
	{ DMPAPER_A5_TRANSVERSE,	IDS_DMPAPER_A5_TRANSVERSE },
	{ DMPAPER_B5_TRANSVERSE,	IDS_DMPAPER_B5_TRANSVERSE },
	{ DMPAPER_A3_EXTRA,	IDS_DMPAPER_A3_EXTRA },
	{ DMPAPER_A5_EXTRA,	IDS_DMPAPER_A5_EXTRA },
	{ DMPAPER_B5_EXTRA,	IDS_DMPAPER_B5_EXTRA },
	{ DMPAPER_A2,	IDS_DMPAPER_A2 },
	{ DMPAPER_A3_TRANSVERSE,	IDS_DMPAPER_A3_TRANSVERSE },
	{ DMPAPER_A3_EXTRA_TRANSVERSE,	IDS_DMPAPER_A3_EXTRA_TRANSVERSE },
	{ 0, 0 } // EOT
				  };

/****************************************************************************
*                                 getPaperID
* Inputs:
*       int paper: a DM_PAPER value
* Result: UINT
*       The string ID of a resource string that contains the print name
*	of the paper, or 0 if there is no entry in the table
****************************************************************************/

UINT getPaperID(int paper)
    {
     for(int i = 0; t_dmPaperSize[i].id != 0; i++)
	if(paper == t_dmPaperSize[i].val)
	   return t_dmPaperSize[i].id;

     return 0;
    }
