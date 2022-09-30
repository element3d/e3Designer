
#ifndef Workspace_H_
#define Workspace_H_

#include "private/WorkspaceBase.h"

class E3_EXPORT Workspace : public WorkspaceBase
{
public:
	Workspace(e3::Element* pParent = nullptr);

	virtual void OnDrop(e3::DragEvent* pEvent) override;
};

#endif // Workspace_H_

