#pragma once
#include "CBaseEntity.h"
#include "globaltypes.h"

enum class RenderMode_t : uint8_t
{
	kRenderNormal = 0x0,
	kRenderTransColor = 0x1,
	kRenderTransTexture = 0x2,
	kRenderGlow = 0x3,
	kRenderTransAlpha = 0x4,
	kRenderTransAdd = 0x5,
	kRenderEnvironmental = 0x6,
	kRenderTransAddFrameBlend = 0x7,
	kRenderTransAlphaAdd = 0x8,
	kRenderWorldGlow = 0x9,
	kRenderNone = 0xa,
	kRenderDevVisualizer = 0xb,
	kRenderModeCount = 0xc,
};

class CBaseModelEntity : public CBaseEntity
{
public:
	DECLARE_SCHEMA_CLASS(CBaseModelEntity);

	SCHEMA_FIELD(CCollisionProperty , m_Collision)
	SCHEMA_FIELD(CGlowProperty, m_Glow)
	SCHEMA_FIELD(Color, m_clrRender)
	SCHEMA_FIELD(RenderMode_t, m_nRenderMode)
	SCHEMA_FIELD(float, m_flDissolveStartTime)
	SCHEMA_FIELD(Vector, m_vecViewOffset)
    
	CUtlSymbolLarge GetModelName()
	{
		if(m_CBodyComponent == nullptr) return CUtlSymbolLarge();
		if(m_CBodyComponent->m_pSceneNode == nullptr) return CUtlSymbolLarge();
		if(((CSkeletonInstance*)m_CBodyComponent->m_pSceneNode.Get()) == nullptr) return CUtlSymbolLarge();
		return ((CSkeletonInstance*)m_CBodyComponent->m_pSceneNode.Get())->m_modelState().m_ModelName.Get();
	}

	Vector GetEyePosition()
	{
		const auto x = m_vecViewOffset();
		return x + GetAbsOrigin();
	}
};

class CBaseProp : public CBaseModelEntity
{
public:
	DECLARE_SCHEMA_CLASS(CBaseProp);
};

class CBeam : public CBaseModelEntity
{
public:
	DECLARE_SCHEMA_CLASS(CBeam);
    SCHEMA_FIELD(Vector, m_vecEndPos);
    SCHEMA_FIELD(float, m_fWidth);
};
