#include "PropItemCombo.h"

PropItemCombo::PropItemCombo(e3::Element* pParent)
	: PropItemComboBase(pParent)
{

}

void PropItemCombo::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}