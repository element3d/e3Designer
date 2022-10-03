
#ifndef __PropItemColorBase_H__
#define __PropItemColorBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"


class PropItemColorBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    PropItemColorBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;
e3::Input* mValue = nullptr;


};

#endif // __PropItemColorBase_H__

