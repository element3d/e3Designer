#include "Main.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	mWorkspace->SetProperties(mProperties);
	mProperties->SetWorkspace(mWorkspace);
}
