#include "PropItemNumberBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

PropItemNumberBase::PropItemNumberBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("30dp");
        this->SetBackgroundColor(glm::vec4(255));
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetFontSize("14dp");
        mTitle->SetWidth("50%");
        mValue = e3::ViewFactory::CreateInput();
        AddElement(mValue);
        mValue->SetWidth("50%");
        mValue->SetHeight("100%");
        mValue->SetFontSize(14);

}
