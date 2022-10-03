#include "TreeViewItemIconHeaderBase.h"

#include <e3/ViewFactory.h>
#include ".//e3DesignerValues.h"

TreeViewItemIconHeaderBase::TreeViewItemIconHeaderBase(e3::Element* pParent)
	: UiTreeViewItemHeader(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("22dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetMarginLeft("10dp");
        mIcon->SetMarginRight("10dp");
        mIcon->SetWidth("16dp");
        mIcon->SetHeight("16dp");
        mIcon->SetColor(glm::vec4(20, 20, 20, 255));
        mIcon->SetFont(_s(UiKit/icons/Segoe_Fluent_Icons.ttf));
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetFontSize("14dp");

}
