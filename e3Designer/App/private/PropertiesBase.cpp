#include "PropertiesBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

PropertiesBase::PropertiesBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("100%");
        this->SetBorderColor(glm::vec4(220, 220, 220, 255));
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
                UiExpander* pCustomView1 = new UiExpander();
        AddElement(pCustomView1);
        pCustomView1->SetWidth("100%");
                UiExpanderHeaderDefault* pCustomView2 = new UiExpanderHeaderDefault();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetTitle(_s(Size));
                UiExpanderBody* pCustomView3 = new UiExpanderBody();
        pCustomView1->AddElement(pCustomView3);
        pCustomView3->SetWidth("100%");
        pCustomView3->SetAlignItemsHor((e3::EAlignment)1);
        pCustomView3->SetOrientation((e3::EOrientation)1);
        mWidthItem = new PropItemNumber();
        pCustomView3->AddElement(mWidthItem);
        mWidthItem->SetTitle(_s(Width));
        mHeightItem = new PropItemNumber();
        pCustomView3->AddElement(mHeightItem);
        mHeightItem->SetTitle(_s(Height));
                UiExpander* pCustomView4 = new UiExpander();
        AddElement(pCustomView4);
        pCustomView4->SetWidth("100%");
                UiExpanderHeaderDefault* pCustomView5 = new UiExpanderHeaderDefault();
        pCustomView4->AddElement(pCustomView5);
        pCustomView5->SetTitle(_s(Margin));
                UiExpanderBody* pCustomView6 = new UiExpanderBody();
        pCustomView4->AddElement(pCustomView6);
        pCustomView6->SetWidth("100%");
        pCustomView6->SetAlignItemsHor((e3::EAlignment)1);
        pCustomView6->SetOrientation((e3::EOrientation)1);
        mMarginLeftItem = new PropItemNumber();
        pCustomView6->AddElement(mMarginLeftItem);
        mMarginLeftItem->SetTitle(_s(Left));
        mMarginRightItem = new PropItemNumber();
        pCustomView6->AddElement(mMarginRightItem);
        mMarginRightItem->SetTitle(_s(Right));
        mMarginTopItem = new PropItemNumber();
        pCustomView6->AddElement(mMarginTopItem);
        mMarginTopItem->SetTitle(_s(Top));
        mMarginBottomItem = new PropItemNumber();
        pCustomView6->AddElement(mMarginBottomItem);
        mMarginBottomItem->SetTitle(_s(Bottom));
                UiExpander* pCustomView7 = new UiExpander();
        AddElement(pCustomView7);
        pCustomView7->SetWidth("100%");
                UiExpanderHeaderDefault* pCustomView8 = new UiExpanderHeaderDefault();
        pCustomView7->AddElement(pCustomView8);
        pCustomView8->SetTitle(_s(Padding));
                UiExpanderBody* pCustomView9 = new UiExpanderBody();
        pCustomView7->AddElement(pCustomView9);
        pCustomView9->SetWidth("100%");
        pCustomView9->SetAlignItemsHor((e3::EAlignment)1);
        pCustomView9->SetOrientation((e3::EOrientation)1);
        mPaddingLeftItem = new PropItemNumber();
        pCustomView9->AddElement(mPaddingLeftItem);
        mPaddingLeftItem->SetTitle(_s(Left));
        mPaddingRightItem = new PropItemNumber();
        pCustomView9->AddElement(mPaddingRightItem);
        mPaddingRightItem->SetTitle(_s(Right));
        mPaddingTopItem = new PropItemNumber();
        pCustomView9->AddElement(mPaddingTopItem);
        mPaddingTopItem->SetTitle(_s(Top));
        mPaddingBottomItem = new PropItemNumber();
        pCustomView9->AddElement(mPaddingBottomItem);
        mPaddingBottomItem->SetTitle(_s(Bottom));
                UiExpander* pCustomView10 = new UiExpander();
        AddElement(pCustomView10);
        pCustomView10->SetWidth("100%");
                UiExpanderHeaderDefault* pCustomView11 = new UiExpanderHeaderDefault();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetTitle(_s(Layout));
                UiExpanderBody* pCustomView12 = new UiExpanderBody();
        pCustomView10->AddElement(pCustomView12);
        pCustomView12->SetWidth("100%");
        pCustomView12->SetAlignItemsHor((e3::EAlignment)1);
        pCustomView12->SetOrientation((e3::EOrientation)1);
        mOrientationItem = new PropItemCombo();
        pCustomView12->AddElement(mOrientationItem);
        mOrientationItem->SetTitle(_s(Orientation));
                UiComboBoxItem* pCustomView13 = new UiComboBoxItem();
        mOrientationItem->AddElement(pCustomView13);
        pCustomView13->SetTitle(_s(Horizontal));
                UiComboBoxItem* pCustomView14 = new UiComboBoxItem();
        mOrientationItem->AddElement(pCustomView14);
        pCustomView14->SetTitle(_s(Vertical));
        mAlignItemsHorItem = new PropItemCombo();
        pCustomView12->AddElement(mAlignItemsHorItem);
        mAlignItemsHorItem->SetTitle(_s(AlignItemsHor));
                UiComboBoxItem* pCustomView15 = new UiComboBoxItem();
        mAlignItemsHorItem->AddElement(pCustomView15);
        pCustomView15->SetTitle(_s(Center));
                UiComboBoxItem* pCustomView16 = new UiComboBoxItem();
        mAlignItemsHorItem->AddElement(pCustomView16);
        pCustomView16->SetTitle(_s(Start));
                UiComboBoxItem* pCustomView17 = new UiComboBoxItem();
        mAlignItemsHorItem->AddElement(pCustomView17);
        pCustomView17->SetTitle(_s(End));
                UiComboBoxItem* pCustomView18 = new UiComboBoxItem();
        mAlignItemsHorItem->AddElement(pCustomView18);
        pCustomView18->SetTitle(_s(SpaceBetween));
                UiComboBoxItem* pCustomView19 = new UiComboBoxItem();
        mAlignItemsHorItem->AddElement(pCustomView19);
        pCustomView19->SetTitle(_s(SpaceAround));
        mAlignItemsVerItem = new PropItemCombo();
        pCustomView12->AddElement(mAlignItemsVerItem);
        mAlignItemsVerItem->SetTitle(_s(AlignItemsVer));
                UiComboBoxItem* pCustomView20 = new UiComboBoxItem();
        mAlignItemsVerItem->AddElement(pCustomView20);
        pCustomView20->SetTitle(_s(Center));
                UiComboBoxItem* pCustomView21 = new UiComboBoxItem();
        mAlignItemsVerItem->AddElement(pCustomView21);
        pCustomView21->SetTitle(_s(Start));
                UiComboBoxItem* pCustomView22 = new UiComboBoxItem();
        mAlignItemsVerItem->AddElement(pCustomView22);
        pCustomView22->SetTitle(_s(End));
                UiComboBoxItem* pCustomView23 = new UiComboBoxItem();
        mAlignItemsVerItem->AddElement(pCustomView23);
        pCustomView23->SetTitle(_s(SpaceBetween));
                UiComboBoxItem* pCustomView24 = new UiComboBoxItem();
        mAlignItemsVerItem->AddElement(pCustomView24);
        pCustomView24->SetTitle(_s(SpaceAround));
                UiExpander* pCustomView25 = new UiExpander();
        AddElement(pCustomView25);
        pCustomView25->SetWidth("100%");
                UiExpanderHeaderDefault* pCustomView26 = new UiExpanderHeaderDefault();
        pCustomView25->AddElement(pCustomView26);
        pCustomView26->SetTitle(_s(Background));
                UiExpanderBody* pCustomView27 = new UiExpanderBody();
        pCustomView25->AddElement(pCustomView27);
        pCustomView27->SetWidth("100%");
        pCustomView27->SetAlignItemsHor((e3::EAlignment)1);
        pCustomView27->SetOrientation((e3::EOrientation)1);
        mBgColorItem = new PropItemColor();
        pCustomView27->AddElement(mBgColorItem);
        mBgColorItem->SetTitle(_s(Color));
        mBgImageItem = new PropItemNumber();
        pCustomView27->AddElement(mBgImageItem);
        mBgImageItem->SetTitle(_s(Image));

}
