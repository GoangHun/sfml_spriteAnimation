#pragma once
#include "ShapeGo.h"
#include "Player.h"

class Ground :
    public ShapeGo
{
protected:
	Player* player = nullptr;

public:
	Ground(const std::string& n = "");
	virtual ~Ground();

	virtual void Init() override;
	virtual void Release() override;

	virtual void Reset() override;

	virtual void Update(float dt) override;

	void SetPlayer(Player* player) { this->player = player; }
	
};

