#include "PropertiesBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

PropertiesBase::PropertiesBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("220dp");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(150, 150, 150, 255));
        this->SetBorderSize("2dp");
        this->SetBorderColor(glm::vec4(50, 50, 50, 255));
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
                UiExpander* pCustomView1 = new UiExpander();
        AddElement(pCustomView1);
        pCustomView1->SetWidth("100%");
                UiExpanderBody* pCustomView2 = new UiExpanderBody();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetWidth("100%");
        pCustomView2->SetBackgroundColor(glm::vec4(255, 0, 0, 255));
        pCustomView2->SetOrientation((e3::EOrientation)1);
        mWidthItem = new PropItemNumber();
        pCustomView2->AddElement(mWidthItem);
        mWidthItem->SetTitle(_s(Width));
        mHeightItem = new PropItemNumber();
        pCustomView2->AddElement(mHeightItem);
        mHeightItem->SetTitle(_s(Height));
                UiExpander* pCustomView3 = new UiExpander();
        AddElement(pCustomView3);
        pCustomView3->SetWidth("100%");
                UiExpanderBody* pCustomView4 = new UiExpanderBody();
        pCustomView3->AddElement(pCustomView4);
        pCustomView4->SetWidth("100%");
        pCustomView4->SetBackgroundColor(glm::vec4(255, 0, 0, 255));
        pCustomView4->SetOrientation((e3::EOrientation)1);
        mMarginLeftItem = new PropItemNumber();
        pCustomView4->AddElement(mMarginLeftItem);
        mMarginLeftItem->SetTitle(_s(Left));
        mMarginRightItem = new PropItemNumber();
        pCustomView4->AddElement(mMarginRightItem);
        mMarginRightItem->SetTitle(_s(Right));
        mMarginTopItem = new PropItemNumber();
        pCustomView4->AddElement(mMarginTopItem);
        mMarginTopItem->SetTitle(_s(Top));
        mMarginBottomItem = new PropItemNumber();
        pCustomView4->AddElement(mMarginBottomItem);
        mMarginBottomItem->SetTitle(_s(Bottom));

}
