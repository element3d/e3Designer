#include "PropItemNumber.h"

PropItemNumber::PropItemNumber(e3::Element* pParent)
	: PropItemNumberBase(pParent)
{
	mValue->SetOnChangeCallback([this](const std::string& text) {
		if (mOnChangeCallback) mOnChangeCallback(atoi(text.c_str()));
	});
}

void PropItemNumber::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void PropItemNumber::SetValue(const std::string& value)
{
	mValue->SetText(value);
}