#pragma once
#include "CModelPointEntity.h"

enum class PointWorldTextJustifyHorizontal_t : uint32_t {
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
};

enum class PointWorldTextJustifyVertical_t : uint32_t {
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

class CPointWorldText : public CModelPointEntity
{
public:
	DECLARE_SCHEMA_CLASS(CPointWorldText)

	SCHEMA_FIELD_POINTER(char, m_messageText)
	SCHEMA_FIELD_POINTER(char, m_FontName)
	SCHEMA_FIELD_POINTER(char, m_BackgroundMaterialName)
	SCHEMA_FIELD(bool, m_bEnabled)
	SCHEMA_FIELD(bool, m_bFullbright)
	SCHEMA_FIELD(float32, m_flWorldUnitsPerPx)
	SCHEMA_FIELD(float32, m_flFontSize)
	SCHEMA_FIELD(float32, m_flDepthOffset)
	SCHEMA_FIELD(bool, m_bDrawBackground)
	SCHEMA_FIELD(float32, m_flBackgroundBorderWidth)
	SCHEMA_FIELD(float32. m_flBackgroundBorderHeight)
	SCHEMA_FIELD(float32, m_flBackgroundWorldToUV)
	SCHEMA_FIELD_POINTER(Color, m_Color)
	SCHEMA_FIELD(PointWorldTextJustifyHorizontal_t, m_nJustifyHorizontal)
	SCHEMA_FIELD(PointWorldTextJustifyVertical_t, m_nJustifyVertical)
};
