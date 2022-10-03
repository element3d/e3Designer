
#ifndef PropItemColor_H_
#define PropItemColor_H_

#include "private/PropItemColorBase.h"

class E3_EXPORT PropItemColor : public PropItemColorBase
{
		typedef std::function<void(const std::string& color)> OnChangeCallback;

public:
	PropItemColor(e3::Element* pParent = nullptr);

	void SetOnChangeCallback(OnChangeCallback onChangeCallback) { mOnChangeCallback = onChangeCallback; }
	void SetTitle(const std::string& title, bool translate = false);
	void SetValue(const std::string& value);

private:
	OnChangeCallback mOnChangeCallback;
};

#endif // PropItemColor_H_

