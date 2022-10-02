
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <Toolbox.h>
#include <Workspace.h>
#include <Properties.h>


class MainBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainBase(e3::Element* pParent = nullptr);

 
protected:
	Toolbox* mToolbox = nullptr;
Workspace* mWorkspace = nullptr;
Properties* mProperties = nullptr;


};

#endif // __MainBase_H__

