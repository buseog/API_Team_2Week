#pragma once
#include "maingame.h"

class CStage1 :	
	public CMainGame
{
private:
	int		iWave;
	list<CObj*>*		m_ListObj[OBJ_END];

public:
	virtual void Initialize(void);
	virtual void Progress(float _Time);
	virtual void Render(void);
	virtual void Release(void);

public:
	void SetListObj(int _iNum, list<CObj*>* _pListObj);
	int Clear(void);
public:
	CStage1(void);
	~CStage1(void);
};