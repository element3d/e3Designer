
#ifndef __ToolboxBase_H__
#define __ToolboxBase_H__

#include <e3/ViewFactory.h>
#include <UiTreeView.h>


class ToolboxBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    ToolboxBase(e3::Element* pParent = nullptr);

 
protected:
	UiTreeView* mTree = nullptr;


};

#endif // __ToolboxBase_H__

