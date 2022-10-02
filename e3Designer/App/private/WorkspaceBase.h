
#ifndef __WorkspaceBase_H__
#define __WorkspaceBase_H__

#include <e3/ViewFactory.h>
#include <SelectionItem.h>


class WorkspaceBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    WorkspaceBase(e3::Element* pParent = nullptr);

 
protected:
	SelectionItem* mSelectionItem = nullptr;


};

#endif // __WorkspaceBase_H__

