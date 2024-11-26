#pragma once
#include "CModelPointEntity.h"

class CPointWorldText : public CModelPointEntity
{
public:
	DECLARE_SCHEMA_CLASS(CPointWorldText)

	SCHEMA_FIELD(char[512], m_messageText)
	SCHEMA_FIELD(CUtlSymbolLarge, m_FontName)
	SCHEMA_FIELD(CUtlSymbolLarge, m_BackgroundMaterialName)
	SCHEMA_FIELD(bool, m_bEnabled)
	SCHEMA_FIELD(bool, m_bFullbright)
	SCHEMA_FIELD(float32, m_flWorldUnitsPerPx)
	SCHEMA_FIELD(float32, m_flFontSize)
	SCHEMA_FIELD(float32, m_flDepthOffset)
	SCHEMA_FIELD(bool, m_bDrawBackground)
	SCHEMA_FIELD_POINTER(Color, m_Color)
	//float32 m_flBackgroundBorderWidth;
	//float32 m_flBackgroundBorderHeight;
	//float32 m_flBackgroundWorldToUV;
};
