
#ifndef __PropertiesBase_H__
#define __PropertiesBase_H__

#include <e3/ViewFactory.h>
#include <UiExpander.h>
#include <UiExpanderBody.h>
#include <PropItemNumber.h>


class PropertiesBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    PropertiesBase(e3::Element* pParent = nullptr);

 
protected:
	PropItemNumber* mWidthItem = nullptr;
PropItemNumber* mHeightItem = nullptr;
PropItemNumber* mMarginLeftItem = nullptr;
PropItemNumber* mMarginRightItem = nullptr;
PropItemNumber* mMarginTopItem = nullptr;
PropItemNumber* mMarginBottomItem = nullptr;


};

#endif // __PropertiesBase_H__

