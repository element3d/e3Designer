#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetAlignItemsHor((e3::EAlignment)0);
                Toolbox* pCustomView1 = new Toolbox();
        AddElement(pCustomView1);
                Workspace* pCustomView2 = new Workspace();
        AddElement(pCustomView2);
                Properties* pCustomView3 = new Properties();
        AddElement(pCustomView3);

}
