#include "Properties.h"

Properties::Properties(e3::Element* pParent)
	: PropertiesBase(pParent)
{
	mWidthItem->SetOnChangeCallback([this](int value) {
		if (mElements) mElements->SetWidth(value);
	});
}

void Properties::SetElement(e3::Element* pElement)
{
	mElements = pElement;
	mWidthItem->SetValue(std::to_string((int)pElement->GetGeometry().width));
	mHeightItem->SetValue(std::to_string((int)pElement->GetGeometry().height));

	mMarginLeftItem->SetValue(std::to_string((int)pElement->GetMarginLeft()));
	mMarginRightItem->SetValue(std::to_string((int)pElement->GetMarginRight()));
	mMarginTopItem->SetValue(std::to_string((int)pElement->GetMarginTop()));
	mMarginBottomItem->SetValue(std::to_string((int)pElement->GetMarginBottom()));
}