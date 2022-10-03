#include "PropItemColorBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

PropItemColorBase::PropItemColorBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("90%");
        this->SetHeight("30dp");
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetFontSize("12dp");
        mTitle->SetTextAlignHor((e3::EAlignment)0);
        mTitle->SetWidth("50%");
        mValue = e3::ViewFactory::CreateInput();
        AddElement(mValue);
        mValue->SetWidth("50%");
        mValue->SetHeight("100%");
        mValue->SetFontSize(12);

}
