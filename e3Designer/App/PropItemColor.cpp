#include "PropItemColor.h"

PropItemColor::PropItemColor(e3::Element* pParent)
	: PropItemColorBase(pParent)
{
	mValue->SetOnChangeCallback([this](const std::string& text) {
		if (mOnChangeCallback) mOnChangeCallback(text);
	});
}

void PropItemColor::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void PropItemColor::SetValue(const std::string& value)
{
	mValue->SetText(value);
}