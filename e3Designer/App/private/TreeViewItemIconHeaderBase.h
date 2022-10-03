
#ifndef __TreeViewItemIconHeaderBase_H__
#define __TreeViewItemIconHeaderBase_H__

#include <e3/ViewFactory.h>
#include "UiTreeViewItemHeader.h"


class TreeViewItemIconHeaderBase : public UiTreeViewItemHeader
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TreeViewItemIconHeaderBase(e3::Element* pParent = nullptr);

 
protected:
	e3::FontIcon* mIcon = nullptr;
e3::Text* mText = nullptr;


};

#endif // __TreeViewItemIconHeaderBase_H__

