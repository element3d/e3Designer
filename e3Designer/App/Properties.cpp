#include "Properties.h"
#include "Workspace.h"

Properties::Properties(e3::Element* pParent)
	: PropertiesBase(pParent)
{
	mWidthItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetWidth(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	mHeightItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetHeight(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	// Margin
	mMarginLeftItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetMarginLeft(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	mMarginRightItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetMarginRight(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	mMarginTopItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetMarginTop(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	mMarginBottomItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetMarginBottom(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	// Padding
	mPaddingLeftItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetPaddingLeft(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	mPaddingRightItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetPaddingRight(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	mPaddingTopItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetPaddingTop(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	mPaddingBottomItem->SetOnChangeCallback([this](int value) {
		if (mElement) 
		{
			mElement->SetPaddingBottom(value);
			if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});

	// Background
	mBgColorItem->SetOnChangeCallback([this](const std::string& value) {
		if (mElement) 
		{
			mElement->SetBackgroundColor(value);
			//if (mWorkspace) mWorkspace->UpdateSelection(mElement);
		}
	});
}

void Properties::SetElement(e3::Element* pElement)
{
	mElement = pElement;
	mWidthItem->SetValue(std::to_string((int)pElement->GetGeometry().width));
	mHeightItem->SetValue(std::to_string((int)pElement->GetGeometry().height));

	mMarginLeftItem->SetValue(std::to_string((int)pElement->GetMarginLeft()));
	mMarginRightItem->SetValue(std::to_string((int)pElement->GetMarginRight()));
	mMarginTopItem->SetValue(std::to_string((int)pElement->GetMarginTop()));
	mMarginBottomItem->SetValue(std::to_string((int)pElement->GetMarginBottom()));

	mPaddingLeftItem->SetValue(std::to_string((int)pElement->GetPaddingLeft()));
	mPaddingRightItem->SetValue(std::to_string((int)pElement->GetPaddingRight()));
	mPaddingTopItem->SetValue(std::to_string((int)pElement->GetPaddingTop()));
	mPaddingBottomItem->SetValue(std::to_string((int)pElement->GetPaddingBottom()));
}