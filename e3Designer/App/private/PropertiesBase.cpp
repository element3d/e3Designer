#include "PropertiesBase.h"

#include <e3/ViewFactory.h>
#include "e3DesignerValues.h"

PropertiesBase::PropertiesBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("220dp");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(150, 150, 150, 255));
        this->SetBorderSize("2dp");
        this->SetBorderColor(glm::vec4(50, 50, 50, 255));

}
