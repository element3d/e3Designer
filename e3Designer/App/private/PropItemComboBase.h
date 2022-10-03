
#ifndef __PropItemComboBase_H__
#define __PropItemComboBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"
#include <UiComboBox.h>
#include <UiComboBoxHeaderDefault.h>
#include <UiComboBoxBody.h>


class PropItemComboBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    PropItemComboBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;
UiComboBox* mCombo = nullptr;
UiComboBoxHeaderDefault* mComboHeader = nullptr;
UiComboBoxBody* mComboBody = nullptr;


};

#endif // __PropItemComboBase_H__

