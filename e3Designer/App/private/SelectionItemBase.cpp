#include "SelectionItemBase.h"

#include <e3/ViewFactory.h>
#include ".//e3DesignerValues.h"

SelectionItemBase::SelectionItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(1);
        this->SetHeight(1);
        this->SetPositionType((e3::EPositionType)1);
        this->SetLeft(0);
        this->SetTop(0);
        this->SetBorderSize(2);
        this->SetBorderColor(glm::vec4(0, 0, 0, 255));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth(10);
        pElement1->SetHeight(10);
        pElement1->SetBackgroundColor(glm::vec4(0, 255, 255, 255));
        pElement1->SetPositionType((e3::EPositionType)1);
        pElement1->SetLeft(-5);
        pElement1->SetTop(-5);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement2);
        pElement2->SetWidth(10);
        pElement2->SetHeight(10);
        pElement2->SetBackgroundColor(glm::vec4(0, 255, 255, 255));
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetRight(-5);
        pElement2->SetTop(-5);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement3);
        pElement3->SetWidth(10);
        pElement3->SetHeight(10);
        pElement3->SetBackgroundColor(glm::vec4(0, 255, 255, 255));
        pElement3->SetPositionType((e3::EPositionType)1);
        pElement3->SetLeft(-5);
        pElement3->SetBottom(-5);
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement4);
        pElement4->SetWidth(10);
        pElement4->SetHeight(10);
        pElement4->SetBackgroundColor(glm::vec4(255, 255, 0, 255));
        pElement4->SetPositionType((e3::EPositionType)1);
        pElement4->SetRight(-5);
        pElement4->SetBottom(-5);

}
