#include "ToolboxBase.h"

#include <e3/ViewFactory.h>
#include ".//e3DesignerValues.h"

ToolboxBase::ToolboxBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("100%");
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetBackgroundColor(glm::vec4(255));
        this->SetBorderSize(0);
        this->SetBorderColor(glm::vec4(50, 50, 50, 255));
        mTree = new UiTreeView();
        AddElement(mTree);

}
