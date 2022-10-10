#include "WorkspaceBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

WorkspaceBase::WorkspaceBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetScaling((e3::EScaling)1);
        this->SetBackgroundColor(glm::vec4(250, 250, 250, 255));
        this->SetBorderRadius(20);
        mSelectionItem = new SelectionItem();
        AddElement(mSelectionItem);

}
