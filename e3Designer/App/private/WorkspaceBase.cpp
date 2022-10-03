#include "WorkspaceBase.h"

#include <e3/ViewFactory.h>
#include ".//e3DesignerValues.h"

WorkspaceBase::WorkspaceBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetScaling((e3::EScaling)1);
        mSelectionItem = new SelectionItem();
        AddElement(mSelectionItem);

}
