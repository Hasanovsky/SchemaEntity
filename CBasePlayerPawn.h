#pragma once
#include "CBaseEntity.h"
#include "CBaseModelEntity.h"
#include "services.h"

class CBasePlayerPawn : public CBaseModelEntity
{
public:
	DECLARE_SCHEMA_CLASS(CBasePlayerPawn);

	SCHEMA_FIELD(CPlayer_MovementServices*, m_pMovementServices)
	SCHEMA_FIELD(CCSPlayer_WeaponServices*, m_pWeaponServices)
	SCHEMA_FIELD(CCSPlayer_ItemServices*, m_pItemServices)
	SCHEMA_FIELD(CPlayer_ObserverServices*, m_pObserverServices)
	SCHEMA_FIELD(CHandle<CBasePlayerController>, m_hController)

    void CommitSuicide(bool bExplode, bool bForce)
	{
		CALL_VIRTUAL(void, 380, this, bExplode, bForce);
	}

	CBasePlayerController *GetController() { return m_hController.Get(); }
};