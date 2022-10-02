#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetAlignItemsHor((e3::EAlignment)0);
        mToolbox = new Toolbox();
        AddElement(mToolbox);
        mWorkspace = new Workspace();
        AddElement(mWorkspace);
        mProperties = new Properties();
        AddElement(mProperties);

}
