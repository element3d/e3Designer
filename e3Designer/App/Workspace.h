
#ifndef Workspace_H_
#define Workspace_H_

#include "private/WorkspaceBase.h"
#include "Properties.h"

class E3_EXPORT Workspace : public WorkspaceBase
{
public:
	Workspace(e3::Element* pParent = nullptr);

	void SetProperties(Properties* pProperties) { mProperties = pProperties; }
	virtual void OnDrop(e3::DragEvent* pEvent) override;

	void UpdateSelection(e3::Element* pElement);

private:
	Properties* mProperties = nullptr;
};

#endif // Workspace_H_

