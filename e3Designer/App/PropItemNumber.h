
#ifndef PropItemNumber_H_
#define PropItemNumber_H_

#include "private/PropItemNumberBase.h"

class E3_EXPORT PropItemNumber : public PropItemNumberBase
{
	typedef std::function<void(int)> OnChangeCallback;
public:
	PropItemNumber(e3::Element* pParent = nullptr);

	void SetOnChangeCallback(OnChangeCallback onChangeCallback) { mOnChangeCallback = onChangeCallback; }
	void SetTitle(const std::string& title, bool translate = false);
	void SetValue(const std::string& value);

private:
	OnChangeCallback mOnChangeCallback;
};

#endif // PropItemNumber_H_

