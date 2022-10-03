#include "PropItemComboBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

PropItemComboBase::PropItemComboBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("90%");
        this->SetHeight("30dp");
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetFontSize("12dp");
        mTitle->SetTextAlignHor((e3::EAlignment)0);
        mTitle->SetWidth("50%");
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("1dp");
        pElement1->SetMargin("2dp");
        pElement1->SetHeight("50%");
        pElement1->SetBackgroundColor(glm::vec4(180, 180, 180, 255));
        mCombo = new UiComboBox();
        AddElement(mCombo);
        mCombo->SetWidth("50%");
        mCombo->SetHeight("100%");
        mComboHeader = new UiComboBoxHeaderDefault();
        mCombo->AddElement(mComboHeader);
        mComboBody = new UiComboBoxBody();
        mCombo->AddElement(mComboBody);

}
