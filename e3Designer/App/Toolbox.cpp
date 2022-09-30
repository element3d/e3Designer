#include "Toolbox.h"

Toolbox::Toolbox(e3::Element* pParent)
	: ToolboxBase(pParent)
{
	UiTreeViewItem* pE3Item = new UiTreeViewItem();
	pE3Item->SetText("Element 3D");
	mTree->AddElement(pE3Item);

	UiTreeViewItem* pElementItem = new UiTreeViewItem();
	pElementItem->SetText("Element");
	pElementItem->SetAcceptDrag(true);
	pE3Item->AddElement(pElementItem);

	UiTreeViewItem* pTextItem = new UiTreeViewItem();
	pTextItem->SetText("Text");
	pTextItem->SetAcceptDrag(true);
	pE3Item->AddElement(pTextItem);
}
