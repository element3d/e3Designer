
#ifndef __PropItemNumberBase_H__
#define __PropItemNumberBase_H__

#include <e3/ViewFactory.h>
#include "UiColor.h"


class PropItemNumberBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    PropItemNumberBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;
e3::Input* mValue = nullptr;


};

#endif // __PropItemNumberBase_H__

