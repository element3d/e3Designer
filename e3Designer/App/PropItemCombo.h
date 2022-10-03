
#ifndef PropItemCombo_H_
#define PropItemCombo_H_

#include "private/PropItemComboBase.h"

class E3_EXPORT PropItemCombo : public PropItemComboBase
{
public:
	PropItemCombo(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
};

#endif // PropItemCombo_H_

